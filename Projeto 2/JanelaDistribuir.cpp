#include "JanelaDistribuir.h"
#include "ui_JanelaDistribuir.h"
#include "QMessageBox"
#include <string>

JanelaDistribuir::JanelaDistribuir(QWidget *parent, Controler *controle) :
    QDialog(parent),
    ui(new Ui::JanelaDistribuir)
{
    ui->setupUi(this);
    this->controle = controle;
}

JanelaDistribuir::~JanelaDistribuir()
{
    delete ui;
}

void JanelaDistribuir::on_btnDistribuir_clicked() {

    std::string estado = ui->comboBox
                            ->currentText()
                            .toUtf8().constData();

    int indiceEstado = controle->getIndiceLocal(estado);
    if(indiceEstado != -1) {

        int qtd = ui->textFieldQtd->text().toInt();

        std::string nome = ui->textFieldInsumo
                                ->text().toUtf8().constData();


        switch(controle->distribuirInsumo(nome, qtd, indiceEstado)) {
            case 1:
                QMessageBox::about(this, "", "Insumo distribuído com sucesso");
                this->close();
                break;
            case -1:
                QMessageBox::about(this, "", "Quantidade insuficiente em estoque");
                break;
            case 0:
                QMessageBox::about(this, "", "Insumo não existe no estoque");
                break;

        }

    } else {
        QMessageBox::about(this, "", "Selecione um estado");
    }
}


void JanelaDistribuir::on_btnVoltar_clicked() {
    this->close();
}

