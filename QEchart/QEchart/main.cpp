#include "qechart.h"
#include <QtWidgets/QApplication>

#include "citLogMan.h"

int main(int argc, char *argv[])
{
	//��־����
	qInstallMessageHandler(citOutputMessage);

	QApplication a(argc, argv);
	QEchart w;
	w.show();
	return a.exec();
}
