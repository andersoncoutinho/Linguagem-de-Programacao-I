#include "JanelaCadastro.h"
#include "ui_JanelaCadastro.h"
#include "janelaCadVacina.h"
#include "JanelaCadMedicamento.h"
#include "JanelaCadEpi.h"
#include <QMessageBox>

JanelaCadastro::JanelaCadastro(QWidget *parent, Controler *controle)
    : QDialog(parent), ui(new Ui::JanelaCadastro) {

    ui->setupUi(this);
    this->controle = controle;

}

JanelaCadastro::~JanelaCadastro()
{
    delete ui;
}

void JanelaCadastro::on_pushButton_clicked() {

    if(ui->comboBox->currentText() == "Vacina") {
        JanelaCadVacina janelaVacina(nullptr, controle);
        janelaVacina.exec();

    } else if(ui->comboBox->currentText() == "Medicamento") {
        JanelaCadMedicamento janelaMedicamento(nullptr, controle);
        janelaMedicamento.exec();
    } else if(ui->comboBox->currentText() == "EPI"){
        JanelaCadEpi janelaEpi(nullptr, controle);
        janelaEpi.exec();
    } else {
        QMessageBox::about(this, "", "Selecione um tipo de insumo");
    }
}


void JanelaCadastro::on_btnVoltar_clicked() {
    this->close();
}

