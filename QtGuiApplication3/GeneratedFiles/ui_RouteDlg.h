/********************************************************************************
** Form generated from reading UI file 'RouteDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROUTEDLG_H
#define UI_ROUTEDLG_H

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

class Ui_RouteDlg
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLineEdit *DepartText;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLineEdit *DestinationText;
    QFrame *line;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnFind;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btnCancel;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *RouteDlg)
    {
        if (RouteDlg->objectName().isEmpty())
            RouteDlg->setObjectName(QStringLiteral("RouteDlg"));
        RouteDlg->resize(653, 457);
        RouteDlg->setMinimumSize(QSize(400, 300));
        verticalLayout_3 = new QVBoxLayout(RouteDlg);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(RouteDlg);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(180, 50));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(18);
        label->setFont(font);

        verticalLayout_2->addWidget(label);

        DepartText = new QLineEdit(RouteDlg);
        DepartText->setObjectName(QStringLiteral("DepartText"));
        DepartText->setMinimumSize(QSize(450, 50));
        DepartText->setFont(font);

        verticalLayout_2->addWidget(DepartText);


        verticalLayout_3->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2 = new QLabel(RouteDlg);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(180, 50));
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        DestinationText = new QLineEdit(RouteDlg);
        DestinationText->setObjectName(QStringLiteral("DestinationText"));
        DestinationText->setMinimumSize(QSize(450, 50));
        DestinationText->setFont(font);

        verticalLayout->addWidget(DestinationText);


        verticalLayout_3->addLayout(verticalLayout);

        line = new QFrame(RouteDlg);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnFind = new QPushButton(RouteDlg);
        btnFind->setObjectName(QStringLiteral("btnFind"));

        horizontalLayout->addWidget(btnFind);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        btnCancel = new QPushButton(RouteDlg);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));

        horizontalLayout->addWidget(btnCancel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout);


        retranslateUi(RouteDlg);

        QMetaObject::connectSlotsByName(RouteDlg);
    } // setupUi

    void retranslateUi(QDialog *RouteDlg)
    {
        RouteDlg->setWindowTitle(QApplication::translate("RouteDlg", "RouteDlg", nullptr));
        label->setText(QApplication::translate("RouteDlg", "\350\257\267\350\276\223\345\205\245\345\247\213\345\217\221\345\234\260\357\274\232", nullptr));
        label_2->setText(QApplication::translate("RouteDlg", "\350\257\267\350\276\223\345\205\245\347\233\256\347\232\204\345\234\260\357\274\232", nullptr));
        btnFind->setText(QApplication::translate("RouteDlg", "\345\257\273\346\211\276\350\267\257\347\272\277", nullptr));
        btnCancel->setText(QApplication::translate("RouteDlg", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RouteDlg: public Ui_RouteDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROUTEDLG_H
