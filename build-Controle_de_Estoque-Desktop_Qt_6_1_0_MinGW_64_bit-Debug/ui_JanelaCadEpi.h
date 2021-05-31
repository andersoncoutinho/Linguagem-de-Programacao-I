/********************************************************************************
** Form generated from reading UI file 'JanelaCadEpi.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JANELACADEPI_H
#define UI_JANELACADEPI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_JanelaCadEpi
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_17;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_16;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QVBoxLayout *verticalLayout_6;
    QLineEdit *textBoxNome;
    QLineEdit *textBoxQuantidade;
    QLineEdit *textBoxValor;
    QLineEdit *textBoxVencimento;
    QLineEdit *textBoxFabricante;
    QLineEdit *textBoxTipo;
    QLineEdit *textBoxDescricao;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnOK;
    QPushButton *btnCancel;

    void setupUi(QDialog *JanelaCadEpi)
    {
        if (JanelaCadEpi->objectName().isEmpty())
            JanelaCadEpi->setObjectName(QString::fromUtf8("JanelaCadEpi"));
        JanelaCadEpi->resize(353, 353);
        JanelaCadEpi->setStyleSheet(QString::fromUtf8("background-color: rgb(44, 44, 44);\n"
"color: rgb(255, 255, 255);"));
        verticalLayoutWidget = new QWidget(JanelaCadEpi);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 352, 351));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_17 = new QLabel(verticalLayoutWidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setMaximumSize(QSize(350, 75));
        label_17->setPixmap(QPixmap(QString::fromUtf8(":/icones/icones/ms.png")));
        label_17->setScaledContents(true);

        verticalLayout->addWidget(label_17);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_16 = new QLabel(verticalLayoutWidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        QFont font;
        font.setPointSize(10);
        label_16->setFont(font);

        verticalLayout_5->addWidget(label_16);

        label_18 = new QLabel(verticalLayoutWidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setFont(font);

        verticalLayout_5->addWidget(label_18);

        label_19 = new QLabel(verticalLayoutWidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setFont(font);

        verticalLayout_5->addWidget(label_19);

        label_20 = new QLabel(verticalLayoutWidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setFont(font);

        verticalLayout_5->addWidget(label_20);

        label_21 = new QLabel(verticalLayoutWidget);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setFont(font);

        verticalLayout_5->addWidget(label_21);

        label_22 = new QLabel(verticalLayoutWidget);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setFont(font);

        verticalLayout_5->addWidget(label_22);

        label_23 = new QLabel(verticalLayoutWidget);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setFont(font);

        verticalLayout_5->addWidget(label_23);


        horizontalLayout_4->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        textBoxNome = new QLineEdit(verticalLayoutWidget);
        textBoxNome->setObjectName(QString::fromUtf8("textBoxNome"));

        verticalLayout_6->addWidget(textBoxNome);

        textBoxQuantidade = new QLineEdit(verticalLayoutWidget);
        textBoxQuantidade->setObjectName(QString::fromUtf8("textBoxQuantidade"));

        verticalLayout_6->addWidget(textBoxQuantidade);

        textBoxValor = new QLineEdit(verticalLayoutWidget);
        textBoxValor->setObjectName(QString::fromUtf8("textBoxValor"));

        verticalLayout_6->addWidget(textBoxValor);

        textBoxVencimento = new QLineEdit(verticalLayoutWidget);
        textBoxVencimento->setObjectName(QString::fromUtf8("textBoxVencimento"));

        verticalLayout_6->addWidget(textBoxVencimento);

        textBoxFabricante = new QLineEdit(verticalLayoutWidget);
        textBoxFabricante->setObjectName(QString::fromUtf8("textBoxFabricante"));

        verticalLayout_6->addWidget(textBoxFabricante);

        textBoxTipo = new QLineEdit(verticalLayoutWidget);
        textBoxTipo->setObjectName(QString::fromUtf8("textBoxTipo"));

        verticalLayout_6->addWidget(textBoxTipo);

        textBoxDescricao = new QLineEdit(verticalLayoutWidget);
        textBoxDescricao->setObjectName(QString::fromUtf8("textBoxDescricao"));

        verticalLayout_6->addWidget(textBoxDescricao);


        horizontalLayout_4->addLayout(verticalLayout_6);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        btnOK = new QPushButton(verticalLayoutWidget);
        btnOK->setObjectName(QString::fromUtf8("btnOK"));
        btnOK->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_3->addWidget(btnOK);

        btnCancel = new QPushButton(verticalLayoutWidget);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        btnCancel->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_3->addWidget(btnCancel);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(JanelaCadEpi);

        QMetaObject::connectSlotsByName(JanelaCadEpi);
    } // setupUi

    void retranslateUi(QDialog *JanelaCadEpi)
    {
        JanelaCadEpi->setWindowTitle(QCoreApplication::translate("JanelaCadEpi", "Dialog", nullptr));
        label_17->setText(QString());
        label_16->setText(QCoreApplication::translate("JanelaCadEpi", "Nome:", nullptr));
        label_18->setText(QCoreApplication::translate("JanelaCadEpi", "Quantidade:", nullptr));
        label_19->setText(QCoreApplication::translate("JanelaCadEpi", "Valor Unit\303\241rio:", nullptr));
        label_20->setText(QCoreApplication::translate("JanelaCadEpi", "Vencimento:", nullptr));
        label_21->setText(QCoreApplication::translate("JanelaCadEpi", "Fabricante:", nullptr));
        label_22->setText(QCoreApplication::translate("JanelaCadEpi", "Tipo:", nullptr));
        label_23->setText(QCoreApplication::translate("JanelaCadEpi", "Descri\303\247\303\243o:", nullptr));
        btnOK->setText(QCoreApplication::translate("JanelaCadEpi", "OK", nullptr));
        btnCancel->setText(QCoreApplication::translate("JanelaCadEpi", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class JanelaCadEpi: public Ui_JanelaCadEpi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JANELACADEPI_H
