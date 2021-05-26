#ifndef JANELACADMEDICAMENTO_H
#define JANELACADMEDICAMENTO_H

#include <QDialog>

namespace Ui {
class JanelaCadMedicamento;
}

class JanelaCadMedicamento : public QDialog
{
    Q_OBJECT

public:
    explicit JanelaCadMedicamento(QWidget *parent = nullptr);
    ~JanelaCadMedicamento();

private:
    Ui::JanelaCadMedicamento *ui;
};

#endif // JANELACADMEDICAMENTO_H
