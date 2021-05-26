#ifndef JANELATESTE_H
#define JANELATESTE_H

#include <QDialog>
#include "janelaCadVacina.h"

namespace Ui {
class janelateste;
}

class janelateste : public QDialog, public Ui::JanelaCadVacina
{
    Q_OBJECT

public:
    explicit janelateste(QWidget *parent = nullptr);
    ~janelateste();

private:
    Ui::janelateste *ui;
};

#endif // JANELATESTE_H
