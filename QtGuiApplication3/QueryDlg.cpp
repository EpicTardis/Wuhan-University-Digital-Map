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
		//�������ܿ�
		char str[MAXV];
		QueryInformation infor(this);
		infor.ui.id->setText(GBK::ToUnicode(string(itoa(tmp.id,str,10))));
		infor.ui.name->setText(GBK::ToUnicode(tmp.name));
		infor.ui.information->setText(GBK::ToUnicode(tmp.ifm));
		infor.setWindowTitle(GBK::ToUnicode("��ѯ���"));
		infor.exec();
	}
	else
		QMessageBox::critical(this, GBK::ToUnicode("Sorry"),
			GBK::ToUnicode("���人��ѧ��û���������..."));
	accept();
	return 0;
}
int QueryDlg::OnBtnCancel()
{
	reject();
	return 0;
}