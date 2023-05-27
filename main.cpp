#include "mainwindow.h"
#include "mywidget.h"

#include <QApplication>
#include <QtWidgets>
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MyWidget widget;
    widget.show();
    return app.exec();
}
