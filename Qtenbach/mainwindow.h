#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

private slots:
    void on_rmQueue_clicked();
    void on_dispQueue_clicked();
    void on_sendButton_clicked();
    void on_loadButton_clicked();
};

#endif // MAINWINDOW_H
