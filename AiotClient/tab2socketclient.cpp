#include "tab2socketclient.h"
#include "ui_tab2socketclient.h"

Tab2SocketClient::Tab2SocketClient(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Tab2SocketClient)
{
    ui->setupUi(this);
    pSocketClient = new SocketClient(this);
    pKeyBoard = new Keyboard();
    connect(pSocketClient, SIGNAL(sigSocketRecv(QString)), this, SLOT(socketRecvUpdateSlot(QString)));
    connect(ui->PLERecvId, SIGNAL(selectionChanged()), this, SLOT(keyboardSlot()));
    connect(ui->PLESendData, SIGNAL(selectionChanged()), this, SLOT(keyboardSlot()));
    ui->pPBSendButton->setEnabled(false);
}

Tab2SocketClient::~Tab2SocketClient()
{
    delete ui;
}

void Tab2SocketClient::on_pPBServerConnect_clicked(bool checked)
{
    bool bOk;
    if (checked) {
        pSocketClient->slotConnectToServer(bOk);
        if (bOk) {
            ui->pPBServerConnect->setText("연결 해제");
            ui->pPBSendButton->setEnabled(true);
        }
    } else {
        pSocketClient->slotClosedByServer();
        ui->pPBServerConnect->setText("서버 연결");
        ui->pPBSendButton->setEnabled(false);
    }
}

void Tab2SocketClient::socketRecvUpdateSlot(QString strRecvData) {
    QTime time = QTime::currentTime();
    QString strTime = time.toString();
    strRecvData.chop(1);
    strRecvData = strTime + " " + strRecvData;

    ui->pTERecvData->append(strRecvData);
    //[JWT_QT]LED@0xff => @JWT_QT@LED@0xff => 파싱
    strRecvData.replace("[", "@");
    strRecvData.replace("]", "@");
    QStringList qList = strRecvData.split("@");

    if (qList[2].indexOf("LED") == 0) {
        bool bOk;
        int ledNo = qList[3].toInt(&bOk, 16); // 내부적으로 예외처리까지 되어있음
        if (bOk) {
            emit ledWriteSig(ledNo);
        }
    } else if (qList[2].indexOf("LAMP") == 0 || qList[2].indexOf("GAS") == 0 ) {
        emit tab3RecvDataSig(strRecvData);
    } else if (qList[2].indexOf("SENSOR") == 0){
        emit tab4RecvDataSig(strRecvData);
    }
}

void Tab2SocketClient::on_pPBSendButton_clicked()
{
    QString strRecvId = ui->PLERecvId->text();
    QString strSendData = ui->PLESendData->text();
    if (!strSendData.isEmpty()) {
        if(strRecvId.isEmpty())
            strSendData = "[ALLMSG]" + strSendData;
        else
            strSendData = "["+strRecvId+"]" + strSendData;

        pSocketClient->slotSocketSendData(strSendData);
        ui->PLESendData->clear();
    }
}

void Tab2SocketClient::on_pPBRecvDataClear_clicked()
{
    ui->pTERecvData->clear();
}

void Tab2SocketClient::keyboardSlot() {
    QLineEdit* pQLineEdit = (QLineEdit*)sender();
    pKeyBoard->setLineEdit(pQLineEdit);
    pKeyBoard->show();
}
