/********************************************************************************
** Form generated from reading UI file 'AddTestDetialWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTESTDETIALWIDGET_H
#define UI_ADDTESTDETIALWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChoseSt
{
public:
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *label;
    QPushButton *confirm_pushButton;

    void setupUi(QWidget *ChoseSt)
    {
        if (ChoseSt->objectName().isEmpty())
            ChoseSt->setObjectName(QStringLiteral("ChoseSt"));
        ChoseSt->resize(546, 485);
        scrollArea = new QScrollArea(ChoseSt);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(9, 96, 531, 381));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 529, 379));
        scrollArea->setWidget(scrollAreaWidgetContents);
        label = new QLabel(ChoseSt);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(11, 29, 411, 31));
        confirm_pushButton = new QPushButton(ChoseSt);
        confirm_pushButton->setObjectName(QStringLiteral("confirm_pushButton"));
        confirm_pushButton->setGeometry(QRect(430, 30, 93, 28));

        retranslateUi(ChoseSt);
        QObject::connect(confirm_pushButton, SIGNAL(clicked()), ChoseSt, SLOT(conAdd()));

        QMetaObject::connectSlotsByName(ChoseSt);
    } // setupUi

    void retranslateUi(QWidget *ChoseSt)
    {
        ChoseSt->setWindowTitle(QApplication::translate("ChoseSt", "ChoseST", nullptr));
        label->setText(QApplication::translate("ChoseSt", "TextLabel", nullptr));
        confirm_pushButton->setText(QApplication::translate("ChoseSt", "confirm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChoseSt: public Ui_ChoseSt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTESTDETIALWIDGET_H
