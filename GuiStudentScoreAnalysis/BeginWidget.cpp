#include"beginWidget.h"

BeginWidget::BeginWidget(QWidget *parent) :QWidget(parent) {
	
	ui.setupUi(this);
	
}
void BeginWidget::openTeacher() {
	sa = new GuiStudentScoreAnalysis();
	sa->attachG(g);
	sa->setBar();
	sa->show();
	this->close();
}
void BeginWidget::attachG(Generate *p) {
	g = p;
}