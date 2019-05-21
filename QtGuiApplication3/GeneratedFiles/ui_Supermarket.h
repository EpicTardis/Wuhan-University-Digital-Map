/********************************************************************************
** Form generated from reading UI file 'Supermarket.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUPERMARKET_H
#define UI_SUPERMARKET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Supermarket
{
public:
    QToolButton *canteen_20;

    void setupUi(QWidget *Supermarket)
    {
        if (Supermarket->objectName().isEmpty())
            Supermarket->setObjectName(QStringLiteral("Supermarket"));
        Supermarket->resize(400, 300);
        canteen_20 = new QToolButton(Supermarket);
        canteen_20->setObjectName(QStringLiteral("canteen_20"));
        canteen_20->setEnabled(true);
        canteen_20->setGeometry(QRect(0, 0, 50, 50));
        canteen_20->setAutoFillBackground(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/\346\226\260\345\211\215\347\274\200/Resources/supermarket_64px_1144996_easyicon.net.png"), QSize(), QIcon::Normal, QIcon::Off);
        canteen_20->setIcon(icon);
        canteen_20->setIconSize(QSize(40, 40));
        canteen_20->setToolButtonStyle(Qt::ToolButtonIconOnly);

        retranslateUi(Supermarket);

        QMetaObject::connectSlotsByName(Supermarket);
    } // setupUi

    void retranslateUi(QWidget *Supermarket)
    {
        Supermarket->setWindowTitle(QApplication::translate("Supermarket", "Supermarket", nullptr));
        canteen_20->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Supermarket: public Ui_Supermarket {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUPERMARKET_H
