#include "qechart.h"
#include <QtWidgets/QApplication>

#include "citLogMan.h"

int main(int argc, char *argv[])
{
	//日志管理
	qInstallMessageHandler(citOutputMessage);

	QApplication a(argc, argv);
	QEchart w;
	w.show();
	return a.exec();
}
