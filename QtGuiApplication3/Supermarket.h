#pragma once

#include <QWidget>
#include "ui_Supermarket.h"

class Supermarket : public QWidget
{
	Q_OBJECT

public:
	Supermarket(QWidget *parent = Q_NULLPTR);
	~Supermarket();

private:
	Ui::Supermarket ui;
};
