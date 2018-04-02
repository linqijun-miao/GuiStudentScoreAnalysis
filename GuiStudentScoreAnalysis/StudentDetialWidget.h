#pragma once
#include<qwidget.h>
#include"ui_StudentDetialWidget.h"
#include"GuiStudentScoreAnalysis.h"

class StudentDetialWidget :public QWidget {
	Q_OBJECT
public:
	string key;
	Generate * g;
	student be;
	StudentDetialWidget(QWidget *parent = Q_NULLPTR);
	void attachG(Generate *p);
	void attachK(string key);
	void setBar();
private:
	Ui::StudentDetialWidget ui;
};