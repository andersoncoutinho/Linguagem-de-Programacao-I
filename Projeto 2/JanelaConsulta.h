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

private:
    Ui::JanelaConsulta *ui;
    Controler *controle;
};

#endif // JANELACONSULTA_H
