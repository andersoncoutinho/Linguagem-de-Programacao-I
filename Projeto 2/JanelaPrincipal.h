#ifndef JANELAPRINCIPAL_H
#define JANELAPRINCIPAL_H
#include "Controler.h"

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class JanelaPrincipal; }
QT_END_NAMESPACE

class JanelaPrincipal : public QMainWindow {
    Q_OBJECT

public:
    JanelaPrincipal(QWidget *parent = nullptr);
    ~JanelaPrincipal();

private slots:

    void on_btnCadastrar_clicked();

    void on_btnConsultar_clicked();

    void on_btnDistribuir_clicked();

    void on_actionSair_triggered();

    void on_actionSalvar_triggered();

    void on_actionSalvar_hovered();

private:
    Ui::JanelaPrincipal *ui;
    Controler controle;
    QIcon disquete;
    QIcon sair;
    QIcon vacina;
    QIcon lupa;
    QIcon ambulancia;
    QIcon insumos;
};
#endif // JANELAPRINCIPAL_H
