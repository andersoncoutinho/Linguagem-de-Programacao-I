#ifndef JANELACADEPI_H
#define JANELACADEPI_H

#include <QDialog>

namespace Ui {
class JanelaCadEpi;
}

class JanelaCadEpi : public QDialog
{
    Q_OBJECT

public:
    explicit JanelaCadEpi(QWidget *parent = nullptr);
    ~JanelaCadEpi();

private:
    Ui::JanelaCadEpi *ui;
};

#endif // JANELACADEPI_H
