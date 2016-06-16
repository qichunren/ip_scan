#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "shellprocess.h"
#include "device.h"

#define THREAD_SIZE 10

namespace Ui {
class MainWindow;
}

class QMovie;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    ShellProcess *shellProcess;

private slots:    

    void startScan(); // Execute when 'scan' button clicked.
    void on_showOnlineDevicesButton_clicked();

    void on_testSSH_Button_clicked();

public slots:
    void onCommandSuccess(QString ip);
    void onCommandFailed(QString ip);

private:
    Ui::MainWindow *ui;
    QMovie *loadingImage;


    const QString get_localmachine_ip() const;
    QStringList generateRangeIP(QString ip1, QString ip2);
    QStringList scanHosts;
    QStringList to_scanHosts;
    QStringList onlineHosts;

    QVector<Device*> _onlineDevices;


    int onlineCount;
};

#endif // MAINWINDOW_H
