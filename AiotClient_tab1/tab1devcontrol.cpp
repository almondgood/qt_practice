#include "tab1devcontrol.h"
#include "ui_tab1devcontrol.h"

Tab1DevControl::Tab1DevControl(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Tab1DevControl)
{
    ui->setupUi(this);
    pKeyLed = new KeyLed(this);
    pQTimer = new QTimer(this);
    connect(pQTimer,SIGNAL(timeout()),this,SLOT(setValueDaialSlot()));
//    pKeyLed->writeLedData(255);
    connect(ui->pDialLed,SIGNAL(valueChanged(int)),pKeyLed,SLOT(writeLedData(int)));
    connect(ui->pDialLed,SIGNAL(valueChanged(int)),ui->pProgressBarLed,SLOT(setValue(int)));
    connect(pKeyLed,SIGNAL(updateKeydataSig(int)),this,SLOT(keyCheckBoxSlot(int)));
}
/*
void Tab1DevControl::progressBarSetSlot(int ledVal)
{
    ui->pProgressBarLed->setValue(ledVal);
    pKeyLed->writeLedData(ledVal);
}
*/
Tab1DevControl::~Tab1DevControl()
{
    delete ui;
}

void Tab1DevControl::on_pPBappQuit_clicked()
{
    qApp->quit();
}

void Tab1DevControl::on_pPBtimerStart_clicked(bool checked)
{
    if(checked)
    {
        QString strValue = ui->pCBtimerValue->currentText();
        pQTimer->start(strValue.toInt());
        ui->pPBtimerStart->setText("TiemrStop");
    }
    else
    {
        pQTimer->stop();
        ui->pPBtimerStart->setText("TiemrStart");
    }

}

void Tab1DevControl::setValueDaialSlot()
{
    int dialValue = ui->pDialLed->value();
    if(dialValue >= ui->pDialLed->maximum())
        dialValue = 0;
    else
        dialValue++;
    ui->pDialLed->setValue(dialValue);
}


void Tab1DevControl::on_pCBtimerValue_currentIndexChanged(const QString &arg1)
{
    if(pQTimer->isActive())
    {
        pQTimer->stop();
        pQTimer->start(arg1.toInt());
    }
}
void Tab1DevControl::keyCheckBoxSlot(int keyNo)
{
    static int lcdData;
    lcdData ^= (0x01 << (keyNo - 1));
    ui->PLcdnumberKey->display(lcdData);

    QCheckBox * pQCheckBoxArray[8] = {ui->pCBkey1,ui->pCBkey2,ui->pCBkey3,ui->pCBkey4,ui->pCBkey5,ui->pCBkey6,ui->pCBkey7,ui->pCBkey8};
    for(int i=0;i<8;i++)
    {
        if(keyNo == i+1)
        {
            if(pQCheckBoxArray[i]->isChecked())
                pQCheckBoxArray[i]->setChecked(false);
            else
                pQCheckBoxArray[i]->setChecked(true);
        }
    }
}
