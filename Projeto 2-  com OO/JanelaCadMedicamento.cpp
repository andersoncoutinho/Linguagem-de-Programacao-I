#include "JanelaCadMedicamento.h"
#include "ui_JanelaCadMedicamento.h"
#include "Medicamento.h"
#include <QMessageBox>

JanelaCadMedicamento::JanelaCadMedicamento(QWidget *parent, Controler *controle) :
    QDialog(parent),
    ui(new Ui::JanelaCadMedicamento)
{
    ui->setupUi(this);
    this->controle = controle;
}

JanelaCadMedicamento::~JanelaCadMedicamento()
{
    delete ui;
}

void JanelaCadMedicamento::on_btnCancel_clicked() {
    this->close();
}


void JanelaCadMedicamento::on_btnOK_clicked() {


    std::string nome = ui->textBoxNome->text().toUtf8().constData();
    int qtd = ui->textBoxQuant->text().toInt();
    int valor = ui->textBoxValor->text().toInt();
    std::string vencimento = ui->textBoxVencimento->text().toUtf8().constData();
    std::string fabricante = ui->textBoxFabricante->text().toUtf8().constData();
    std::string dosagem = ui->textBoxDosagem->text().toUtf8().constData();
    std::string administracao = ui->textBoxAdm->text().toUtf8().constData();
    std::string disponibilizacao = ui->textBoxDispon->text().toUtf8().constData();


    Insumo *insumo = new Medicamento(nome, qtd, valor, vencimento, fabricante,
                                    dosagem, administracao, disponibilizacao);

    controle->cadastrarInsumosMS(insumo);
    QMessageBox::about(this, "", "Medicamento cadastrado com sucesso");

    this->close();
}

