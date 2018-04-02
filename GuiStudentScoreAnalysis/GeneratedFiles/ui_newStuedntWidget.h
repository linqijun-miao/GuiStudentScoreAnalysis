/********************************************************************************
** Form generated from reading UI file 'newStuedntWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWSTUEDNTWIDGET_H
#define UI_NEWSTUEDNTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewStudent
{
public:
    QLabel *IDlabel;
    QLabel *Namelabel;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QWidget *NewStudent)
    {
        if (NewStudent->objectName().isEmpty())
            NewStudent->setObjectName(QStringLiteral("NewStudent"));
        NewStudent->resize(486, 127);
        IDlabel = new QLabel(NewStudent);
        IDlabel->setObjectName(QStringLiteral("IDlabel"));
        IDlabel->setGeometry(QRect(70, 40, 72, 15));
        Namelabel = new QLabel(NewStudent);
        Namelabel->setObjectName(QStringLiteral("Namelabel"));
        Namelabel->setGeometry(QRect(290, 10, 72, 15));
        lineEdit = new QLineEdit(NewStudent);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(250, 40, 113, 21));
        pushButton = new QPushButton(NewStudent);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(190, 80, 93, 28));

        retranslateUi(NewStudent);
        QObject::connect(pushButton, SIGNAL(clicked()), NewStudent, SLOT(addStu()));

        QMetaObject::connectSlotsByName(NewStudent);
    } // setupUi

    void retranslateUi(QWidget *NewStudent)
    {
        NewStudent->setWindowTitle(QApplication::translate("NewStudent", "NewStudent", nullptr));
        IDlabel->setText(QApplication::translate("NewStudent", "TextLabel", nullptr));
        Namelabel->setText(QApplication::translate("NewStudent", "Name", nullptr));
        pushButton->setText(QApplication::translate("NewStudent", "Confirm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewStudent: public Ui_NewStudent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWSTUEDNTWIDGET_H
