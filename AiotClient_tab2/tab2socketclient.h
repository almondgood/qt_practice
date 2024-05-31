#ifndef TAB2SOCKETCLIENT_H
#define TAB2SOCKETCLIENT_H

#include <QWidget>
#include <QTime>
#include "socketclient.h"

namespace Ui {
class Tab2SocketClient;
}

class Tab2SocketClient : public QWidget
{
    Q_OBJECT

public:
    explicit Tab2SocketClient(QWidget *parent = nullptr);
    ~Tab2SocketClient();

private slots:
    void on_pPBServerConnect_clicked(bool checked);

private:
    Ui::Tab2SocketClient *ui;
    SocketClient* pSocketClient;

private slots:
    void socketRecvUpdateSlot(QString);

    void on_pPBSendButton_clicked();
    void on_pPBRecvDataClear_clicked();

signals:
    void ledWriteSig(int);
};

#endif // TAB2SOCKETCLIENT_H
