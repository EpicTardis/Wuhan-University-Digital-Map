/********************************************************************************
** Form generated from reading UI file 'QueryDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUERYDLG_H
#define UI_QUERYDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QueryDlg
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *textQuery;
    QFrame *line;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnQuery;
    QPushButton *btnCancel;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *QueryDlg)
    {
        if (QueryDlg->objectName().isEmpty())
            QueryDlg->setObjectName(QStringLiteral("QueryDlg"));
        QueryDlg->resize(1200, 600);
        QueryDlg->setMinimumSize(QSize(1200, 600));
        verticalLayout = new QVBoxLayout(QueryDlg);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(QueryDlg);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(0, 50));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(18);
        label->setFont(font);

        verticalLayout->addWidget(label);

        textQuery = new QLineEdit(QueryDlg);
        textQuery->setObjectName(QStringLiteral("textQuery"));
        textQuery->setMinimumSize(QSize(0, 50));
        textQuery->setFont(font);

        verticalLayout->addWidget(textQuery);

        line = new QFrame(QueryDlg);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        btnQuery = new QPushButton(QueryDlg);
        btnQuery->setObjectName(QStringLiteral("btnQuery"));

        horizontalLayout->addWidget(btnQuery);

        btnCancel = new QPushButton(QueryDlg);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));

        horizontalLayout->addWidget(btnCancel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(QueryDlg);

        QMetaObject::connectSlotsByName(QueryDlg);
    } // setupUi

    void retranslateUi(QDialog *QueryDlg)
    {
        QueryDlg->setWindowTitle(QApplication::translate("QueryDlg", "QueryDlg", nullptr));
        label->setText(QApplication::translate("QueryDlg", "\350\257\267\350\276\223\345\205\245\351\234\200\350\246\201\346\237\245\350\257\242\345\234\260\345\235\200\347\232\204\345\220\215\347\247\260\357\274\232", nullptr));
        btnQuery->setText(QApplication::translate("QueryDlg", "\346\237\245\350\257\242", nullptr));
        btnCancel->setText(QApplication::translate("QueryDlg", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QueryDlg: public Ui_QueryDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUERYDLG_H
