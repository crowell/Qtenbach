#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cstring>
#include <QFileDialog>
#include <QProcess>
#include <QMessageBox>
#include <string>
#include <iostream>

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
    sprintf(queueSongcmd,"gbr \"%s", songPath);
    QProcess add2Q;
    add2Q.execute(queueSongcmd);
}

void MainWindow::on_dispQueue_clicked()
{
    QProcess *myProcess = new QProcess(this);
    myProcess->start("gbq");
    myProcess->waitForFinished();
    //qDebug() << "Unlock Output:" << myProcess->readAll();
    QString hello=myProcess->readAllStandardOutput();
    char* newDatachar=hello.toLatin1().data();
    QMessageBox msg;
    //newDatachar = (char*)newData;
    msg.setText(newDatachar);
    msg.exec();

}

void MainWindow::on_rmQueue_clicked()
{
    QString Qkiller=ui->pid2kill->text();
    char* process = Qkiller.toLatin1().data();
    char* Qkillercmd;
    sprintf(Qkillercmd,"gbrm \"%s", process);
    QProcess rmfromQ;
    rmfromQ.execute(Qkillercmd);
}
