/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *printButton;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QPushButton *resetButton;
    QLabel *check_label;
    QSplitter *splitter;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QSplitter *splitter_2;
    QLabel *label_7;
    QLabel *label_13;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_6;
    QLabel *label;
    QSplitter *splitter_3;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QLineEdit *second_name;
    QLineEdit *first_name;
    QLineEdit *sur_name;
    QLineEdit *birth;
    QLineEdit *car;
    QLineEdit *car_num;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(292, 348);
        QFont font;
        font.setPointSize(12);
        Widget->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/icon1.png"), QSize(), QIcon::Normal, QIcon::Off);
        Widget->setWindowIcon(icon);
        printButton = new QPushButton(Widget);
        printButton->setObjectName(QString::fromUtf8("printButton"));
        printButton->setGeometry(QRect(150, 290, 100, 30));
        QFont font1;
        font1.setPointSize(10);
        printButton->setFont(font1);
        line = new QFrame(Widget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 260, 301, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(Widget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(101, 17, 20, 331));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(Widget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(0, 9, 301, 16));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        resetButton = new QPushButton(Widget);
        resetButton->setObjectName(QString::fromUtf8("resetButton"));
        resetButton->setGeometry(QRect(30, 305, 51, 21));
        QFont font2;
        font2.setPointSize(8);
        resetButton->setFont(font2);
        check_label = new QLabel(Widget);
        check_label->setObjectName(QString::fromUtf8("check_label"));
        check_label->setGeometry(QRect(20, 280, 71, 20));
        QFont font3;
        font3.setPointSize(9);
        check_label->setFont(font3);
        check_label->setFrameShape(QFrame::Box);
        check_label->setTextFormat(Qt::AutoText);
        splitter = new QSplitter(Widget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(28, 21, 69, 111));
        splitter->setOrientation(Qt::Vertical);
        label_3 = new QLabel(splitter);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);
        splitter->addWidget(label_3);
        label_4 = new QLabel(splitter);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);
        label_4->setLayoutDirection(Qt::LeftToRight);
        label_4->setAutoFillBackground(false);
        label_4->setAlignment(Qt::AlignCenter);
        splitter->addWidget(label_4);
        label_5 = new QLabel(splitter);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignCenter);
        splitter->addWidget(label_5);
        splitter_2 = new QSplitter(Widget);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setGeometry(QRect(18, 181, 85, 71));
        splitter_2->setOrientation(Qt::Vertical);
        label_7 = new QLabel(splitter_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);
        label_7->setAlignment(Qt::AlignCenter);
        splitter_2->addWidget(label_7);
        label_13 = new QLabel(splitter_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font);
        label_13->setAlignment(Qt::AlignCenter);
        splitter_2->addWidget(label_13);
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 140, 100, 35));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font3);
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_6);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font2);

        verticalLayout_2->addWidget(label);

        splitter_3 = new QSplitter(Widget);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setGeometry(QRect(115, 15, 169, 251));
        splitter_3->setOrientation(Qt::Vertical);
        layoutWidget1 = new QWidget(splitter_3);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        second_name = new QLineEdit(layoutWidget1);
        second_name->setObjectName(QString::fromUtf8("second_name"));
        second_name->setFont(font);

        verticalLayout->addWidget(second_name);

        first_name = new QLineEdit(layoutWidget1);
        first_name->setObjectName(QString::fromUtf8("first_name"));
        first_name->setFont(font);

        verticalLayout->addWidget(first_name);

        sur_name = new QLineEdit(layoutWidget1);
        sur_name->setObjectName(QString::fromUtf8("sur_name"));
        sur_name->setFont(font);

        verticalLayout->addWidget(sur_name);

        birth = new QLineEdit(layoutWidget1);
        birth->setObjectName(QString::fromUtf8("birth"));
        birth->setFont(font);

        verticalLayout->addWidget(birth);

        car = new QLineEdit(layoutWidget1);
        car->setObjectName(QString::fromUtf8("car"));
        car->setFont(font);

        verticalLayout->addWidget(car);

        car_num = new QLineEdit(layoutWidget1);
        car_num->setObjectName(QString::fromUtf8("car_num"));
        car_num->setFont(font);

        verticalLayout->addWidget(car_num);

        splitter_3->addWidget(layoutWidget1);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "\320\237\321\200\320\276\320\277\321\203\321\201\320\272\320\260_\320\221\320\260\320\267\320\260", nullptr));
        printButton->setText(QCoreApplication::translate("Widget", "\320\237\320\265\321\207\320\260\321\202\321\214", nullptr));
        resetButton->setText(QCoreApplication::translate("Widget", "\320\241\320\261\321\200\320\276\321\201", nullptr));
        check_label->setText(QCoreApplication::translate("Widget", "\320\236\320\266\320\270\320\264\320\260\320\275\320\270\320\265", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "\320\230\320\274\321\217", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        label_7->setText(QCoreApplication::translate("Widget", "\320\234\320\260\321\200\320\272\320\260 \320\260\320\262\321\202\320\276", nullptr));
        label_13->setText(QCoreApplication::translate("Widget", "\320\235\320\276\320\274\320\265\321\200 \320\260\320\262\321\202\320\276", nullptr));
        label_6->setText(QCoreApplication::translate("Widget", "\320\223\320\276\320\264 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", nullptr));
        label->setText(QCoreApplication::translate("Widget", "(\321\207\320\270\321\201\320\273\320\276, \320\274\320\265\321\201\321\217\321\206, \320\263\320\276\320\264)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
