#include "designwidget.h"
#include "ui_designwidget.h"

DesignWidget::DesignWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::DesignWidget)
{
    ui->setupUi(this);
}

DesignWidget::~DesignWidget()
{
    delete ui;
}
