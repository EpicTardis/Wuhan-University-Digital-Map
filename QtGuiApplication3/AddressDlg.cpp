#include "AddressDlg.h"
#include "GBK.h"
#include "DigitalMapForWHU.h"
#include "matgraph.h"
#include "Supermarket.h"
#include <QMessageBox>

#define interval 50				//查找像素的改变单位

extern matgraph graph;
extern DigitalMapForWHU w;
extern Supermarket sup;


mincost mc = { 0,0,0x0fffffff };

extern inline double dist(int, int, int, int);

AddressDlg::AddressDlg(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	connect(ui.btnAddress, SIGNAL(clicked()), this, SLOT(OnBtnAddress()));
	connect(ui.btnCancel, SIGNAL(clicked()), this, SLOT(OnBtnCancel()));
}

AddressDlg::~AddressDlg()
{

}

int AddressDlg::OnBtnAddress()
{
	int tmp = 0;
	m_dorm = atoi(GBK::FromUnicode(ui.dormWeight->text()).c_str());
	m_canteen = atoi(GBK::FromUnicode(ui.canteenWeight->text()).c_str());
	m_teaching = atoi(GBK::FromUnicode(ui.teachingWeight->text()).c_str());
	m_office = atoi(GBK::FromUnicode(ui.officeWeight->text()).c_str());
	//计算dist
	for (int i = 0; i < w.width() / interval; i++)
	{
		for (int j = 0; j < w.height() / interval; j++)
		{
			for (const auto&c : graph.vexs)
			{
				if (c.type == "dorm")
					tmp += dist(i*interval, j*interval, c.x, c.y)*m_dorm;
				else if (c.type == "canteen")
					tmp += dist(i*interval, j*interval, c.x, c.y)*m_canteen;
				else if (c.type == "teaching")
					tmp += dist(i*interval, j*interval, c.x, c.y)*m_teaching;
				else if (c.type == "office")
					tmp += dist(i*interval, j*interval, c.x, c.y)*m_office;
			}
			if (tmp < mc.min)
			{
				mc.x = i*interval;
				mc.y = j*interval;
				mc.min = tmp;
			}
			tmp = 0;
		}
	}
	//在mc.x和y处画上超市toolbutton(在main函数里完成)
	sup.setVisible(true);
	sup.move(mc.x, mc.y);
	QMessageBox::information(this, GBK::ToUnicode("成功"), GBK::ToUnicode("已成功找到超市的位置"));
	accept();
	return 0;
}
int AddressDlg::OnBtnCancel()
{
	reject();
	return 0;
}