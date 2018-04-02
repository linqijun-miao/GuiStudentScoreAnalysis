#pragma once
#include<qwidget.h>
#include"ui_TestDetialWidget.h"
#include"Generate.h"

class TestDetialWidget :public QWidget {
	Q_OBJECT
public:
	Generate * g;
	int level;
	string name;
	TestDetialWidget(QWidget *parent = Q_NULLPTR);
	void attach(Generate *p, int level, string name);
	void setList();
	bool isBase = true;//true��ʾ����ѧ������
public slots:
	void changeSortBasic();
	void addStudentToTest(); 
private:
	Ui::TestDetial ui;
};