#include"AddTestDetial.h"
#include<sstream>
AddTestDetialWidget::AddTestDetialWidget(QWidget *parent) {
	ui.setupUi(this);
}

void AddTestDetialWidget::attach(Generate *p) {
	g = p;
}
void AddTestDetialWidget::sendInfo(int l, string i) {
	level = l;
	subjectName = i;

	ostringstream oss;
	oss << "you are now editing level: " << to_string(level) << " subject: " << i << " test";
	ui.label->setText(oss.str().c_str());
}

void AddTestDetialWidget::setList() {
	scroll = ui.scrollArea;
	scroll->setSizePolicy(QSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding));
	scroll->setWidgetResizable(true);
	layout = new QVBoxLayout(this);
	layout->setSizeConstraint(QVBoxLayout::SetMinAndMaxSize);
	

	vector<student>::iterator iter;
	iter = g->stuNames->whole.begin();
	
	for (; iter != g->stuNames->whole.end(); iter++) {
		QWidget *widget = new QWidget(this);
		QHBoxLayout *hLayout = new QHBoxLayout(this);
		hLayout->setSizeConstraint(QVBoxLayout::SetMinAndMaxSize);
		QCheckBox *checkBox = new QCheckBox(this);
		student tt = *iter;
		ostringstream oss;
		oss << "ID: " << tt.getKey() << " Name: " << tt.getName()<<" Score: ";
		string temp = oss.str();

		checkBox->setText(temp.c_str());
		hLayout->addWidget(checkBox);
		QLineEdit *le = new QLineEdit(this);
		hLayout->addWidget(le);
		widget->setLayout(hLayout);
		layout->addWidget(widget);
	}
	scroll->widget()->setLayout(layout);
}
