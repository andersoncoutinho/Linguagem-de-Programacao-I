#include "JanelaConsulta.h"
#include "ui_JanelaConsulta.h"
#include <string>

JanelaConsulta::JanelaConsulta(QWidget *parent, Controler *controle) :
    QDialog(parent),
    ui(new Ui::JanelaConsulta)
{
    ui->setupUi(this);
    this->controle = controle;
    ui->btnFiltrar->hide();
    ui->btnDetalhes->hide();
    ui->comboBox->hide();
    this->setFixedSize(this->width(), this->height());


}

JanelaConsulta::~JanelaConsulta()
{
    delete ui;
}

void JanelaConsulta::on_btnVerEstoque_clicked() {

    ui->btnDetalhes->setText("Mostrar Detalhes");
    estoque = true;
    indiceEstado = 0;
    ui->btnFiltrar->hide();
    ui->comboBox->hide();

    QString desc =
            QString::fromStdString(controle->consultarInsumos(ESTQ));

    ui->btnDetalhes->show();
    ui->textBrowser->clear();
    ui->textBrowser->setText(desc);
}


void JanelaConsulta::on_btnDetalhes_clicked() {

    std::string desc;

    if(ui->btnDetalhes->text() == "Mostrar Detalhes") {

        ui->btnDetalhes->setText("Esconder Detalhes");

        if(estoque) {
            desc = controle->consultarDescricao(ESTQ);
        } else {
            if(indiceEstado) {
                desc = "------------------------------------\n"
                       + controle->getNomeLocal(indiceEstado) + "\n"
                       + "------------------------------------\n"
                       + controle->consultarDescricao(indiceEstado);
            } else {
                for(int i = 1; i < QTD_LOCAIS; i++) {
                    if(controle->getLocal(i).getInsumos()->size()) {

                        desc += "------------------------------------\n"
                                + controle->getNomeLocal(i) + "\n"
                                + "------------------------------------\n"
                                + controle->consultarDescricao(i);
                    }
                }
            }

        }

        ui->textBrowser->clear();
        ui->textBrowser->setText(QString::fromStdString(desc));

    } else {
        ui->btnDetalhes->setText("Mostrar Detalhes");

        if(estoque) {
            desc = controle->consultarInsumos(ESTQ);
        } else {
            if(indiceEstado) {
                desc =  "------------------------------------\n"
                        + controle->getNomeLocal(indiceEstado) + "\n"
                        + "------------------------------------\n"
                        + controle->consultarInsumos(indiceEstado);
            } else {
                for(int i = 1; i < QTD_LOCAIS; i++) {
                    if(controle->getLocal(i).getInsumos()->size()) {
                        desc += "------------------------------------\n"
                                + controle->getNomeLocal(i) + "\n"
                                + "------------------------------------\n"
                                + controle->consultarInsumos(i);
                    }

                }
            }

        }


        ui->textBrowser->clear();
        ui->textBrowser->setText(QString::fromStdString(desc));

    }
}


void JanelaConsulta::on_btnFiltrar_clicked() {

    ui->btnDetalhes->setText("Mostrar Detalhes");
    QString estado = ui->comboBox->currentText();


    int i = controle->getIndiceLocal(estado.toUtf8().toStdString());

    if(i != -1) {
        indiceEstado = i;
        std::string desc = "------------------------------------\n"
                           + controle->getNomeLocal(i) + "\n"
                           + "------------------------------------\n"
                           + controle->consultarInsumos(i);

        ui->textBrowser->clear();
        ui->textBrowser->setText(QString::fromStdString(desc));

    }

}


void JanelaConsulta::on_btnVerDistribuidos_clicked() {

    ui->btnDetalhes->setText("Mostrar Detalhes");
    estoque = false;
    indiceEstado = 0;
    ui->btnFiltrar->show();
    ui->btnDetalhes->show();
    ui->comboBox->show();

    std::string desc;

    for(int i = 1; i < QTD_LOCAIS; i++) {
        if(controle->getLocal(i).getInsumos()->size() > 0) {
            desc += "------------------------------------\n"
                    + controle->getNomeLocal(i) + "\n"
                    + "------------------------------------\n"
                    + controle->consultarInsumos(i);
        }

    }

    ui->textBrowser->clear();
    ui->textBrowser->setText(QString::fromStdString(desc));

}


void JanelaConsulta::on_btnVoltar_clicked() {
    this->close();
}

