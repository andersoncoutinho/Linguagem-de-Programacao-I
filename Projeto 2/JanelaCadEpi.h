#ifndef JANELACADEPI_H
#define JANELACADEPI_H

#include <QDialog>
#include "Controler.h"

namespace Ui {
class JanelaCadEpi;
}

class JanelaCadEpi : public QDialog
{
    Q_OBJECT

public:
    explicit JanelaCadEpi(QWidget *parent = nullptr, Controler *controle = nullptr);
    ~JanelaCadEpi();

private slots:
    void on_btnCancel_clicked();

    void on_btnOK_clicked();

private:
    Ui::JanelaCadEpi *ui;
    Controler *controle;
};

#endif // JANELACADEPI_H
