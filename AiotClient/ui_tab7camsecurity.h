/********************************************************************************
** Form generated from reading UI file 'tab7camsecurity.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAB7CAMSECURITY_H
#define UI_TAB7CAMSECURITY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tab7CamSecurity
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pPBCamView;
    QPushButton *pPBsnapShot;
    QCheckBox *pCBsecurityMode;
    QCheckBox *pCBColorMode;
    QVBoxLayout *verticalLayout;
    QLabel *pTLcamView;

    void setupUi(QWidget *Tab7CamSecurity)
    {
        if (Tab7CamSecurity->objectName().isEmpty())
            Tab7CamSecurity->setObjectName(QString::fromUtf8("Tab7CamSecurity"));
        Tab7CamSecurity->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(Tab7CamSecurity);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pPBCamView = new QPushButton(Tab7CamSecurity);
        pPBCamView->setObjectName(QString::fromUtf8("pPBCamView"));
        pPBCamView->setCheckable(true);

        horizontalLayout->addWidget(pPBCamView);

        pPBsnapShot = new QPushButton(Tab7CamSecurity);
        pPBsnapShot->setObjectName(QString::fromUtf8("pPBsnapShot"));

        horizontalLayout->addWidget(pPBsnapShot);

        pCBsecurityMode = new QCheckBox(Tab7CamSecurity);
        pCBsecurityMode->setObjectName(QString::fromUtf8("pCBsecurityMode"));

        horizontalLayout->addWidget(pCBsecurityMode);

        pCBColorMode = new QCheckBox(Tab7CamSecurity);
        pCBColorMode->setObjectName(QString::fromUtf8("pCBColorMode"));

        horizontalLayout->addWidget(pCBColorMode);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pTLcamView = new QLabel(Tab7CamSecurity);
        pTLcamView->setObjectName(QString::fromUtf8("pTLcamView"));

        verticalLayout->addWidget(pTLcamView);


        verticalLayout_2->addLayout(verticalLayout);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(1, 9);

        retranslateUi(Tab7CamSecurity);

        QMetaObject::connectSlotsByName(Tab7CamSecurity);
    } // setupUi

    void retranslateUi(QWidget *Tab7CamSecurity)
    {
        Tab7CamSecurity->setWindowTitle(QCoreApplication::translate("Tab7CamSecurity", "Form", nullptr));
        pPBCamView->setText(QCoreApplication::translate("Tab7CamSecurity", "\354\230\201\354\203\201 \353\263\264\352\270\260", nullptr));
        pPBsnapShot->setText(QCoreApplication::translate("Tab7CamSecurity", "\354\212\244\353\203\205 \354\203\267", nullptr));
        pCBsecurityMode->setText(QCoreApplication::translate("Tab7CamSecurity", "\353\263\264\354\225\210 \353\252\250\353\223\234", nullptr));
        pCBColorMode->setText(QCoreApplication::translate("Tab7CamSecurity", "\354\273\254\353\237\254 \353\252\250\353\223\234", nullptr));
        pTLcamView->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Tab7CamSecurity: public Ui_Tab7CamSecurity {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAB7CAMSECURITY_H
