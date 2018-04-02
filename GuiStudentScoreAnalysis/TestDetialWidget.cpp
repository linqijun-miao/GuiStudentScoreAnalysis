#include"TestDetialWidget.h"
#include<sstream>

TestDetialWidget::TestDetialWidget(QWidget *parent) {
	ui.setupUi(this);
}

void TestDetialWidget::attach(Generate *p, int level, string name) {
	this->g = p;
	this->level = level;
	this->name = name;
}

bool compare(subjects a, subjects b) {
	subject a1 = a.getBeSub();
	subject b1 = b.getBeSub();
	return (a1.getScore() > b1.getScore());
}
void TestDetialWidget::setList() {
	subjectList * t;
	for (g->iter = g->subList.begin(); g->iter != g->subList.end(); g->iter++) {
		t = *g->iter;
		if (t->getName() == name && t->getLevel() == level) {
			break;
		}
	}
	ui.tableWidget->setColumnCount(3);
	ui.tableWidget->setRowCount(t->getList().size());
	QStringList header;
	header << "ID" << "Name" << "Score";
	ui.tableWidget->setHorizontalHeaderLabels(header);
	if (isBase) {
		vector<subjects>::iterator iter;
		vector<subjects> tt = t->getList();
		int count = 0;
		for (iter = tt.begin(); iter != tt.end(); iter++) {
			subjects ttt = *iter;
			ui.tableWidget->setItem(count, 0, new QTableWidgetItem(ttt.getStuKey().c_str()));
			ui.tableWidget->setItem(count, 1, new QTableWidgetItem(ttt.getStuName().c_str()));
			string a = to_string(ttt.getBeSub().getScore());
			ui.tableWidget->setItem(count, 2, new QTableWidgetItem(a.c_str()));
			count++;
		}
	}
	else
	{
		vector<subjects>::iterator iter;
		vector<subjects> tt = t->getList();
		sort(tt.begin(), tt.end(), compare);
		int count = 0;
		for (iter = tt.begin(); iter != tt.end(); iter++) {
			subjects ttt = *iter;
			ui.tableWidget->setItem(count, 0, new QTableWidgetItem(ttt.getStuKey().c_str()));
			ui.tableWidget->setItem(count, 1, new QTableWidgetItem(ttt.getStuName().c_str()));
			string a = to_string(ttt.getBeSub().getScore());
			ui.tableWidget->setItem(count, 2, new QTableWidgetItem(a.c_str()));
			count++;
		}
	}
	ui.tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
	ui.tableWidget->show();
	ostringstream oss;
	oss << "Level: " << to_string(t->getLevel()) << "  " << t->getName();
	string lab = oss.str();
	ui.label->setText(lab.c_str());
}
void TestDetialWidget::changeSortBasic() {
	setList();
	if (isBase) {
		isBase = false;
		ui.PushButton->setText("BaseOnID");

	}
	else {
		isBase = true;
		ui.PushButton->setText("BaseOnScore");
	}
}
void TestDetialWidget::addStudentToTest() {
	 
}
