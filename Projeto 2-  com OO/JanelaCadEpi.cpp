#include "JanelaCadEpi.h"
#include "ui_JanelaCadEpi.h"
#include "EPI.h"
#include "QMessageBox"

JanelaCadEpi::JanelaCadEpi(QWidget *parent, Controler *controle) :
    QDialog(parent),
    ui(new Ui::JanelaCadEpi)
{
    ui->setupUi(this);
    this->controle = controle;
}

JanelaCadEpi::~JanelaCadEpi()
{
    delete ui;
}

void JanelaCadEpi::on_btnCancel_clicked() {
    this->close();
}


void JanelaCadEpi::on_btnOK_clicked() {

    std::string nome = ui->textBoxNome->text().toUtf8().constData();
    int qtd = ui->textBoxQuantidade->text().toInt();
    int valor = ui->textBoxValor->text().toInt();
    std::string vencimento = ui->textBoxVencimento->text().toUtf8().constData();
    std::string fabricante = ui->textBoxFabricante->text().toUtf8().constData();
    std::string tipo = ui->textBoxTipo->text().toUtf8().constData();
    std::string descricao = ui->textBoxDescricao->text().toUtf8().constData();


    Insumo *insumo = new Epi(nome, qtd, valor, vencimento, fabricante,
                                    tipo, descricao);

    controle->cadastrarInsumosMS(insumo);
    QMessageBox::about(this, "", "EPI cadastrado com sucesso");

    this->close();

}

