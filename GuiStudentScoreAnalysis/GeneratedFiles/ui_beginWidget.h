/********************************************************************************
** Form generated from reading UI file 'beginWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BEGINWIDGET_H
#define UI_BEGINWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_beginWidget
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *beginWidget)
    {
        if (beginWidget->objectName().isEmpty())
            beginWidget->setObjectName(QStringLiteral("beginWidget"));
        beginWidget->resize(458, 300);
        pushButton = new QPushButton(beginWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(170, 90, 93, 28));

        retranslateUi(beginWidget);
        QObject::connect(pushButton, SIGNAL(clicked()), beginWidget, SLOT(openTeacher()));

        QMetaObject::connectSlotsByName(beginWidget);
    } // setupUi

    void retranslateUi(QWidget *beginWidget)
    {
        beginWidget->setWindowTitle(QApplication::translate("beginWidget", "begin", nullptr));
        pushButton->setText(QApplication::translate("beginWidget", "teacher", nullptr));
    } // retranslateUi

};

namespace Ui {
    class beginWidget: public Ui_beginWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BEGINWIDGET_H
