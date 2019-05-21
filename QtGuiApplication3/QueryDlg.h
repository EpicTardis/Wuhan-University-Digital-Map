#pragma once

#include <QDialog>
#include "ui_QueryDlg.h"

class QueryDlg : public QDialog
{
	Q_OBJECT

public:
	QueryDlg(QWidget *parent = Q_NULLPTR);
	~QueryDlg();

	QString m_query;

private slots:
	int OnBtnQuery();
	int OnBtnCancel();

private:
	Ui::QueryDlg ui;
};
