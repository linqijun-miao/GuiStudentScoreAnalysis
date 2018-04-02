#pragma once
#include<qwidget.h>
#include"ui_AddTestDetialWidget.h"
#include"Generate.h"
#include<qscrollarea.h>
#include <QVBoxLayout> 
#include<QHBoxLayout>
#include<qcheckbox.h>
#include<qlineedit.h>
class AddTestDetialWidget :public QWidget {
	Q_OBJECT
public:
	Generate * g;
	AddTestDetialWidget(QWidget *parent = Q_NULLPTR);
	void attach(Generate *p);
	void sendInfo(int l, string i);
	void setList();
	QScrollArea* scroll;
	QVBoxLayout* layout;
	int level;
	string subjectName;
private:
	
	Ui::ChoseSt ui;


};