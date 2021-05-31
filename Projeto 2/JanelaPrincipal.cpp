#include "JanelaPrincipal.h"
#include "ui_JanelaPrincipal.h"
#include "JanelaCadastro.h"
#include "JanelaConsulta.h"
#include "JanelaDistribuir.h"
#include "Persistencia.h"
#include <QSize>
#include <QMessageBox>
JanelaPrincipal::JanelaPrincipal(QWidget *parent) : QMainWindow(parent), ui(new Ui::JanelaPrincipal) {

    if(!Persistencia::lerInsumos(&controle)) {
        QMessageBox::about(this, "", "Erro ao carregar arquivo");
    }

    ui->setupUi(this);


    disquete.addFile(":/icones/icones/disquete.png");
    sair.addFile(":/icones/icones/sair.png");
    vacina.addFile(":/icones/icones/vacina.png");
    lupa.addFile(":/icones/icones/lupa.png");
    ambulancia.addFile(":/icones/icones/ambulancia.png");

    ui->actionSalvar->setIcon(disquete);
    ui->actionSair->setIcon(sair);
    ui->btnCadastrar->setIcon(vacina);
    ui->btnConsultar->setIcon(lupa);
    ui->btnDistribuir->setIcon(ambulancia);

    this->setFixedSize(this->width(), this->height());



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


void JanelaPrincipal::on_actionSair_triggered() {
    this->close();
}


void JanelaPrincipal::on_actionSalvar_triggered() {
    Persistencia::salvarInsumos(controle);
}


void JanelaPrincipal::on_actionSalvar_hovered() {

}

