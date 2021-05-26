#include "JanelaCadEpi.h"
#include "ui_JanelaCadEpi.h"

JanelaCadEpi::JanelaCadEpi(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::JanelaCadEpi)
{
    ui->setupUi(this);
}

JanelaCadEpi::~JanelaCadEpi()
{
    delete ui;
}
