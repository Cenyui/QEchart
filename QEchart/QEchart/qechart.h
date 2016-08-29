#ifndef QECHART_H
#define QECHART_H

#include <QtWidgets/QMainWindow>
#include "ui_qechart.h"

class QEchart : public QMainWindow
{
	Q_OBJECT

public:
	QEchart(QWidget *parent = 0);
	~QEchart();

protected slots:
	void OnBtns();

private:
	Ui::QEchartClass ui;
};

#endif // QECHART_H
