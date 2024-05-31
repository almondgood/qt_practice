#ifndef TABSOCKET_H
#define TABSOCKET_H

#include <QWidget>
#include <QTime>
#include "socketclient.h"
#include "keyboard.h"

namespace Ui {
class TabSocket;
}

class TabSocket : public QWidget
{
    Q_OBJECT

public:
    explicit TabSocket(QWidget *parent = nullptr);
    ~TabSocket();
    SocketClient* pSocketClient;

private:
    Ui::TabSocket *ui;
    Keyboard* pKeyBoard;

private slots:
    void on_pPBServerConnect_clicked(bool checked);

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

#endif // TABSOCKET_H
