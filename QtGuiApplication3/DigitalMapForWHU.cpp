#include "DigitalMapForWHU.h"
#include <QPainter>
#include "matgraph.h"
#include "QueryDlg.h"
#include "AddressDlg.h"
#include "RouteDlg.h"

DigitalMapForWHU::DigitalMapForWHU(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.actionquery, SIGNAL(triggered()), this, SLOT(OnMenuQuery()));
	connect(ui.actionroute, SIGNAL(triggered()), this, SLOT(OnMenuRoute()));
	connect(ui.actionaddress, SIGNAL(triggered()), this, SLOT(OnMenuAddress()));
	connect(ui.actionexit, SIGNAL(triggered()), this, SLOT(OnMenuExit()));
}

int DigitalMapForWHU::OnMenuQuery()
{
	QueryDlg dlg(this);
	dlg.exec();
	return 0;
}

int DigitalMapForWHU::OnMenuRoute()
{
	RouteDlg dlg(this);
	dlg.exec();
	return 0;
}

int DigitalMapForWHU::OnMenuAddress()
{
	AddressDlg dlg(this);
	dlg.exec();
	return 0;
}

int DigitalMapForWHU::OnMenuExit()
{
	exit(1);
	return 0;
}
