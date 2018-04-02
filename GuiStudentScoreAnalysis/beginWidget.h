#pragma once
#include"ui_BeginWidget.h"
#include<qwidget.h>
#include"GuiStudentScoreAnalysis.h"


class BeginWidget:public QWidget
{
	Q_OBJECT
public:
	Generate *g;
	BeginWidget(QWidget *parent = Q_NULLPTR);
	void attachG(Generate *p);
public slots :
	void openTeacher();
private:
		Ui::beginWidget ui;
		GuiStudentScoreAnalysis *sa;
};

