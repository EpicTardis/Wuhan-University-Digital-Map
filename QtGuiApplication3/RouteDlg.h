#pragma once

#include <QDialog>
#include "ui_RouteDlg.h"

class RouteDlg : public QDialog
{
	Q_OBJECT

public:
	RouteDlg(QWidget *parent = Q_NULLPTR);
	~RouteDlg();

private slots:
	int OnBtnFind();
	int OnBtnCancel();

private:
	Ui::RouteDlg ui;
};