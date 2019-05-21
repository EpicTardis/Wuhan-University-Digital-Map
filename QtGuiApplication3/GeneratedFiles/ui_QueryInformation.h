/********************************************************************************
** Form generated from reading UI file 'QueryInformation.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUERYINFORMATION_H
#define UI_QUERYINFORMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QueryInformation
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *textname;
    QLabel *name;
    QHBoxLayout *horizontalLayout;
    QLabel *textid;
    QLabel *id;
    QHBoxLayout *horizontalLayout_3;
    QLabel *textinformation;
    QLabel *information;

    void setupUi(QDialog *QueryInformation)
    {
        if (QueryInformation->objectName().isEmpty())
            QueryInformation->setObjectName(QStringLiteral("QueryInformation"));
        QueryInformation->resize(1200, 800);
        QueryInformation->setMinimumSize(QSize(1200, 800));
        verticalLayout = new QVBoxLayout(QueryInformation);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        textname = new QLabel(QueryInformation);
        textname->setObjectName(QStringLiteral("textname"));
        textname->setMinimumSize(QSize(300, 400));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(18);
        textname->setFont(font);

        horizontalLayout_2->addWidget(textname);

        name = new QLabel(QueryInformation);
        name->setObjectName(QStringLiteral("name"));
        name->setMinimumSize(QSize(900, 400));
        name->setFont(font);

        horizontalLayout_2->addWidget(name);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        textid = new QLabel(QueryInformation);
        textid->setObjectName(QStringLiteral("textid"));
        textid->setMinimumSize(QSize(300, 400));
        textid->setFont(font);

        horizontalLayout->addWidget(textid);

        id = new QLabel(QueryInformation);
        id->setObjectName(QStringLiteral("id"));
        id->setMinimumSize(QSize(900, 400));
        id->setFont(font);

        horizontalLayout->addWidget(id);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        textinformation = new QLabel(QueryInformation);
        textinformation->setObjectName(QStringLiteral("textinformation"));
        textinformation->setMinimumSize(QSize(300, 400));
        textinformation->setFont(font);

        horizontalLayout_3->addWidget(textinformation);

        information = new QLabel(QueryInformation);
        information->setObjectName(QStringLiteral("information"));
        information->setMinimumSize(QSize(900, 400));
        information->setFont(font);

        horizontalLayout_3->addWidget(information);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(QueryInformation);

        QMetaObject::connectSlotsByName(QueryInformation);
    } // setupUi

    void retranslateUi(QDialog *QueryInformation)
    {
        QueryInformation->setWindowTitle(QApplication::translate("QueryInformation", "QueryInformation", nullptr));
        textname->setText(QApplication::translate("QueryInformation", "\345\220\215\347\247\260\357\274\232", nullptr));
        name->setText(QString());
        textid->setText(QApplication::translate("QueryInformation", "\344\273\243\345\217\267\357\274\232", nullptr));
        id->setText(QString());
        textinformation->setText(QApplication::translate("QueryInformation", "\347\256\200\344\273\213\357\274\232", nullptr));
        information->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QueryInformation: public Ui_QueryInformation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUERYINFORMATION_H
