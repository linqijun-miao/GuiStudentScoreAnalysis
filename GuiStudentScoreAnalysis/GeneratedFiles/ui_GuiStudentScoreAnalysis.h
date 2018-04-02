/********************************************************************************
** Form generated from reading UI file 'GuiStudentScoreAnalysis.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUISTUDENTSCOREANALYSIS_H
#define UI_GUISTUDENTSCOREANALYSIS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GuiStudentScoreAnalysisClass
{
public:
    QWidget *centralWidget;
    QTableWidget *tableWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *GuiStudentScoreAnalysisClass)
    {
        if (GuiStudentScoreAnalysisClass->objectName().isEmpty())
            GuiStudentScoreAnalysisClass->setObjectName(QStringLiteral("GuiStudentScoreAnalysisClass"));
        GuiStudentScoreAnalysisClass->resize(772, 631);
        centralWidget = new QWidget(GuiStudentScoreAnalysisClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tableWidget = new QTableWidget(centralWidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(5, 11, 761, 541));
        GuiStudentScoreAnalysisClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(GuiStudentScoreAnalysisClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 772, 26));
        GuiStudentScoreAnalysisClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(GuiStudentScoreAnalysisClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        GuiStudentScoreAnalysisClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(GuiStudentScoreAnalysisClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        GuiStudentScoreAnalysisClass->setStatusBar(statusBar);

        retranslateUi(GuiStudentScoreAnalysisClass);
        QObject::connect(menuBar, SIGNAL(triggered(QAction*)), GuiStudentScoreAnalysisClass, SLOT(menuAct(QAction*)));
        QObject::connect(tableWidget, SIGNAL(cellClicked(int,int)), GuiStudentScoreAnalysisClass, SLOT(openStudentPanel(int,int)));

        QMetaObject::connectSlotsByName(GuiStudentScoreAnalysisClass);
    } // setupUi

    void retranslateUi(QMainWindow *GuiStudentScoreAnalysisClass)
    {
        GuiStudentScoreAnalysisClass->setWindowTitle(QApplication::translate("GuiStudentScoreAnalysisClass", "GuiStudentScoreAnalysis", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GuiStudentScoreAnalysisClass: public Ui_GuiStudentScoreAnalysisClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUISTUDENTSCOREANALYSIS_H
