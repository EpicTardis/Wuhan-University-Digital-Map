#pragma once

#include <QFrame>
#include "matgraph.h"

class LineWidget : public QFrame
{
	Q_OBJECT

public:
	LineWidget(QWidget *parent);
	~LineWidget();

	void paintEvent(QPaintEvent*);
};
