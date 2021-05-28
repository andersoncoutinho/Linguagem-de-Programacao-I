#ifndef JANELADISTRIBUIR_H
#define JANELADISTRIBUIR_H

#include <QDialog>
#include "Controler.h"

namespace Ui {
class JanelaDistribuir;
}

class JanelaDistribuir : public QDialog
{
    Q_OBJECT

public:
    explicit JanelaDistribuir(QWidget *parent = nullptr, Controler *controle = nullptr);
    ~JanelaDistribuir();

private slots:
    void on_btnDistribuir_clicked();

    void on_btnVoltar_clicked();

private:
    Ui::JanelaDistribuir *ui;
    Controler *controle;
};

#endif // JANELADISTRIBUIR_H
