/*  武汉大学校园平面图程序
包含宿舍、食堂、教学楼、学院办公室等建筑
提供查找最短路径与超市选址算法

Powered by EpicTardis,Dec 28 2017
16网安班董一鸣制作
*/

#include "matgraph.h"
#include "DigitalMapForWHU.h"
#include "LineWidget.h"
#include "Supermarket.h"
#include "AddressDlg.h"
#include <QtWidgets/QApplication>
#include <QStackedLayout>

extern void InitializeGraph(matgraph&);
extern void Visualize(const matgraph&,DigitalMapForWHU&);

extern mincost mc;

#ifndef slen
#define slen 50								//sidelength,每个图标所占的边长（单位为像素）
#endif

int argc = 0;
QApplication a(argc, nullptr);
DigitalMapForWHU w;
matgraph graph;
Supermarket sup(&w);

int main()
{
	InitializeGraph(graph);
	Visualize(graph, w);
	sup.setVisible(false);
	LineWidget l(&w);
	l.resize(w.size());
	l.move(slen / 2, slen
		+ w.ui.mainToolBar->height()
		+ w.ui.menuBar->height()
		+ w.ui.statusBar->height());

	w.show();
	return a.exec();
}
