#pragma once

#include <QDialog>
#include "ui_AddressDlg.h"


typedef struct
{
	int x;
	int y;
	long long int min;
}mincost;

class AddressDlg : public QDialog
{
	Q_OBJECT

public:
	AddressDlg(QWidget *parent = Q_NULLPTR);
	~AddressDlg();

	int m_dorm;
	int m_canteen;
	int m_teaching;
	int m_office;

private slots:
	int OnBtnAddress();
	int OnBtnCancel();

private:
	Ui::AddressDlg ui;
};
