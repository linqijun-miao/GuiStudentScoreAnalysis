/********************************************************************************
** Form generated from reading UI file 'StudentDetialWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTDETIALWIDGET_H
#define UI_STUDENTDETIALWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StudentDetialWidget
{
public:
    QLabel *StudentDlabel;
    QTableWidget *testTableWidget;

    void setupUi(QWidget *StudentDetialWidget)
    {
        if (StudentDetialWidget->objectName().isEmpty())
            StudentDetialWidget->setObjectName(QStringLiteral("StudentDetialWidget"));
        StudentDetialWidget->resize(574, 486);
        StudentDlabel = new QLabel(StudentDetialWidget);
        StudentDlabel->setObjectName(QStringLiteral("StudentDlabel"));
        StudentDlabel->setGeometry(QRect(20, 20, 231, 21));
        testTableWidget = new QTableWidget(StudentDetialWidget);
        testTableWidget->setObjectName(QStringLiteral("testTableWidget"));
        testTableWidget->setGeometry(QRect(15, 61, 541, 401));

        retranslateUi(StudentDetialWidget);

        QMetaObject::connectSlotsByName(StudentDetialWidget);
    } // setupUi

    void retranslateUi(QWidget *StudentDetialWidget)
    {
        StudentDetialWidget->setWindowTitle(QApplication::translate("StudentDetialWidget", "StudentDetial", nullptr));
        StudentDlabel->setText(QApplication::translate("StudentDetialWidget", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentDetialWidget: public Ui_StudentDetialWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTDETIALWIDGET_H
