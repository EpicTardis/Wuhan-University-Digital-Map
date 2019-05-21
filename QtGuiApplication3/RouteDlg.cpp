#include "RouteDlg.h"
#include "matgraph.h"
#include "GBK.h"
#include <string>
#include <QMessageBox>

#define maxbuffer 64

extern matgraph graph;
bool paint = false;

RouteDlg::RouteDlg(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	connect(ui.btnFind, SIGNAL(clicked()), this, SLOT(OnBtnFind()));
	connect(ui.btnCancel, SIGNAL(clicked()), this, SLOT(OnBtnCancel()));
}

RouteDlg::~RouteDlg()
{
}

int RouteDlg::OnBtnFind()
{
	vertex a = graph.query(GBK::FromUnicode(ui.DepartText->text())),
		b = graph.query(GBK::FromUnicode(ui.DestinationText->text()));
	if (a.name == "")
	{
		QMessageBox::warning(this, GBK::ToUnicode("Sorry"), GBK::ToUnicode("在图中未能找到始发地"));
			return -1;
	}
	else if (b.name == "")
	{
		QMessageBox::warning(this, GBK::ToUnicode("Sorry"), GBK::ToUnicode("在图中未能找到目的地"));
		return -1;
	}
	string str = "从" + a.name + "到" + b.name + "的最短路径的编号为:";
	char tmp[maxbuffer];
	Dispath(graph, a.id, b.id);
	for (int i = graph.d; i >= 0; i--)
	{
		str += itoa(graph.apath[i], tmp, 10);
		str += ",";
	}
	str += "最短距离为：";
	str += itoa(graph.A[a.id][b.id], tmp, 10);
	str += "米";
	QMessageBox::information(this, GBK::ToUnicode("最短路径结果"), GBK::ToUnicode(str));
	paint = true;
	accept();
	return 0;
}
int RouteDlg::OnBtnCancel()
{
	reject();
	return 0;
}
