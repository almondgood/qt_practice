/********************************************************************************
** Form generated from reading UI file 'tab2socketclient.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAB2SOCKETCLIENT_H
#define UI_TAB2SOCKETCLIENT_H

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

class Ui_Tab2SocketClient
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

    void setupUi(QWidget *Tab2SocketClient)
    {
        if (Tab2SocketClient->objectName().isEmpty())
            Tab2SocketClient->setObjectName(QString::fromUtf8("Tab2SocketClient"));
        Tab2SocketClient->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(Tab2SocketClient);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(Tab2SocketClient);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        pPBRecvDataClear = new QPushButton(Tab2SocketClient);
        pPBRecvDataClear->setObjectName(QString::fromUtf8("pPBRecvDataClear"));

        horizontalLayout->addWidget(pPBRecvDataClear);

        pPBServerConnect = new QPushButton(Tab2SocketClient);
        pPBServerConnect->setObjectName(QString::fromUtf8("pPBServerConnect"));
        pPBServerConnect->setCheckable(true);

        horizontalLayout->addWidget(pPBServerConnect);

        horizontalLayout->setStretch(0, 8);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 1);

        verticalLayout_2->addLayout(horizontalLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pTERecvData = new QTextEdit(Tab2SocketClient);
        pTERecvData->setObjectName(QString::fromUtf8("pTERecvData"));

        verticalLayout->addWidget(pTERecvData);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        PLERecvId = new QLineEdit(Tab2SocketClient);
        PLERecvId->setObjectName(QString::fromUtf8("PLERecvId"));

        horizontalLayout_2->addWidget(PLERecvId);

        PLESendData = new QLineEdit(Tab2SocketClient);
        PLESendData->setObjectName(QString::fromUtf8("PLESendData"));

        horizontalLayout_2->addWidget(PLESendData);

        pPBSendButton = new QPushButton(Tab2SocketClient);
        pPBSendButton->setObjectName(QString::fromUtf8("pPBSendButton"));

        horizontalLayout_2->addWidget(pPBSendButton);

        horizontalLayout_2->setStretch(0, 3);
        horizontalLayout_2->setStretch(1, 6);

        verticalLayout_2->addLayout(horizontalLayout_2);


        retranslateUi(Tab2SocketClient);

        QMetaObject::connectSlotsByName(Tab2SocketClient);
    } // setupUi

    void retranslateUi(QWidget *Tab2SocketClient)
    {
        Tab2SocketClient->setWindowTitle(QCoreApplication::translate("Tab2SocketClient", "Form", nullptr));
        label->setText(QCoreApplication::translate("Tab2SocketClient", "\354\210\230\354\213\240 \353\215\260\354\235\264\355\204\260", nullptr));
        pPBRecvDataClear->setText(QCoreApplication::translate("Tab2SocketClient", "\354\210\230\354\213\240 \354\202\255\354\240\234", nullptr));
        pPBServerConnect->setText(QCoreApplication::translate("Tab2SocketClient", "\354\204\234\353\262\204 \354\227\260\352\262\260", nullptr));
        pPBSendButton->setText(QCoreApplication::translate("Tab2SocketClient", "\354\206\241\354\213\240", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tab2SocketClient: public Ui_Tab2SocketClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAB2SOCKETCLIENT_H
