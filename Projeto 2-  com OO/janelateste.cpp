#include "janelateste.h"
#include "ui_janelateste.h"

janelateste::janelateste(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::janelateste)
{
    ui->setupUi(this);
}

janelateste::~janelateste()
{
    delete ui;
}
