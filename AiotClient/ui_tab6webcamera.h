/********************************************************************************
** Form generated from reading UI file 'tab6webcamera.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAB6WEBCAMERA_H
#define UI_TAB6WEBCAMERA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tab6WebCamera
{
public:
    QVBoxLayout *verticalLayout;
    QGraphicsView *pGPCamView;
    QPushButton *pPBCamStart;

    void setupUi(QWidget *Tab6WebCamera)
    {
        if (Tab6WebCamera->objectName().isEmpty())
            Tab6WebCamera->setObjectName(QString::fromUtf8("Tab6WebCamera"));
        Tab6WebCamera->resize(400, 300);
        verticalLayout = new QVBoxLayout(Tab6WebCamera);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pGPCamView = new QGraphicsView(Tab6WebCamera);
        pGPCamView->setObjectName(QString::fromUtf8("pGPCamView"));

        verticalLayout->addWidget(pGPCamView);

        pPBCamStart = new QPushButton(Tab6WebCamera);
        pPBCamStart->setObjectName(QString::fromUtf8("pPBCamStart"));
        pPBCamStart->setCheckable(true);

        verticalLayout->addWidget(pPBCamStart);


        retranslateUi(Tab6WebCamera);

        QMetaObject::connectSlotsByName(Tab6WebCamera);
    } // setupUi

    void retranslateUi(QWidget *Tab6WebCamera)
    {
        Tab6WebCamera->setWindowTitle(QCoreApplication::translate("Tab6WebCamera", "Form", nullptr));
        pPBCamStart->setText(QCoreApplication::translate("Tab6WebCamera", "CamStart", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tab6WebCamera: public Ui_Tab6WebCamera {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAB6WEBCAMERA_H
