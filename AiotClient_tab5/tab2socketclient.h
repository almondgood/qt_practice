#ifndef TAB2SOCKETCLIENT_H
#define TAB2SOCKETCLIENT_H

#include <QWidget>
#include <QTime>
#include "socketclient.h"
#include "keyboard.h"

namespace Ui {
class Tab2SocketClient;
}

class Tab2SocketClient : public QWidget
{
    Q_OBJECT

public:
    explicit Tab2SocketClient(QWidget *parent = nullptr);
    ~Tab2SocketClient();
    SocketClient* pSocketClient;

private slots:
    void on_pPBServerConnect_clicked(bool checked);

private:
    Ui::Tab2SocketClient *ui;
    //SocketClient* pSocketClient;
    Keyboard* pKeyBoard;

private slots:
    void socketRecvUpdateSlot(QString);

    void on_pPBSendButton_clicked();
    void on_pPBRecvDataClear_clicked();
    void keyboardSlot();

signals:
    void ledWriteSig(int);
    void tab3RecvDataSig(QString);
    void tab4RecvDataSig(QString);
    void tab5RecvDataSig(QString);
};

#endif // TAB2SOCKETCLIENT_H
