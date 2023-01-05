#include "mywidget.h"

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
{
    QPushButton *btn = new QPushButton;
    btn->setParent(this);
    btn->setText("close");
    connect(btn,&QPushButton::clicked,this,&MyWidget::close);

}

MyWidget::~MyWidget()
{

}

