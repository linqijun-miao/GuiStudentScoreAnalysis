
#include"beginWidget.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	BeginWidget bw;
	Generate *g = new Generate(false,".\\score.txt");
	bw.attachG(g);
	bw.show();
	return a.exec();
}
