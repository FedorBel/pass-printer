#include "widget.h"
#include "ui_widget.h"
#include <QAxObject>
#include <QVariant>
#include <QDir>
#include <QDate>

void replaceString(const QString& oldString, const QString& newString, QAxObject* pword)
{
  QAxObject* WordSelection = pword->querySubObject("Selection");

  QAxObject* Find = WordSelection->querySubObject("Find");
  if (!Find) return;
  Find->dynamicCall("ClearFormatting()");

  QList<QVariant> params;
  params.operator << (QVariant(oldString));
  params.operator << (QVariant("0"));
  params.operator << (QVariant("0"));
  params.operator << (QVariant("0"));
  params.operator << (QVariant("0"));
  params.operator << (QVariant("0"));
  params.operator << (QVariant(true));
  params.operator << (QVariant("0"));
  params.operator << (QVariant("0"));
  params.operator << (QVariant(newString));
  params.operator << (QVariant("2"));
  params.operator << (QVariant("0"));
  params.operator << (QVariant("0"));
  params.operator << (QVariant("0"));
  params.operator << (QVariant("0"));
  Find->dynamicCall("Execute(const QVariant&,const QVariant&,"
                    "const QVariant&,const QVariant&,"
                    "const QVariant&,const QVariant&,"
                    "const QVariant&,const QVariant&,"
                    "const QVariant&,const QVariant&,"
                    "const QVariant&,const QVariant&,"
                    "const QVariant&,const QVariant&,const QVariant&)",
                    params);

}



Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    // Дата
    QDate date = QDate::currentDate();
    QString day = date.toString("d");
    QString month = date.toString("MMMM");
    QString year = date.toString("yyyy");
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_printButton_clicked()
{
    // Путь
    QString path = QDir::currentPath().append("\\\\test.doc");
    path.replace("/", "\\\\");
    // Дата
    QDate date = QDate::currentDate();
    QString day = date.toString("d");
    QString month = date.toString("MMMM");
    QString year = date.toString("yyyy");
    // Имя
    QString second_name = ui->second_name->text();
    QString first_name = ui->first_name->text();
    QString sur_name = ui->sur_name->text();
    QString full_name = second_name + " " + first_name + " " + sur_name;
    // Год рождения
    QString birth = ui->birth->text();
    // Машина
    QString car = ui->car->text();
    QString car_num = ui->car_num->text();

    QAxObject* pword = new QAxObject("Word.Application");
    QAxObject* pdoc = pword->querySubObject("Documents");

    pdoc = pdoc->querySubObject("Open(const QString&)", path);

    //pword->setProperty("Visible", true);

    replaceString("$_name", full_name, pword);
    replaceString("$_birth", birth, pword);
    replaceString("$_car_num", car_num, pword);
    replaceString("$_car", car, pword);
    replaceString("$_day", day, pword);
    replaceString("$_month", month, pword);
    replaceString("$_year", year, pword);

    // Печать
    //pword->querySubObject("ActiveDocument")->dynamicCall("PrintOut()");

    // Закрываем
    pword->querySubObject("ActiveDocument")->setProperty("Saved", "True");
    pword->querySubObject("ActiveDocument")->dynamicCall("Close()");
    pword->dynamicCall("Quit()");

    ui->check_label->setText("Завершено!");
}

void Widget::on_resetButton_clicked()
{
    ui->first_name->setText("");
    ui->second_name->setText("");
    ui->sur_name->setText("");
    ui->birth->setText("");
    ui->car->setText("");
    ui->car_num->setText("");
    ui->check_label->setText("Ожидание");
}
