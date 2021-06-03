/********************************************************************************
** Form generated from reading UI file 'JanelaCadMedicamento.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JANELACADMEDICAMENTO_H
#define UI_JANELACADMEDICAMENTO_H

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

class Ui_JanelaCadMedicamento
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_17;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QVBoxLayout *verticalLayout_6;
    QLineEdit *textBoxNome;
    QLineEdit *textBoxQuant;
    QLineEdit *textBoxValor;
    QLineEdit *textBoxVencimento;
    QLineEdit *textBoxFabricante;
    QLineEdit *textBoxDosagem;
    QLineEdit *textBoxAdm;
    QLineEdit *textBoxDispon;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnOK;
    QPushButton *btnCancel;

    void setupUi(QDialog *JanelaCadMedicamento)
    {
        if (JanelaCadMedicamento->objectName().isEmpty())
            JanelaCadMedicamento->setObjectName(QString::fromUtf8("JanelaCadMedicamento"));
        JanelaCadMedicamento->resize(353, 384);
        JanelaCadMedicamento->setStyleSheet(QString::fromUtf8("background-color: rgb(44, 44, 44);\n"
"color: rgb(255, 255, 255);"));
        verticalLayoutWidget = new QWidget(JanelaCadMedicamento);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 352, 381));
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
        label_9 = new QLabel(verticalLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        QFont font;
        font.setPointSize(10);
        label_9->setFont(font);

        verticalLayout_5->addWidget(label_9);

        label_10 = new QLabel(verticalLayoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font);

        verticalLayout_5->addWidget(label_10);

        label_11 = new QLabel(verticalLayoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font);

        verticalLayout_5->addWidget(label_11);

        label_12 = new QLabel(verticalLayoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font);

        verticalLayout_5->addWidget(label_12);

        label_13 = new QLabel(verticalLayoutWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font);

        verticalLayout_5->addWidget(label_13);

        label_14 = new QLabel(verticalLayoutWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font);

        verticalLayout_5->addWidget(label_14);

        label_15 = new QLabel(verticalLayoutWidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setFont(font);

        verticalLayout_5->addWidget(label_15);

        label_16 = new QLabel(verticalLayoutWidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setFont(font);

        verticalLayout_5->addWidget(label_16);


        horizontalLayout_4->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        textBoxNome = new QLineEdit(verticalLayoutWidget);
        textBoxNome->setObjectName(QString::fromUtf8("textBoxNome"));

        verticalLayout_6->addWidget(textBoxNome);

        textBoxQuant = new QLineEdit(verticalLayoutWidget);
        textBoxQuant->setObjectName(QString::fromUtf8("textBoxQuant"));

        verticalLayout_6->addWidget(textBoxQuant);

        textBoxValor = new QLineEdit(verticalLayoutWidget);
        textBoxValor->setObjectName(QString::fromUtf8("textBoxValor"));

        verticalLayout_6->addWidget(textBoxValor);

        textBoxVencimento = new QLineEdit(verticalLayoutWidget);
        textBoxVencimento->setObjectName(QString::fromUtf8("textBoxVencimento"));

        verticalLayout_6->addWidget(textBoxVencimento);

        textBoxFabricante = new QLineEdit(verticalLayoutWidget);
        textBoxFabricante->setObjectName(QString::fromUtf8("textBoxFabricante"));

        verticalLayout_6->addWidget(textBoxFabricante);

        textBoxDosagem = new QLineEdit(verticalLayoutWidget);
        textBoxDosagem->setObjectName(QString::fromUtf8("textBoxDosagem"));

        verticalLayout_6->addWidget(textBoxDosagem);

        textBoxAdm = new QLineEdit(verticalLayoutWidget);
        textBoxAdm->setObjectName(QString::fromUtf8("textBoxAdm"));

        verticalLayout_6->addWidget(textBoxAdm);

        textBoxDispon = new QLineEdit(verticalLayoutWidget);
        textBoxDispon->setObjectName(QString::fromUtf8("textBoxDispon"));

        verticalLayout_6->addWidget(textBoxDispon);


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


        retranslateUi(JanelaCadMedicamento);

        QMetaObject::connectSlotsByName(JanelaCadMedicamento);
    } // setupUi

    void retranslateUi(QDialog *JanelaCadMedicamento)
    {
        JanelaCadMedicamento->setWindowTitle(QCoreApplication::translate("JanelaCadMedicamento", "Dialog", nullptr));
        label_17->setText(QString());
        label_9->setText(QCoreApplication::translate("JanelaCadMedicamento", "Nome:", nullptr));
        label_10->setText(QCoreApplication::translate("JanelaCadMedicamento", "Quantidade:", nullptr));
        label_11->setText(QCoreApplication::translate("JanelaCadMedicamento", "Valor Unit\303\241rio:", nullptr));
        label_12->setText(QCoreApplication::translate("JanelaCadMedicamento", "Vencimento:", nullptr));
        label_13->setText(QCoreApplication::translate("JanelaCadMedicamento", "Fabricante:", nullptr));
        label_14->setText(QCoreApplication::translate("JanelaCadMedicamento", "Dosagem:", nullptr));
        label_15->setText(QCoreApplication::translate("JanelaCadMedicamento", "Administra\303\247\303\243o", nullptr));
        label_16->setText(QCoreApplication::translate("JanelaCadMedicamento", "Disponibiliza\303\247\303\243o", nullptr));
        btnOK->setText(QCoreApplication::translate("JanelaCadMedicamento", "OK", nullptr));
        btnCancel->setText(QCoreApplication::translate("JanelaCadMedicamento", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class JanelaCadMedicamento: public Ui_JanelaCadMedicamento {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JANELACADMEDICAMENTO_H
