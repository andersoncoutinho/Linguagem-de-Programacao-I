#include "JanelaPrincipal.h"
#include "ui_JanelaPrincipal.h"
#include "JanelaCadastro.h"
#include "JanelaConsulta.h"
#include "JanelaDistribuir.h"

JanelaPrincipal::JanelaPrincipal(QWidget *parent) : QMainWindow(parent), ui(new Ui::JanelaPrincipal) {

    ui->setupUi(this);

}

JanelaPrincipal::~JanelaPrincipal() {
    delete ui;
}

void JanelaPrincipal::on_btnCadastrar_clicked() {

    JanelaCadastro janelaCadastro(nullptr, &controle);

    this->hide();
    janelaCadastro.exec();
    this->show();

}


void JanelaPrincipal::on_btnConsultar_clicked() {

    this->hide();
    JanelaConsulta janelaConsulta(nullptr, &controle);
    janelaConsulta.exec();
    this->show();
}


void JanelaPrincipal::on_btnDistribuir_clicked() {
    this->hide();
    JanelaDistribuir janelaDistribuir(nullptr, &controle);
    janelaDistribuir.exec();
    this->show();
}

