#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cstring>
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_loadButton_clicked()
{
   QString fileName;
   fileName = QFileDialog::getOpenFileName(this, tr("Pick song"), "~/", tr("Music Files (*.ogg *.mp3 *.flac)"));
   ui->songPath->setText(fileName);
}

void MainWindow::on_sendButton_clicked()
{
    QString QsongPath=ui->songPath->text();
    char *songPath = QsongPath.toLatin1().data();
    char* queueSongcmd;
    sprintf(queueSongcmd,"mplayer '%s'", songPath);
    system(queueSongcmd);
}
