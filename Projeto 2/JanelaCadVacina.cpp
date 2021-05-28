#include "janelaCadVacina.h"
#include "ui_JanelaCadVacina.h"
#include "Vacina.h"
#include <iostream>
#include <QMessageBox>


JanelaCadVacina::JanelaCadVacina(QWidget *parent, Controler *controle) :
    QDialog(parent),
    ui(new Ui::JanelaCadVacina)
{
    ui->setupUi(this);
    this->controle = controle;
}

JanelaCadVacina::~JanelaCadVacina()
{
    delete ui;
}

void JanelaCadVacina::on_pushButton_clicked() {

    std::string nome = ui->textBoxNome->text().toUtf8().constData();
    int qtd = ui->textBoxQuant->text().toInt();
    int valor = ui->textBovValor->text().toInt();
    std::string vencimento = ui->textBoxVencimento->text().toUtf8().constData();
    std::string fabricante = ui->textBoxFabricante->text().toUtf8().constData();
    std::string tecnologia = ui->textBoxTecnologia->text().toUtf8().constData();
    int doses = ui->textBoxDoses->text().toInt();
    int intervalo = ui->textBoxInterv->text().toInt();

    Insumo *insumo = new Vacina(nome, qtd, valor, vencimento, fabricante,
                                tecnologia, doses, intervalo);

    controle->cadastrarInsumosMS(insumo);
    QMessageBox::about(this, "", "Vacina cadastrada com sucesso");
    this->close();

}


void JanelaCadVacina::on_btnCancel_clicked() {
    this->close();
}

