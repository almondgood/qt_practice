/********************************************************************************
** Form generated from reading UI file 'tabsocket.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABSOCKET_H
#define UI_TABSOCKET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TabSocket
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QPushButton *pPBRecvDataClear;
    QPushButton *pPBServerConnect;
    QVBoxLayout *verticalLayout;
    QTextEdit *pTERecvData;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *PLERecvId;
    QLineEdit *PLESendData;
    QPushButton *pPBSendButton;

    void setupUi(QWidget *TabSocket)
    {
        if (TabSocket->objectName().isEmpty())
            TabSocket->setObjectName(QString::fromUtf8("TabSocket"));
        TabSocket->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(TabSocket);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(TabSocket);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        pPBRecvDataClear = new QPushButton(TabSocket);
        pPBRecvDataClear->setObjectName(QString::fromUtf8("pPBRecvDataClear"));

        horizontalLayout->addWidget(pPBRecvDataClear);

        pPBServerConnect = new QPushButton(TabSocket);
        pPBServerConnect->setObjectName(QString::fromUtf8("pPBServerConnect"));
        pPBServerConnect->setCheckable(true);

        horizontalLayout->addWidget(pPBServerConnect);

        horizontalLayout->setStretch(0, 8);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 1);

        verticalLayout_2->addLayout(horizontalLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pTERecvData = new QTextEdit(TabSocket);
        pTERecvData->setObjectName(QString::fromUtf8("pTERecvData"));

        verticalLayout->addWidget(pTERecvData);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        PLERecvId = new QLineEdit(TabSocket);
        PLERecvId->setObjectName(QString::fromUtf8("PLERecvId"));

        horizontalLayout_2->addWidget(PLERecvId);

        PLESendData = new QLineEdit(TabSocket);
        PLESendData->setObjectName(QString::fromUtf8("PLESendData"));

        horizontalLayout_2->addWidget(PLESendData);

        pPBSendButton = new QPushButton(TabSocket);
        pPBSendButton->setObjectName(QString::fromUtf8("pPBSendButton"));

        horizontalLayout_2->addWidget(pPBSendButton);

        horizontalLayout_2->setStretch(0, 3);
        horizontalLayout_2->setStretch(1, 6);

        verticalLayout_2->addLayout(horizontalLayout_2);


        retranslateUi(TabSocket);

        QMetaObject::connectSlotsByName(TabSocket);
    } // setupUi

    void retranslateUi(QWidget *TabSocket)
    {
        TabSocket->setWindowTitle(QCoreApplication::translate("TabSocket", "Form", nullptr));
        label->setText(QCoreApplication::translate("TabSocket", "\354\210\230\354\213\240 \353\215\260\354\235\264\355\204\260", nullptr));
        pPBRecvDataClear->setText(QCoreApplication::translate("TabSocket", "\354\210\230\354\213\240 \354\202\255\354\240\234", nullptr));
        pPBServerConnect->setText(QCoreApplication::translate("TabSocket", "\354\204\234\353\262\204 \354\227\260\352\262\260", nullptr));
        pPBSendButton->setText(QCoreApplication::translate("TabSocket", "\354\206\241\354\213\240", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TabSocket: public Ui_TabSocket {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABSOCKET_H
