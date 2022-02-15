#include "mainwindow.h"

#include <QApplication>

#include "ui_mainwindow.h"
#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <time.h>
#include <qprocess.h>
#include <qmessagebox.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
