/********************************************************************************
** Form generated from reading UI file 'JanelaPrincipal.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JANELAPRINCIPAL_H
#define UI_JANELAPRINCIPAL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_JanelaPrincipal
{
public:
    QAction *actionSalvar;
    QAction *actionSair;
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *_2;
    QPushButton *btnCadastrar;
    QPushButton *btnConsultar;
    QPushButton *btnDistribuir;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menuOp_es;

    void setupUi(QMainWindow *JanelaPrincipal)
    {
        if (JanelaPrincipal->objectName().isEmpty())
            JanelaPrincipal->setObjectName(QString::fromUtf8("JanelaPrincipal"));
        JanelaPrincipal->setEnabled(true);
        JanelaPrincipal->resize(281, 308);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(JanelaPrincipal->sizePolicy().hasHeightForWidth());
        JanelaPrincipal->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icones/icones/brasil.png"), QSize(), QIcon::Normal, QIcon::Off);
        JanelaPrincipal->setWindowIcon(icon);
        JanelaPrincipal->setAutoFillBackground(false);
        JanelaPrincipal->setStyleSheet(QString::fromUtf8("background-color: rgb(44, 44, 44);\n"
"color: rgb(255, 255, 255);\n"
"\n"
""));
        JanelaPrincipal->setAnimated(false);
        actionSalvar = new QAction(JanelaPrincipal);
        actionSalvar->setObjectName(QString::fromUtf8("actionSalvar"));
        actionSair = new QAction(JanelaPrincipal);
        actionSair->setObjectName(QString::fromUtf8("actionSair"));
        centralwidget = new QWidget(JanelaPrincipal);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setEnabled(true);
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(50, 50, 181, 231));
        _2 = new QVBoxLayout(verticalLayoutWidget);
        _2->setObjectName(QString::fromUtf8("_2"));
        _2->setContentsMargins(0, 0, 0, 0);
        btnCadastrar = new QPushButton(verticalLayoutWidget);
        btnCadastrar->setObjectName(QString::fromUtf8("btnCadastrar"));
        QFont font;
        font.setPointSize(10);
        btnCadastrar->setFont(font);
        btnCadastrar->setCursor(QCursor(Qt::PointingHandCursor));
        btnCadastrar->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(80, 80, 80);\n"
"	border-width: 4px;\n"
"	border-radius: 10px;\n"
"	padding: 10 px 10px 10px 10px;\n"
"	border-left: 3px solid rgb(30, 30, 30);\n"
"	border-right: 1px solid rgb(30, 30, 30);\n"
"	border-bottom: 4px solid rgb(30, 30, 30);\n"
"	border-top: 1px solid rgb(30, 30, 30);\n"
"}\n"
"\n"
"QPushButton::hover {\n"
"	background-color: rgb(100, 100, 100);\n"
"}\n"
"\n"
"QPushButton::pressed {\n"
"	border-left: 2px solid rgb(30, 30, 30);\n"
"	border-right: 2px solid rgb(30, 30, 30);\n"
"	border-bottom: 3px solid rgb(30, 30, 30);\n"
"	border-top: 3px solid rgb(30, 30, 30);\n"
"}\n"
"\n"
""));

        _2->addWidget(btnCadastrar);

        btnConsultar = new QPushButton(verticalLayoutWidget);
        btnConsultar->setObjectName(QString::fromUtf8("btnConsultar"));
        btnConsultar->setFont(font);
        btnConsultar->setCursor(QCursor(Qt::PointingHandCursor));
        btnConsultar->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(80, 80, 80);\n"
"	border-width: 4px;\n"
"	border-radius: 10px;\n"
"	padding: 10 px 10px 10px 10px;\n"
"	border-left: 3px solid rgb(30, 30, 30);\n"
"	border-right: 1px solid rgb(30, 30, 30);\n"
"	border-bottom: 4px solid rgb(30, 30, 30);\n"
"	border-top: 1px solid rgb(30, 30, 30);\n"
"}\n"
"\n"
"QPushButton::hover {\n"
"	background-color: rgb(100, 100, 100);\n"
"}\n"
"\n"
"QPushButton::pressed {\n"
"	border-left: 2px solid rgb(30, 30, 30);\n"
"	border-right: 2px solid rgb(30, 30, 30);\n"
"	border-bottom: 3px solid rgb(30, 30, 30);\n"
"	border-top: 3px solid rgb(30, 30, 30);\n"
"}\n"
"\n"
""));

        _2->addWidget(btnConsultar);

        btnDistribuir = new QPushButton(verticalLayoutWidget);
        btnDistribuir->setObjectName(QString::fromUtf8("btnDistribuir"));
        btnDistribuir->setFont(font);
        btnDistribuir->setCursor(QCursor(Qt::PointingHandCursor));
        btnDistribuir->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(80, 80, 80);\n"
"	border-width: 4px;\n"
"	border-radius: 10px;\n"
"	padding: 10 px 10px 10px 10px;\n"
"	border-left: 3px solid rgb(30, 30, 30);\n"
"	border-right: 1px solid rgb(30, 30, 30);\n"
"	border-bottom: 4px solid rgb(30, 30, 30);\n"
"	border-top: 1px solid rgb(30, 30, 30);\n"
"}\n"
"\n"
"QPushButton::hover {\n"
"	background-color: rgb(100, 100, 100);\n"
"}\n"
"\n"
"QPushButton::pressed {\n"
"	border-left: 2px solid rgb(30, 30, 30);\n"
"	border-right: 2px solid rgb(30, 30, 30);\n"
"	border-bottom: 3px solid rgb(30, 30, 30);\n"
"	border-top: 3px solid rgb(30, 30, 30);\n"
"}\n"
"\n"
""));

        _2->addWidget(btnDistribuir);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 281, 61));
        label->setPixmap(QPixmap(QString::fromUtf8(":/icones/icones/ms.png")));
        label->setScaledContents(true);
        JanelaPrincipal->setCentralWidget(centralwidget);
        menubar = new QMenuBar(JanelaPrincipal);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 281, 25));
        menubar->setTabletTracking(false);
        menubar->setFocusPolicy(Qt::NoFocus);
        menubar->setStyleSheet(QString::fromUtf8("QMenuBar{\n"
"	background-color: rgb(0, 0, 0);\n"
"}\n"
"QMenuBar::item:selected {\n"
"	background-color: rgb(0, 0, 255);\n"
"}"));
        menuOp_es = new QMenu(menubar);
        menuOp_es->setObjectName(QString::fromUtf8("menuOp_es"));
        menuOp_es->setMouseTracking(true);
        menuOp_es->setStyleSheet(QString::fromUtf8("QMenu::item:selected {\n"
"	background-color: rgb(0, 0, 255);\n"
"}"));
        JanelaPrincipal->setMenuBar(menubar);

        menubar->addAction(menuOp_es->menuAction());
        menuOp_es->addAction(actionSalvar);
        menuOp_es->addAction(actionSair);

        retranslateUi(JanelaPrincipal);

        QMetaObject::connectSlotsByName(JanelaPrincipal);
    } // setupUi

    void retranslateUi(QMainWindow *JanelaPrincipal)
    {
        JanelaPrincipal->setWindowTitle(QCoreApplication::translate("JanelaPrincipal", "Controle de Estoque", nullptr));
        actionSalvar->setText(QCoreApplication::translate("JanelaPrincipal", "Salvar", nullptr));
#if QT_CONFIG(shortcut)
        actionSalvar->setShortcut(QCoreApplication::translate("JanelaPrincipal", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSair->setText(QCoreApplication::translate("JanelaPrincipal", "Sair", nullptr));
#if QT_CONFIG(shortcut)
        actionSair->setShortcut(QCoreApplication::translate("JanelaPrincipal", "Ctrl+W", nullptr));
#endif // QT_CONFIG(shortcut)
        btnCadastrar->setText(QCoreApplication::translate("JanelaPrincipal", "Cadastrar Insumo", nullptr));
        btnConsultar->setText(QCoreApplication::translate("JanelaPrincipal", "Consultar Insumos", nullptr));
        btnDistribuir->setText(QCoreApplication::translate("JanelaPrincipal", "Distribuir Insumos", nullptr));
        label->setText(QString());
        menuOp_es->setTitle(QCoreApplication::translate("JanelaPrincipal", "Op\303\247\303\265es", nullptr));
    } // retranslateUi

};

namespace Ui {
    class JanelaPrincipal: public Ui_JanelaPrincipal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JANELAPRINCIPAL_H
