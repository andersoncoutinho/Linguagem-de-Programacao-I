#ifndef JANELACADMEDICAMENTO_H
#define JANELACADMEDICAMENTO_H

#include <QDialog>
#include "Controler.h"

namespace Ui {
class JanelaCadMedicamento;
}

class JanelaCadMedicamento : public QDialog
{
    Q_OBJECT

public:
    explicit JanelaCadMedicamento(QWidget *parent = nullptr, Controler *controle = nullptr);
    ~JanelaCadMedicamento();

private slots:
    void on_btnCancel_clicked();

    void on_btnOK_clicked();

private:
    Ui::JanelaCadMedicamento *ui;
    Controler *controle;
};

#endif // JANELACADMEDICAMENTO_H
