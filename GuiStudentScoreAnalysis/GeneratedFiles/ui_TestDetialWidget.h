/********************************************************************************
** Form generated from reading UI file 'TestDetialWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTDETIALWIDGET_H
#define UI_TESTDETIALWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestDetial
{
public:
    QLabel *label;
    QTableWidget *tableWidget;
    QPushButton *PushButton;
    QPushButton *addStudentButton;

    void setupUi(QWidget *TestDetial)
    {
        if (TestDetial->objectName().isEmpty())
            TestDetial->setObjectName(QStringLiteral("TestDetial"));
        TestDetial->resize(619, 514);
        label = new QLabel(TestDetial);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 221, 31));
        tableWidget = new QTableWidget(TestDetial);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(15, 61, 581, 441));
        PushButton = new QPushButton(TestDetial);
        PushButton->setObjectName(QStringLiteral("PushButton"));
        PushButton->setGeometry(QRect(430, 10, 161, 41));
        addStudentButton = new QPushButton(TestDetial);
        addStudentButton->setObjectName(QStringLiteral("addStudentButton"));
        addStudentButton->setGeometry(QRect(310, 17, 101, 31));

        retranslateUi(TestDetial);
        QObject::connect(PushButton, SIGNAL(clicked()), TestDetial, SLOT(changeSortBasic()));
        QObject::connect(addStudentButton, SIGNAL(clicked()), TestDetial, SLOT(addStudentToTest()));

        QMetaObject::connectSlotsByName(TestDetial);
    } // setupUi

    void retranslateUi(QWidget *TestDetial)
    {
        TestDetial->setWindowTitle(QApplication::translate("TestDetial", "TestDetial", nullptr));
        label->setText(QApplication::translate("TestDetial", "TextLabel", nullptr));
        PushButton->setText(QApplication::translate("TestDetial", "BaseOnScore", nullptr));
        addStudentButton->setText(QApplication::translate("TestDetial", "AddStudent", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestDetial: public Ui_TestDetial {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTDETIALWIDGET_H
