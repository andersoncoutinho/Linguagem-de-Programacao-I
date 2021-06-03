#ifndef JANELACADVACINA_H
#define JANELACADVACINA_H

#include <QDialog>
#include "Controler.h"

namespace Ui {
class JanelaCadVacina;
}

class JanelaCadVacina : public QDialog
{
    Q_OBJECT

public:
    explicit JanelaCadVacina(QWidget *parent = nullptr, Controler *controle = nullptr);
    ~JanelaCadVacina();

private slots:
    void on_pushButton_clicked();


    void on_btnCancel_clicked();

private:
    Ui::JanelaCadVacina *ui;
    Controler *controle;
};

#endif // JANELACADVACINA_H
