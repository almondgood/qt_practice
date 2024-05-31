/********************************************************************************
** Form generated from reading UI file 'mainwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIDGET_H
#define UI_MAINWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWidget
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *pTabWidget;
    QWidget *pTabSocket;
    QWidget *pTabSensor;
    QWidget *pTabSqlite;

    void setupUi(QWidget *MainWidget)
    {
        if (MainWidget->objectName().isEmpty())
            MainWidget->setObjectName(QString::fromUtf8("MainWidget"));
        MainWidget->resize(400, 300);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWidget->sizePolicy().hasHeightForWidth());
        MainWidget->setSizePolicy(sizePolicy);
        MainWidget->setFocusPolicy(Qt::NoFocus);
        verticalLayout = new QVBoxLayout(MainWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pTabWidget = new QTabWidget(MainWidget);
        pTabWidget->setObjectName(QString::fromUtf8("pTabWidget"));
        pTabSocket = new QWidget();
        pTabSocket->setObjectName(QString::fromUtf8("pTabSocket"));
        pTabWidget->addTab(pTabSocket, QString());
        pTabSensor = new QWidget();
        pTabSensor->setObjectName(QString::fromUtf8("pTabSensor"));
        pTabWidget->addTab(pTabSensor, QString());
        pTabSqlite = new QWidget();
        pTabSqlite->setObjectName(QString::fromUtf8("pTabSqlite"));
        pTabWidget->addTab(pTabSqlite, QString());

        verticalLayout->addWidget(pTabWidget);


        retranslateUi(MainWidget);

        pTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWidget);
    } // setupUi

    void retranslateUi(QWidget *MainWidget)
    {
        MainWidget->setWindowTitle(QCoreApplication::translate("MainWidget", "MainWidget", nullptr));
        pTabWidget->setTabText(pTabWidget->indexOf(pTabSocket), QCoreApplication::translate("MainWidget", "Socket", nullptr));
        pTabWidget->setTabText(pTabWidget->indexOf(pTabSensor), QCoreApplication::translate("MainWidget", "Sensor", nullptr));
        pTabWidget->setTabText(pTabWidget->indexOf(pTabSqlite), QCoreApplication::translate("MainWidget", "Sqlite", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWidget: public Ui_MainWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIDGET_H
