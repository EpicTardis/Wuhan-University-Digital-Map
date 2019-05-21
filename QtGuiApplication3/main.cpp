/*  �人��ѧУ԰ƽ��ͼ����
�������ᡢʳ�á���ѧ¥��ѧԺ�칫�ҵȽ���
�ṩ�������·���볬��ѡַ�㷨

Powered by EpicTardis,Dec 28 2017
16�����තһ������
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
#define slen 50								//sidelength,ÿ��ͼ����ռ�ı߳�����λΪ���أ�
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
