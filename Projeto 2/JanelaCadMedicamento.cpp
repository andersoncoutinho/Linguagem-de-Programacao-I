#include "JanelaCadMedicamento.h"
#include "ui_JanelaCadMedicamento.h"

JanelaCadMedicamento::JanelaCadMedicamento(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::JanelaCadMedicamento)
{
    ui->setupUi(this);
}

JanelaCadMedicamento::~JanelaCadMedicamento()
{
    delete ui;
}
