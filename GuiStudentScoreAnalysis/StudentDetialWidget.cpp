#include"StudentDetialWidget.h"

StudentDetialWidget::StudentDetialWidget(QWidget *parent) {
	ui.setupUi(this);
}
void StudentDetialWidget::attachG(Generate* g) {
	this->g = g;

}
void StudentDetialWidget::attachK(string key) {
	this->key = key;
	be = g->stuKeys->search(key).at(0);
	string in = "ID: " + be.getKey() + " Name: " + be.getName();

	ui.StudentDlabel->setText(in.c_str());
	setBar();
}
void StudentDetialWidget::setBar() {
	vector<subject> sb;
	sb = be.getSub();
	vector<subject>::iterator iter;

	QStringList header;
	header << "level" << "subject" << "score";
	ui.testTableWidget->setColumnCount(3);
	ui.testTableWidget->setRowCount(sb.size());
	ui.testTableWidget->setHorizontalHeaderLabels(header);
	
	
	int count = 0;
	for (iter = sb.begin(); iter != sb.end(); iter++) {
		subject temp = *iter;
		string a = to_string(temp.getLevel());
		ui.testTableWidget->setItem(count, 0, new QTableWidgetItem(a.c_str()));
		ui.testTableWidget->setItem(count, 1, new QTableWidgetItem(temp.getName().c_str()));
		a = to_string(temp.getScore());
		ui.testTableWidget->setItem(count, 2, new QTableWidgetItem(a.c_str()));
		count++;

	}
	ui.testTableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
	ui.testTableWidget->show();
}
