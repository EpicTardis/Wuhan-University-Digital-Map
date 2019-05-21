#include "LineWidget.h"
#include <QPainter>
#include "matgraph.h"

extern matgraph graph;
extern bool paint;

LineWidget::LineWidget(QWidget *parent)
	: QFrame(parent)
{
}

LineWidget::~LineWidget()
{
}

void LineWidget::paintEvent(QPaintEvent* event)
{
	QPainter painter(this);
	QPen pen(QColor(0x69, 0xc9, 0x18));
	pen.setStyle(Qt::SolidLine);
	pen.setWidth(3);
	painter.setPen(pen);
	for (int i = 0; i < MAXV; i++)
		for (int j = 0; j < MAXV; j++)
		{
			if (graph.edges[i][j] != 0 && graph.edges[i][j] != INF)
			{
				painter.drawLine(QPoint(graph.vexs[i].x, graph.vexs[i].y),
					QPoint(graph.vexs[j].x, graph.vexs[j].y));
			}
		}
	pen.setColor(QColor(0xff, 0x40, 0x40));
	painter.setPen(pen);
	if (paint)
	{
		for (int i = graph.d; i > 0; --i)
		{
			painter.drawLine(QPoint(graph.vexs[graph.apath[i]].x,graph.vexs[graph.apath[i]].y),
				QPoint(graph.vexs[graph.apath[i-1]].x, graph.vexs[graph.apath[i-1]].y));
		}
	}
}

