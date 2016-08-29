#include "qechart.h"

#include <QDir>
#include <QPushButton>
#include <QtWebKitWidgets/QWebFrame>

//#ifdef CIT_DEBUG
//#include <vld.h>
//#endif

QEchart::QEchart(QWidget *parent) : QMainWindow(parent)
{
	ui.setupUi(this);
	//ui.webView->load(QUrl("https://www.baidu.com/"));
	//ui.webView->show();
	//ui.webView->settings()->setAttribute(QWebSettings::LocalStorageEnabled, true);
	//ui.webView->settings()->enablePersistentStorage(QDir::homePath());
	
	QString l_homePath = QDir::homePath();

	connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(OnBtns()));
	connect(ui.pushButton_2, SIGNAL(clicked()), this, SLOT(OnBtns()));
	connect(ui.pushButton_3, SIGNAL(clicked()), this, SLOT(OnBtns()));
	connect(ui.pushButton_4, SIGNAL(clicked()), this, SLOT(OnBtns()));
	connect(ui.pushButton_5, SIGNAL(clicked()), this, SLOT(OnBtns()));
	connect(ui.pushButton_6, SIGNAL(clicked()), this, SLOT(OnBtns()));
	connect(ui.pushButton_7, SIGNAL(clicked()), this, SLOT(OnBtns()));

	connect(ui.pushButton_14, SIGNAL(clicked()), this, SLOT(OnBtns()));
	connect(ui.pushButton_9, SIGNAL(clicked()), this, SLOT(OnBtns()));
	connect(ui.pushButton_12, SIGNAL(clicked()), this, SLOT(OnBtns()));
	connect(ui.pushButton_11, SIGNAL(clicked()), this, SLOT(OnBtns()));
	connect(ui.pushButton_13, SIGNAL(clicked()), this, SLOT(OnBtns()));
	connect(ui.pushButton_8, SIGNAL(clicked()), this, SLOT(OnBtns()));
	connect(ui.pushButton_10, SIGNAL(clicked()), this, SLOT(OnBtns()));
}

QEchart::~QEchart()
{

}

void QEchart::OnBtns()
{
	QPushButton* l_pBtn = qobject_cast<QPushButton*>(sender());
	QString l_url = "file:///"+qApp->applicationDirPath()+"/html/";

	if (l_pBtn == ui.pushButton)
	{
		l_url.append("line.html");
	}
	else if (l_pBtn == ui.pushButton_2)
	{
		l_url.append("linex.html");
	}
	else if (l_pBtn == ui.pushButton_3)
	{
		l_url.append("liney.html");
	}
	else if (l_pBtn == ui.pushButton_4)
	{
		l_url.append("bar.html");
	}
	else if (l_pBtn == ui.pushButton_5)
	{
		l_url.append("barx.html");
	}
	else if (l_pBtn == ui.pushButton_6)
	{
		l_url.append("bary.html");
	}
	else if (l_pBtn == ui.pushButton_7)
	{
		l_url.append("scatter.html");
	}
	else if (l_pBtn == ui.pushButton_14)
	{
		l_url.append("k.html");
	}
	else if (l_pBtn == ui.pushButton_9)
	{
		l_url.append("pie.html");
	}
	else if (l_pBtn == ui.pushButton_12)
	{
		l_url.append("radar.html");
	}
	else if (l_pBtn == ui.pushButton_11)
	{
		l_url.append("chord.html");
	}
	else if (l_pBtn == ui.pushButton_13)
	{
		l_url.append("gauge.html");
	}
	else if (l_pBtn == ui.pushButton_8)
	{
		l_url.append("funnel.html");
	}
	else if (l_pBtn == ui.pushButton_10)
	{
		l_url.append("data.html");
	}

	ui.webView->load(QUrl(l_url));

	//ui.webView->load(QUrl("http://toutiao.com/"));

	//l_url = "file:///"+qApp->applicationDirPath()+"/Test/about.html";
}
