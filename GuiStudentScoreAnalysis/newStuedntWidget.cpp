#include"newStuedntWidget.h"
#include<qmessagebox.h>
newStuedntWidget::newStuedntWidget(QWidget *parent) {
	ui.setupUi(this);
}
void newStuedntWidget::attachG(Generate *p) {
	g = p;
	string a = "ID: "+ to_string(g->stuNames->whole.size()+1);
	ui.IDlabel->setText(a.c_str());
		
}
void newStuedntWidget::addStu() {
	if (ui.lineEdit->text() == "") {
		QMessageBox::about(this, "ERROR", "can not be empty");
	}
	else {
		string ssname = ui.lineEdit->text().toStdString();
		student nSt(ssname, to_string(g->stuNames->whole.size()+1));
		g->stuKeys->add(nSt.getKey(), nSt);
		g->stuNames->add(nSt.getName(), nSt);
		this->close();
	}
}