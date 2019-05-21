#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_DigitalMapForWHU.h"
#include "matgraph.h"
#include <QFrame>

class DigitalMapForWHU : public QMainWindow
{
	Q_OBJECT

private slots:
	int OnMenuQuery();
	int OnMenuRoute();
	int OnMenuAddress();
	int OnMenuExit();

public:
	DigitalMapForWHU(QWidget *parent = Q_NULLPTR);

	Ui::DigitalMapForWHUClass ui;
};
