#ifndef JANELAPRINCIPAL_H
#define JANELAPRINCIPAL_H
#include "Controler.h"

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class JanelaPrincipal; }
QT_END_NAMESPACE

class JanelaPrincipal : public QMainWindow
{
    Q_OBJECT

public:
    JanelaPrincipal(QWidget *parent = nullptr);
    ~JanelaPrincipal();

private slots:

    void on_btnCadastrar_clicked();



    void on_btnConsultar_clicked();

private:
    Ui::JanelaPrincipal *ui;
    Controler controle;
};
#endif // JANELAPRINCIPAL_H
