#include "QueryDlg.h"
#include "matgraph.h"
#include "GBK.h"
#include "QueryInformation.h"
#include <QMessageBox>
#include <cstdlib>

extern matgraph graph;

QueryDlg::QueryDlg(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	connect(ui.btnQuery, SIGNAL(clicked()), this, SLOT(OnBtnQuery()));
	connect(ui.btnCancel, SIGNAL(clicked()), this, SLOT(OnBtnCancel()));
}

QueryDlg::~QueryDlg()
{
}

int QueryDlg::OnBtnQuery()
{
	m_query = ui.textQuery->text();
	vertex tmp = graph.query(GBK::FromUnicode(m_query));
	if (tmp.name != "")
	{
		//弹出接受框
		char str[MAXV];
		QueryInformation infor(this);
		infor.ui.id->setText(GBK::ToUnicode(string(itoa(tmp.id,str,10))));
		infor.ui.name->setText(GBK::ToUnicode(tmp.name));
		infor.ui.information->setText(GBK::ToUnicode(tmp.ifm));
		infor.setWindowTitle(GBK::ToUnicode("查询结果"));
		infor.exec();
	}
	else
		QMessageBox::critical(this, GBK::ToUnicode("Sorry"),
			GBK::ToUnicode("在武汉大学内没有这个建筑..."));
	accept();
	return 0;
}
int QueryDlg::OnBtnCancel()
{
	reject();
	return 0;
}