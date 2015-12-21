#include <QGridLayout>
#include <QLabel>
#include "mainwidget.h"
#include "switchbutton.h"

MainWidget::MainWidget(QWidget *parent) : QWidget(parent) {
    QGridLayout* layout=new QGridLayout(this);

    layout->addWidget(new QLabel("Default appearance:"),0,0);
    SwitchButton* firstButton=new SwitchButton();
    layout->addWidget(firstButton,0,1);

    layout->addWidget(new QLabel("Drink beer:"),1,0);
    SwitchButton* beerButton=new SwitchButton();
    beerButton->setLabels("yes","no");
    beerButton->setColors(Qt::yellow,Qt::gray);
    layout->addWidget(beerButton,1,1);

    layout->addWidget(new QLabel("Red light:"),2,0);
    SwitchButton* redButton=new SwitchButton();
    redButton->setColors(Qt::red,Qt::darkRed);
    layout->addWidget(redButton,2,1);

    layout->addWidget(new QLabel("Green light:"),3,0);
    SwitchButton* greenButton=new SwitchButton();
    greenButton->setColors(Qt::green,Qt::darkGreen);
    layout->addWidget(greenButton,3,1);
}



















