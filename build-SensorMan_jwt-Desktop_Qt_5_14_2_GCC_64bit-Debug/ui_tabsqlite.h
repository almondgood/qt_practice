/********************************************************************************
** Form generated from reading UI file 'tabsqlite.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABSQLITE_H
#define UI_TABSQLITE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TabSqlite
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QDateTimeEdit *pDateTimeEditFrom;
    QDateTimeEdit *pDateTimeEditTo;
    QPushButton *pPBsearchDb;
    QPushButton *pPBdeleteDb;
    QHBoxLayout *horizontalLayout_2;
    QTableWidget *pTBSensor;
    QVBoxLayout *pChartViewLayout;

    void setupUi(QWidget *TabSqlite)
    {
        if (TabSqlite->objectName().isEmpty())
            TabSqlite->setObjectName(QString::fromUtf8("TabSqlite"));
        TabSqlite->resize(530, 300);
        verticalLayout = new QVBoxLayout(TabSqlite);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pDateTimeEditFrom = new QDateTimeEdit(TabSqlite);
        pDateTimeEditFrom->setObjectName(QString::fromUtf8("pDateTimeEditFrom"));
        pDateTimeEditFrom->setDateTime(QDateTime(QDate(2023, 12, 29), QTime(0, 0, 0)));

        horizontalLayout->addWidget(pDateTimeEditFrom);

        pDateTimeEditTo = new QDateTimeEdit(TabSqlite);
        pDateTimeEditTo->setObjectName(QString::fromUtf8("pDateTimeEditTo"));
        pDateTimeEditTo->setDateTime(QDateTime(QDate(2024, 1, 31), QTime(0, 0, 0)));

        horizontalLayout->addWidget(pDateTimeEditTo);

        pPBsearchDb = new QPushButton(TabSqlite);
        pPBsearchDb->setObjectName(QString::fromUtf8("pPBsearchDb"));

        horizontalLayout->addWidget(pPBsearchDb);

        pPBdeleteDb = new QPushButton(TabSqlite);
        pPBdeleteDb->setObjectName(QString::fromUtf8("pPBdeleteDb"));

        horizontalLayout->addWidget(pPBdeleteDb);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pTBSensor = new QTableWidget(TabSqlite);
        if (pTBSensor->columnCount() < 5)
            pTBSensor->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        pTBSensor->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        pTBSensor->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        pTBSensor->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        pTBSensor->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        pTBSensor->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        pTBSensor->setObjectName(QString::fromUtf8("pTBSensor"));

        horizontalLayout_2->addWidget(pTBSensor);

        pChartViewLayout = new QVBoxLayout();
        pChartViewLayout->setObjectName(QString::fromUtf8("pChartViewLayout"));

        horizontalLayout_2->addLayout(pChartViewLayout);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(TabSqlite);

        QMetaObject::connectSlotsByName(TabSqlite);
    } // setupUi

    void retranslateUi(QWidget *TabSqlite)
    {
        TabSqlite->setWindowTitle(QCoreApplication::translate("TabSqlite", "Form", nullptr));
        pPBsearchDb->setText(QCoreApplication::translate("TabSqlite", "\354\241\260\355\232\214", nullptr));
        pPBdeleteDb->setText(QCoreApplication::translate("TabSqlite", "\354\202\255\354\240\234", nullptr));
        QTableWidgetItem *___qtablewidgetitem = pTBSensor->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("TabSqlite", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = pTBSensor->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("TabSqlite", "\353\202\240\354\247\234", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = pTBSensor->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("TabSqlite", "\354\241\260\353\217\204", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = pTBSensor->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("TabSqlite", "\354\230\250\353\217\204", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = pTBSensor->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("TabSqlite", "\354\212\265\353\217\204", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TabSqlite: public Ui_TabSqlite {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABSQLITE_H
