/********************************************************************************
** Form generated from reading UI file 'AddressDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDRESSDLG_H
#define UI_ADDRESSDLG_H

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

class Ui_AddressDlg
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_13;
    QLabel *label;
    QSpacerItem *horizontalSpacer_12;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QLineEdit *dormWeight;
    QSpacerItem *horizontalSpacer_11;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_3;
    QLineEdit *canteenWeight;
    QSpacerItem *horizontalSpacer_10;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_4;
    QLineEdit *teachingWeight;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_5;
    QLineEdit *officeWeight;
    QSpacerItem *horizontalSpacer_8;
    QFrame *line;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *btnAddress;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *btnCancel;
    QSpacerItem *horizontalSpacer_7;

    void setupUi(QDialog *AddressDlg)
    {
        if (AddressDlg->objectName().isEmpty())
            AddressDlg->setObjectName(QStringLiteral("AddressDlg"));
        AddressDlg->resize(1500, 900);
        AddressDlg->setMinimumSize(QSize(1500, 900));
        verticalLayout = new QVBoxLayout(AddressDlg);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_13);

        label = new QLabel(AddressDlg);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(400, 50));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(18);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_12);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label_2 = new QLabel(AddressDlg);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(125, 50));
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        dormWeight = new QLineEdit(AddressDlg);
        dormWeight->setObjectName(QStringLiteral("dormWeight"));
        dormWeight->setMinimumSize(QSize(100, 50));
        dormWeight->setFont(font);

        horizontalLayout_2->addWidget(dormWeight);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_11);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        label_3 = new QLabel(AddressDlg);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(125, 50));
        label_3->setFont(font);

        horizontalLayout_3->addWidget(label_3);

        canteenWeight = new QLineEdit(AddressDlg);
        canteenWeight->setObjectName(QStringLiteral("canteenWeight"));
        canteenWeight->setMinimumSize(QSize(100, 50));
        canteenWeight->setFont(font);

        horizontalLayout_3->addWidget(canteenWeight);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_10);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        label_4 = new QLabel(AddressDlg);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(125, 50));
        label_4->setFont(font);

        horizontalLayout_4->addWidget(label_4);

        teachingWeight = new QLineEdit(AddressDlg);
        teachingWeight->setObjectName(QStringLiteral("teachingWeight"));
        teachingWeight->setMinimumSize(QSize(100, 50));
        teachingWeight->setFont(font);

        horizontalLayout_4->addWidget(teachingWeight);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_9);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        label_5 = new QLabel(AddressDlg);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(125, 50));
        label_5->setFont(font);

        horizontalLayout_5->addWidget(label_5);

        officeWeight = new QLineEdit(AddressDlg);
        officeWeight->setObjectName(QStringLiteral("officeWeight"));
        officeWeight->setMinimumSize(QSize(100, 50));
        officeWeight->setFont(font);

        horizontalLayout_5->addWidget(officeWeight);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_8);


        verticalLayout->addLayout(horizontalLayout_5);

        line = new QFrame(AddressDlg);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);

        btnAddress = new QPushButton(AddressDlg);
        btnAddress->setObjectName(QStringLiteral("btnAddress"));

        horizontalLayout_6->addWidget(btnAddress);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        btnCancel = new QPushButton(AddressDlg);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));

        horizontalLayout_6->addWidget(btnCancel);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);


        verticalLayout->addLayout(horizontalLayout_6);


        retranslateUi(AddressDlg);

        QMetaObject::connectSlotsByName(AddressDlg);
    } // setupUi

    void retranslateUi(QDialog *AddressDlg)
    {
        AddressDlg->setWindowTitle(QApplication::translate("AddressDlg", "AddressDlg", nullptr));
        label->setText(QApplication::translate("AddressDlg", "\347\241\256\345\256\232\350\266\205\345\270\202\344\275\215\347\275\256\346\227\266\357\274\214\351\234\200\350\246\201\345\205\210\347\241\256\345\256\232\346\257\217\347\247\215\347\261\273\345\236\213\347\232\204\346\235\203\351\207\215", nullptr));
        label_2->setText(QApplication::translate("AddressDlg", "\345\256\277\350\210\215\346\235\203\351\207\215\357\274\232", nullptr));
        label_3->setText(QApplication::translate("AddressDlg", "\351\243\237\345\240\202\346\235\203\351\207\215\357\274\232", nullptr));
        label_4->setText(QApplication::translate("AddressDlg", "\346\225\231\345\255\246\346\245\274\346\235\203\351\207\215\357\274\232", nullptr));
        label_5->setText(QApplication::translate("AddressDlg", "\345\212\236\345\205\254\345\256\244\346\235\203\351\207\215\357\274\232", nullptr));
        btnAddress->setText(QApplication::translate("AddressDlg", "\347\241\256\345\256\232\345\234\260\345\235\200", nullptr));
        btnCancel->setText(QApplication::translate("AddressDlg", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddressDlg: public Ui_AddressDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDRESSDLG_H
