#ifndef JANELACADASTRO_H
#define JANELACADASTRO_H

#include <QDialog>
#include "Controler.h"

namespace Ui {
class JanelaCadastro;
}

class JanelaCadastro : public QDialog
{
    Q_OBJECT

public:
    explicit JanelaCadastro(QWidget *parent = nullptr, Controler *controle = nullptr);
    ~JanelaCadastro();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_btnVoltar_clicked();

private:
    Ui::JanelaCadastro *ui;
    Controler *controle;
};

#endif // JANELACADASTRO_H
