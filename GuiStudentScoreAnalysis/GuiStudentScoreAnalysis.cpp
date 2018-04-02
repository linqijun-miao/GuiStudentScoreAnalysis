#include "GuiStudentScoreAnalysis.h"
#include"StudentDetialWidget.h"
#include"newStuedntWidget.h"
#include"AddTestDetial.h"
#include"TestDetialWidget.h"
#include<qfiledialog.h>
#include<qinputdialog.h>
#include<sstream>

GuiStudentScoreAnalysis::GuiStudentScoreAnalysis(QWidget *parent)
	: QMainWindow(parent)
{
	
	ui.setupUi(this);
	//setBar();
}
bool compare(student a, student b) {
	return a.allAverage > b.allAverage;
}
void GuiStudentScoreAnalysis::setTable(int type, int row, std::vector<student> list) {

	if (type == 0) {
		ui.tableWidget->setAlternatingRowColors(true);
		ui.tableWidget->setColumnCount(row);
		ui.tableWidget->setRowCount(list.size());

		QStringList header;
		header << "ID" << "Name" << "Integrated Average Score";
		ui.tableWidget->setHorizontalHeaderLabels(header);
		std::vector<student>::iterator stuIter;
		int count = 0;
		for (stuIter = list.begin(); stuIter != list.end(); stuIter++) {
			student temp = *stuIter;
			QString a = temp.getKey().c_str();
			ui.tableWidget->setItem(count, 0, new QTableWidgetItem(a));
			ui.tableWidget->setItem(count, 1, new QTableWidgetItem(temp.getName().c_str()));
			string p = to_string(temp.average());
			string b = p.substr(0, p.length() - 5);
			ui.tableWidget->setItem(count, 2, new QTableWidgetItem(b.c_str()));
			count++;
		}
		
	}
	if (type == 1) {//1表示按照分数排名
		ui.tableWidget->setAlternatingRowColors(true);
		ui.tableWidget->setColumnCount(row);
		ui.tableWidget->setRowCount(list.size());

		QStringList header;
		header << "ID" << "Name" << "Integrated Average Score";
		ui.tableWidget->setHorizontalHeaderLabels(header);
		std::vector<student>::iterator stuIter;
		student *t = new student[list.size()];
		int count = 0;
		for (stuIter = list.begin(); stuIter != list.end(); stuIter++) {
			student temp = *stuIter;
			temp.average();
			t[count] = temp;
			count++;
		}
		sort(t, t + list.size(), compare);
		count = 0;
		for (int i = 0; i < list.size(); i++) {
			QString a = t[i].getKey().c_str();
			ui.tableWidget->setItem(count, 0, new QTableWidgetItem(a));
			ui.tableWidget->setItem(count, 1, new QTableWidgetItem(t[i].getName().c_str()));
			string p = to_string(t[i].average());
			string b = p.substr(0, p.length() - 5);
			ui.tableWidget->setItem(count, 2, new QTableWidgetItem(b.c_str()));
			count++;
		}
	}
	if (type == 2) {
		ui.tableWidget->setAlternatingRowColors(true);
		ui.tableWidget->setColumnCount(2);
		ui.tableWidget->setRowCount(g->subList.size());
		QStringList header;
		header << "Level" << "Subject";
		ui.tableWidget->setHorizontalHeaderLabels(header);
		int count = 0;
		for (g->iter = g->subList.begin(); g->iter != g->subList.end(); g->iter++) {
			subjectList *l = *g->iter;
			string dd = to_string(l->getLevel());
			ui.tableWidget->setItem(count, 0, new QTableWidgetItem(dd.c_str()));
			ui.tableWidget->setItem(count, 1, new QTableWidgetItem(l->getName().c_str()));
			count++;
			
		}
	}
	if (type == 3) {
		ui.tableWidget->setAlternatingRowColors(true);
		ui.tableWidget->setColumnCount(3);
		ui.tableWidget->setRowCount(list.size());

		QStringList header;
		header << "ID" << "Name" << "Integrated Average Score";
		ui.tableWidget->setHorizontalHeaderLabels(header);
		std::vector<student>::iterator stuIter;
		int count = 0;
		for (stuIter = list.begin(); stuIter != list.end(); stuIter++) {
			student temp = *stuIter;
			QString a = temp.getKey().c_str();
			ui.tableWidget->setItem(count, 0, new QTableWidgetItem(a));
			ui.tableWidget->setItem(count, 1, new QTableWidgetItem(temp.getName().c_str()));
			string p = to_string(temp.average());
			string b = p.substr(0, p.length() - 5);
			ui.tableWidget->setItem(count, 2, new QTableWidgetItem(b.c_str()));
			count++;
		}
	}
	ui.tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
	ui.tableWidget->resizeColumnsToContents();
	ui.tableWidget->resizeRowsToContents();
	ui.tableWidget->show();
}
void GuiStudentScoreAnalysis::setTestTable(string name,int level) {
	ui.tableWidget->setAlternatingRowColors(true);
	ui.tableWidget->setColumnCount(4);
	subjectList * t;
	for (g->iter = g->subList.begin(); g->iter != g->subList.end(); g->iter++) {
		t = *g->iter;
		if (t->getName() == name && t->getLevel() == level) {
			break;
		}
	}
	ui.tableWidget->setRowCount(t->getList().size());
	QStringList header;
	ostringstream oss;
	oss << t->getName() << "Level: " << t->getLevel();
	header << oss.str().c_str() << "ID" << "Name" << "Score";
	ui.tableWidget->setHorizontalHeaderLabels(header);
	int count = 0;
	vector<subjects>::iterator iter2;
	vector<subjects> lSub = t->getList();
	for (iter2 = lSub.begin(); iter2 != lSub.end(); iter2++) {
		subjects ss = *iter2;
		ui.tableWidget->setItem(count, 1, new QTableWidgetItem(ss.getStuKey().c_str()));
		ui.tableWidget->setItem(count, 1, new QTableWidgetItem(ss.getStuName().c_str()));
		string dd = to_string(ss.getBeSub().getScore());
		ui.tableWidget->setItem(count, 1, new QTableWidgetItem(dd.c_str()));
		count++;
	}
}
void GuiStudentScoreAnalysis::attachG(Generate * p) {
	g = p;
}
void GuiStudentScoreAnalysis::toShowStudent() {
	setTable(0, 2, g->stuNames->whole);
}
void GuiStudentScoreAnalysis::setBar() {
	QMenu * fileM = new QMenu("File");
	fileM->addAction("New");
	fileM->addAction("Open");
	fileM->addAction("Save");
	ui.menuBar->addMenu(fileM);

	QMenu * studentM = new QMenu("Student");
	studentM->addAction("New Student");
	studentM->addAction("MyStudent");
	studentM->addAction("Integrated Ranking");
	studentM->addAction("Search");
	ui.menuBar->addMenu(studentM);
	

	//vector<subjectList*>::iterator itera;
	
	QMenu * testM = new QMenu("Test");
	testM->addAction("MyTest");
	testM->addAction("AddTest");
	ui.menuBar->addMenu(testM);
}
void creat(string fileLocation) {
	fstream c(fileLocation, ios_base::out);
	c << EOF;
	c.close();
}
void GuiStudentScoreAnalysis::menuAct(QAction * a) {
	string p = a->text().toStdString();
	if (p == "MyStudent") {

		setTable(0, 3, g->stuNames->whole);
		isStudent = true;
		return;
	}
	if (p == "Integrated Ranking") {
		setTable(1, 3, g->stuNames->whole);
		isStudent = true;
		return;
	}
	if (p == "MyTest") {
		isStudent = false;
		setTable(2, 0, g->stuNames->whole);
		return;
	}
	if (p == "New") {
		QString path = QFileDialog::getSaveFileName(NULL, "New student Info", ".", "*.txt");
		creat(path.toStdString());
		cout << path.toStdString();
		g = new Generate(true, path.toStdString());
		return;
	}
	if (p == "Open") {
		QString path = QFileDialog::getOpenFileName(NULL, "Open stuInfo", ".", "*.txt");
		g = new Generate(false, path.toStdString());

		return;
	}
	if (p == "Save") {
		g->writeFile(g->Path);
		return;
	}
	if (p == "New Student") {
		newStuedntWidget *nsw = new newStuedntWidget();
		nsw->attachG(g);
		nsw->show();
		return;
	}
	if (p == "Search") {
		bool ok;
		string keyOrName = QInputDialog::getText(this, "Search", "ID or Name", QLineEdit::Normal, "", &ok).toStdString();
		if (ok && !keyOrName.empty()) {
			int tmp = (int)keyOrName[0];
			vector<student> re;
			if (tmp >= 48 && tmp <= 57) {

				re = g->stuKeys->search(keyOrName);
			}
			else {
				re = g->stuNames->search(keyOrName);
			}
			setTable(3, 0, re);
		}

	}
	if (p == "AddTest") {
		int level = 0;
		level = QInputDialog::getInt(this, "AddTest", "level", QLineEdit::Normal);
		if (level > 0) {
			bool ok;
			string name = QInputDialog::getText(this, "AddTest", "subject", QLineEdit::Normal, "", &ok).toStdString();
			if (ok&&name != "") {
				
				
						//打开创建
						AddTestDetialWidget *add = new AddTestDetialWidget();
						add->attach(g);
						add->sendInfo(level, name);
						add->setList();
						add->show();
					
			}

		}
	}
	else {
		return;
	}
		
}




void GuiStudentScoreAnalysis::openStudentPanel(int r, int c) {
	if (isStudent == true) {

	
	string stKey = ui.tableWidget->item(r, 0)->text().toStdString();
	StudentDetialWidget * stp = new StudentDetialWidget();
	
	stp->attachG(g);
	stp->attachK(stKey);
	stp->show();
	}
	else {
		int level = atoi(ui.tableWidget->item(r, 0)->text().toStdString().c_str());
		string Sname = ui.tableWidget->item(r, 1)->text().toStdString().c_str();

		TestDetialWidget * tdw = new TestDetialWidget();
		tdw->attach(g, level, Sname);
		tdw->setList();
		tdw->show();

	}
}