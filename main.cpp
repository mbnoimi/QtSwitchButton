#include "mainwidget.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    app.setApplicationName("SwitchButton");
    app.setApplicationDisplayName("SwitchButton");

    MainWidget w;
    w.show();

    return app.exec();
}
