#include "JanelaConsulta.h"
#include "ui_JanelaConsulta.h"
#include <string>

JanelaConsulta::JanelaConsulta(QWidget *parent, Controler *controle) :
    QDialog(parent),
    ui(new Ui::JanelaConsulta)
{
    ui->setupUi(this);

    QString desc =
            QString::fromStdString(
                controle->consultarInsumos(0));
    ui->textBrowser->setText(desc);
}

JanelaConsulta::~JanelaConsulta()
{
    delete ui;
}
