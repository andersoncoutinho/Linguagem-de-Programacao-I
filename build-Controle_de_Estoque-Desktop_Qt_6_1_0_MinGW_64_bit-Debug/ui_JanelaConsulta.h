/********************************************************************************
** Form generated from reading UI file 'JanelaConsulta.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JANELACONSULTA_H
#define UI_JANELACONSULTA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_JanelaConsulta
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_9;
    QPushButton *btnVerDistribuidos_2;
    QPushButton *btnVerDistribuidos;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBox;
    QPushButton *btnFiltrar;
    QTextBrowser *textBrowser;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnDetalhes;
    QPushButton *btnVoltar;

    void setupUi(QDialog *JanelaConsulta)
    {
        if (JanelaConsulta->objectName().isEmpty())
            JanelaConsulta->setObjectName(QString::fromUtf8("JanelaConsulta"));
        JanelaConsulta->resize(353, 471);
        JanelaConsulta->setStyleSheet(QString::fromUtf8("background-color: rgb(44, 44, 44);\n"
"color: rgb(255, 255, 255);"));
        verticalLayoutWidget = new QWidget(JanelaConsulta);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 10, 352, 451));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(verticalLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMaximumSize(QSize(350, 75));
        label_9->setPixmap(QPixmap(QString::fromUtf8(":/icones/icones/ms.png")));
        label_9->setScaledContents(true);

        verticalLayout->addWidget(label_9);

        btnVerDistribuidos_2 = new QPushButton(verticalLayoutWidget);
        btnVerDistribuidos_2->setObjectName(QString::fromUtf8("btnVerDistribuidos_2"));

        verticalLayout->addWidget(btnVerDistribuidos_2);

        btnVerDistribuidos = new QPushButton(verticalLayoutWidget);
        btnVerDistribuidos->setObjectName(QString::fromUtf8("btnVerDistribuidos"));

        verticalLayout->addWidget(btnVerDistribuidos);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        comboBox = new QComboBox(verticalLayoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);

        btnFiltrar = new QPushButton(verticalLayoutWidget);
        btnFiltrar->setObjectName(QString::fromUtf8("btnFiltrar"));

        horizontalLayout->addWidget(btnFiltrar);


        verticalLayout->addLayout(horizontalLayout);

        textBrowser = new QTextBrowser(verticalLayoutWidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        verticalLayout->addWidget(textBrowser);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        btnDetalhes = new QPushButton(verticalLayoutWidget);
        btnDetalhes->setObjectName(QString::fromUtf8("btnDetalhes"));

        horizontalLayout_2->addWidget(btnDetalhes);

        btnVoltar = new QPushButton(verticalLayoutWidget);
        btnVoltar->setObjectName(QString::fromUtf8("btnVoltar"));

        horizontalLayout_2->addWidget(btnVoltar);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(JanelaConsulta);

        QMetaObject::connectSlotsByName(JanelaConsulta);
    } // setupUi

    void retranslateUi(QDialog *JanelaConsulta)
    {
        JanelaConsulta->setWindowTitle(QCoreApplication::translate("JanelaConsulta", "Dialog", nullptr));
        label_9->setText(QString());
        btnVerDistribuidos_2->setText(QCoreApplication::translate("JanelaConsulta", "Ver Insumos em Estoque", nullptr));
        btnVerDistribuidos->setText(QCoreApplication::translate("JanelaConsulta", "Ver Insumos Distribu\303\255dos", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("JanelaConsulta", "Selecione um estado:", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("JanelaConsulta", "Acre", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("JanelaConsulta", "Alagoas", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("JanelaConsulta", "Amap\303\241", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("JanelaConsulta", "Amazonas", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("JanelaConsulta", "Bahia", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("JanelaConsulta", "Cear\303\241", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("JanelaConsulta", "Distrito Federal", nullptr));
        comboBox->setItemText(8, QCoreApplication::translate("JanelaConsulta", "Esp\303\255rito Santo", nullptr));
        comboBox->setItemText(9, QCoreApplication::translate("JanelaConsulta", "Goi\303\241s", nullptr));
        comboBox->setItemText(10, QCoreApplication::translate("JanelaConsulta", "Maranh\303\243o", nullptr));
        comboBox->setItemText(11, QCoreApplication::translate("JanelaConsulta", "Mato Grosso", nullptr));
        comboBox->setItemText(12, QCoreApplication::translate("JanelaConsulta", "Mato Grosso do Sul", nullptr));
        comboBox->setItemText(13, QCoreApplication::translate("JanelaConsulta", "Minas Gerais", nullptr));
        comboBox->setItemText(14, QCoreApplication::translate("JanelaConsulta", "Par\303\241", nullptr));
        comboBox->setItemText(15, QCoreApplication::translate("JanelaConsulta", "Para\303\255ba", nullptr));
        comboBox->setItemText(16, QCoreApplication::translate("JanelaConsulta", "Paran\303\241", nullptr));
        comboBox->setItemText(17, QCoreApplication::translate("JanelaConsulta", "Pernambuco", nullptr));
        comboBox->setItemText(18, QCoreApplication::translate("JanelaConsulta", "Piau\303\255", nullptr));
        comboBox->setItemText(19, QCoreApplication::translate("JanelaConsulta", "Rio de Janeiro", nullptr));
        comboBox->setItemText(20, QCoreApplication::translate("JanelaConsulta", "Rio Grande do Norte", nullptr));
        comboBox->setItemText(21, QCoreApplication::translate("JanelaConsulta", "Rio Grande do Sul", nullptr));
        comboBox->setItemText(22, QCoreApplication::translate("JanelaConsulta", "Roraima", nullptr));
        comboBox->setItemText(23, QCoreApplication::translate("JanelaConsulta", "Rond\303\264nia", nullptr));
        comboBox->setItemText(24, QCoreApplication::translate("JanelaConsulta", "Santa Catarina", nullptr));
        comboBox->setItemText(25, QCoreApplication::translate("JanelaConsulta", "S\303\243o Paulo", nullptr));
        comboBox->setItemText(26, QCoreApplication::translate("JanelaConsulta", "Sergipe", nullptr));
        comboBox->setItemText(27, QCoreApplication::translate("JanelaConsulta", "Tocantins", nullptr));

        btnFiltrar->setText(QCoreApplication::translate("JanelaConsulta", "Filtrar", nullptr));
        btnDetalhes->setText(QCoreApplication::translate("JanelaConsulta", "Mostrar Detalhes", nullptr));
        btnVoltar->setText(QCoreApplication::translate("JanelaConsulta", "Voltar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class JanelaConsulta: public Ui_JanelaConsulta {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JANELACONSULTA_H
