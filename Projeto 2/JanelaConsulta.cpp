#include "JanelaConsulta.h"
#include "ui_JanelaConsulta.h"
#include <string>

JanelaConsulta::JanelaConsulta(QWidget *parent, Controler *controle) :
    QDialog(parent),
    ui(new Ui::JanelaConsulta)
{
    ui->setupUi(this);
    this->controle = controle;


}

JanelaConsulta::~JanelaConsulta()
{
    delete ui;
}

void JanelaConsulta::on_btnVerDistribuidos_2_clicked() {

    QString desc =
            QString::fromStdString(controle->consultarInsumos(ESTQ));

    ui->textBrowser->clear();
    ui->textBrowser->setText(desc);
}


void JanelaConsulta::on_btnDetalhes_clicked() {

    QString desc =
            QString::fromStdString(controle->consultarDescricao(ESTQ));

    ui->textBrowser->clear();
    ui->textBrowser->setText(desc);

}

