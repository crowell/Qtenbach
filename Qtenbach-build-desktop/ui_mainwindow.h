/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sat Apr 23 19:01:18 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQtenbach_is_a_grahphical_wrapper_for_gutenbach_2011_Jeff_Crowell;
    QAction *actionJeff_Crowell_2011;
    QWidget *centralWidget;
    QLineEdit *songPath;
    QPushButton *sendButton;
    QPushButton *loadButton;
    QPushButton *dispQueue;
    QLineEdit *pid2kill;
    QPushButton *rmQueue;
    QMenuBar *menuBar;
    QMenu *menuAbout_Qtenbach;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(400, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8("music.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionQtenbach_is_a_grahphical_wrapper_for_gutenbach_2011_Jeff_Crowell = new QAction(MainWindow);
        actionQtenbach_is_a_grahphical_wrapper_for_gutenbach_2011_Jeff_Crowell->setObjectName(QString::fromUtf8("actionQtenbach_is_a_grahphical_wrapper_for_gutenbach_2011_Jeff_Crowell"));
        actionJeff_Crowell_2011 = new QAction(MainWindow);
        actionJeff_Crowell_2011->setObjectName(QString::fromUtf8("actionJeff_Crowell_2011"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        songPath = new QLineEdit(centralWidget);
        songPath->setObjectName(QString::fromUtf8("songPath"));
        songPath->setGeometry(QRect(0, 50, 391, 31));
        sendButton = new QPushButton(centralWidget);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));
        sendButton->setGeometry(QRect(120, 110, 121, 24));
        loadButton = new QPushButton(centralWidget);
        loadButton->setObjectName(QString::fromUtf8("loadButton"));
        loadButton->setGeometry(QRect(130, 80, 91, 24));
        dispQueue = new QPushButton(centralWidget);
        dispQueue->setObjectName(QString::fromUtf8("dispQueue"));
        dispQueue->setGeometry(QRect(250, 150, 111, 24));
        pid2kill = new QLineEdit(centralWidget);
        pid2kill->setObjectName(QString::fromUtf8("pid2kill"));
        pid2kill->setGeometry(QRect(250, 180, 113, 23));
        rmQueue = new QPushButton(centralWidget);
        rmQueue->setObjectName(QString::fromUtf8("rmQueue"));
        rmQueue->setGeometry(QRect(240, 210, 131, 24));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 21));
        menuAbout_Qtenbach = new QMenu(menuBar);
        menuAbout_Qtenbach->setObjectName(QString::fromUtf8("menuAbout_Qtenbach"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuAbout_Qtenbach->menuAction());
        menuAbout_Qtenbach->addAction(actionQtenbach_is_a_grahphical_wrapper_for_gutenbach_2011_Jeff_Crowell);
        menuAbout_Qtenbach->addAction(actionJeff_Crowell_2011);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Qtenbach", 0, QApplication::UnicodeUTF8));
        actionQtenbach_is_a_grahphical_wrapper_for_gutenbach_2011_Jeff_Crowell->setText(QApplication::translate("MainWindow", "Qtenbach is a grahphical wrapper for gutenbach. ", 0, QApplication::UnicodeUTF8));
        actionJeff_Crowell_2011->setText(QApplication::translate("MainWindow", "Jeff Crowell 2011", 0, QApplication::UnicodeUTF8));
        sendButton->setText(QApplication::translate("MainWindow", "send to queue", 0, QApplication::UnicodeUTF8));
        loadButton->setText(QApplication::translate("MainWindow", "load", 0, QApplication::UnicodeUTF8));
        dispQueue->setText(QApplication::translate("MainWindow", "Display Queue", 0, QApplication::UnicodeUTF8));
        pid2kill->setText(QApplication::translate("MainWindow", "ENTER PID HERE", 0, QApplication::UnicodeUTF8));
        rmQueue->setText(QApplication::translate("MainWindow", "remove from queue", 0, QApplication::UnicodeUTF8));
        menuAbout_Qtenbach->setTitle(QApplication::translate("MainWindow", "About Qtenbach", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
