/********************************************************************************
** Form generated from reading UI file 'tabsensor.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABSENSOR_H
#define UI_TABSENSOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TabSensor
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pPBClearButton;
    QVBoxLayout *pChartViewLayout;

    void setupUi(QWidget *TabSensor)
    {
        if (TabSensor->objectName().isEmpty())
            TabSensor->setObjectName(QString::fromUtf8("TabSensor"));
        TabSensor->resize(400, 300);
        verticalLayout = new QVBoxLayout(TabSensor);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pPBClearButton = new QPushButton(TabSensor);
        pPBClearButton->setObjectName(QString::fromUtf8("pPBClearButton"));

        horizontalLayout->addWidget(pPBClearButton);


        verticalLayout->addLayout(horizontalLayout);

        pChartViewLayout = new QVBoxLayout();
        pChartViewLayout->setObjectName(QString::fromUtf8("pChartViewLayout"));

        verticalLayout->addLayout(pChartViewLayout);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 9);

        retranslateUi(TabSensor);

        QMetaObject::connectSlotsByName(TabSensor);
    } // setupUi

    void retranslateUi(QWidget *TabSensor)
    {
        TabSensor->setWindowTitle(QCoreApplication::translate("TabSensor", "Form", nullptr));
        pPBClearButton->setText(QCoreApplication::translate("TabSensor", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TabSensor: public Ui_TabSensor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABSENSOR_H
