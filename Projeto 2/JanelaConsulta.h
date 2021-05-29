#ifndef JANELACONSULTA_H
#define JANELACONSULTA_H

#include <QDialog>
#include "Controler.h"

namespace Ui {
class JanelaConsulta;
}

class JanelaConsulta : public QDialog
{
    Q_OBJECT

public:
    explicit JanelaConsulta(QWidget *parent = nullptr, Controler *controle = nullptr);
    ~JanelaConsulta();

private slots:
    void on_btnVerDistribuidos_2_clicked();

    void on_btnDetalhes_clicked();

    void on_btnFiltrar_clicked();

    void on_btnVerDistribuidos_clicked();

    void on_btnVoltar_clicked();

private:
    Ui::JanelaConsulta *ui;
    Controler *controle;
    bool estoque;
    int indiceEstado;
};

#endif // JANELACONSULTA_H
