#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_GuiStudentScoreAnalysis.h"
#include<vector>
#include"student.h"
#include"Generate.h"
class GuiStudentScoreAnalysis : public QMainWindow
{
	Q_OBJECT
public:
	Generate * g;
	GuiStudentScoreAnalysis(QWidget *parent = Q_NULLPTR);
	void setTable(int type, int row,std::vector<student> list);
	void setTestTable(string name,int level);
	void attachG(Generate * g);
	void setBar();
	void toShowStudent();
public slots:
	void openStudentPanel(int r, int c);
	void menuAct(QAction *a);
private:
	bool isStudent = true;
	Ui::GuiStudentScoreAnalysisClass ui;
	
};
