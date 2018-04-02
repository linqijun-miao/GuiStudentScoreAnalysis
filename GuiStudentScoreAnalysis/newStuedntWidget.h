#pragma once
#include"ui_newStuedntWidget.h"
#include<qwidget.h>
#include<Generate.h>
class newStuedntWidget :public QWidget {
	Q_OBJECT
public:
	Generate * g;
	newStuedntWidget(QWidget *parent = Q_NULLPTR);
	void attachG(Generate *p);
public slots:
	void addStu();
private:
	Ui::NewStudent ui;
};
