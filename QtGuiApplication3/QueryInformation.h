#pragma once

#include <QDialog>
#include "ui_QueryInformation.h"

class QueryInformation : public QDialog
{
	Q_OBJECT

public:
	QueryInformation(QWidget *parent = Q_NULLPTR);
	~QueryInformation();

	Ui::QueryInformation ui;
};
