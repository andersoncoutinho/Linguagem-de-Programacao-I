#include "janelaCadVacina.h"
#include "ui_JanelaCadVacina.h"
#include "Vacina.h"
#include <iostream>
#include <QMessageBox>
#include "Persistencia.h"

JanelaCadVacina::JanelaCadVacina(QWidget *parent, Controler *controle) :
    QDialog(parent),
    ui(new Ui::JanelaCadVacina)
{
    ui->setupUi(this);
    this->controle = controle;
    this->setFixedSize(this->width(), this->height());
}

JanelaCadVacina::~JanelaCadVacina()
{
    delete ui;
}

void JanelaCadVacina::on_pushButton_clicked() {

    std::string nome = ui->textBoxNome->text().toUtf8().constData();
    int qtd = ui->textBoxQuant->text().toInt();
    double valor = ui->textBovValor->text().toDouble();
    std::string vencimento = ui->textBoxVencimento->text().toUtf8().constData();
    std::string fabricante = ui->textBoxFabricante->text().toUtf8().constData();
    std::string tecnologia = ui->textBoxTecnologia->text().toUtf8().constData();
    int doses = ui->textBoxDoses->text().toInt();
    int intervalo = ui->textBoxInterv->text().toInt();

    Insumo *insumo = new Vacina(nome, qtd, valor, vencimento, fabricante,
                                tecnologia, doses, intervalo);

    int i = controle->cadastrarInsumosMS(insumo);

    if(i == -1) {
        QMessageBox::about(this, "Cadastro", "Vacina cadastrada com sucesso");

    } else {
        QMessageBox::StandardButton resposta =
        QMessageBox::question(this, "Aviso", "Insumo já existe no cadastro.\n"
                                             "Deseja adicionar a quantidade informada?");

        if(resposta == QMessageBox::Yes) {
            controle->atualizarQtdInsumoMS(i, insumo->getQuantidade());
            QMessageBox::about(this, "Cadastro", "Quantidade atualizada com sucesso");
        }

    }



    this->close();
}


void JanelaCadVacina::on_btnCancel_clicked() {
    this->close();
}

