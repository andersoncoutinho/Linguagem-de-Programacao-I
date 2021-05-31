/********************************************************************************
** Form generated from reading UI file 'JanelaCadVacina.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JANELACADVACINA_H
#define UI_JANELACADVACINA_H

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

class Ui_JanelaCadVacina
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *textBoxNome;
    QLineEdit *textBoxQuant;
    QLineEdit *textBovValor;
    QLineEdit *textBoxVencimento;
    QLineEdit *textBoxFabricante;
    QLineEdit *textBoxTecnologia;
    QLineEdit *textBoxDoses;
    QLineEdit *textBoxInterv;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *btnCancel;

    void setupUi(QDialog *JanelaCadVacina)
    {
        if (JanelaCadVacina->objectName().isEmpty())
            JanelaCadVacina->setObjectName(QString::fromUtf8("JanelaCadVacina"));
        JanelaCadVacina->resize(355, 376);
        JanelaCadVacina->setStyleSheet(QString::fromUtf8("background-color: rgb(44, 44, 44);\n"
"color: rgb(255, 255, 255);"));
        verticalLayoutWidget = new QWidget(JanelaCadVacina);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 352, 371));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(verticalLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMaximumSize(QSize(350, 75));
        label_9->setPixmap(QPixmap(QString::fromUtf8(":/icones/icones/ms.png")));
        label_9->setScaledContents(true);

        verticalLayout->addWidget(label_9);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);

        verticalLayout_3->addWidget(label);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        verticalLayout_3->addWidget(label_2);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        verticalLayout_3->addWidget(label_3);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        verticalLayout_3->addWidget(label_4);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        verticalLayout_3->addWidget(label_5);

        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        verticalLayout_3->addWidget(label_6);

        label_7 = new QLabel(verticalLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        verticalLayout_3->addWidget(label_7);

        label_8 = new QLabel(verticalLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);

        verticalLayout_3->addWidget(label_8);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        textBoxNome = new QLineEdit(verticalLayoutWidget);
        textBoxNome->setObjectName(QString::fromUtf8("textBoxNome"));

        verticalLayout_4->addWidget(textBoxNome);

        textBoxQuant = new QLineEdit(verticalLayoutWidget);
        textBoxQuant->setObjectName(QString::fromUtf8("textBoxQuant"));

        verticalLayout_4->addWidget(textBoxQuant);

        textBovValor = new QLineEdit(verticalLayoutWidget);
        textBovValor->setObjectName(QString::fromUtf8("textBovValor"));

        verticalLayout_4->addWidget(textBovValor);

        textBoxVencimento = new QLineEdit(verticalLayoutWidget);
        textBoxVencimento->setObjectName(QString::fromUtf8("textBoxVencimento"));

        verticalLayout_4->addWidget(textBoxVencimento);

        textBoxFabricante = new QLineEdit(verticalLayoutWidget);
        textBoxFabricante->setObjectName(QString::fromUtf8("textBoxFabricante"));

        verticalLayout_4->addWidget(textBoxFabricante);

        textBoxTecnologia = new QLineEdit(verticalLayoutWidget);
        textBoxTecnologia->setObjectName(QString::fromUtf8("textBoxTecnologia"));

        verticalLayout_4->addWidget(textBoxTecnologia);

        textBoxDoses = new QLineEdit(verticalLayoutWidget);
        textBoxDoses->setObjectName(QString::fromUtf8("textBoxDoses"));

        verticalLayout_4->addWidget(textBoxDoses);

        textBoxInterv = new QLineEdit(verticalLayoutWidget);
        textBoxInterv->setObjectName(QString::fromUtf8("textBoxInterv"));

        verticalLayout_4->addWidget(textBoxInterv);


        horizontalLayout->addLayout(verticalLayout_4);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_2->addWidget(pushButton);

        btnCancel = new QPushButton(verticalLayoutWidget);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        btnCancel->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_2->addWidget(btnCancel);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(JanelaCadVacina);

        QMetaObject::connectSlotsByName(JanelaCadVacina);
    } // setupUi

    void retranslateUi(QDialog *JanelaCadVacina)
    {
        JanelaCadVacina->setWindowTitle(QCoreApplication::translate("JanelaCadVacina", "Dialog", nullptr));
        label_9->setText(QString());
        label->setText(QCoreApplication::translate("JanelaCadVacina", "Nome:", nullptr));
        label_2->setText(QCoreApplication::translate("JanelaCadVacina", "Quantidade:", nullptr));
        label_3->setText(QCoreApplication::translate("JanelaCadVacina", "Valor Unit\303\241rio:", nullptr));
        label_4->setText(QCoreApplication::translate("JanelaCadVacina", "Vencimento:", nullptr));
        label_5->setText(QCoreApplication::translate("JanelaCadVacina", "Fabricante:", nullptr));
        label_6->setText(QCoreApplication::translate("JanelaCadVacina", "Tecnologia:", nullptr));
        label_7->setText(QCoreApplication::translate("JanelaCadVacina", "Doses necess\303\241rias:", nullptr));
        label_8->setText(QCoreApplication::translate("JanelaCadVacina", "Intervalo de dias:", nullptr));
        pushButton->setText(QCoreApplication::translate("JanelaCadVacina", "OK", nullptr));
        btnCancel->setText(QCoreApplication::translate("JanelaCadVacina", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class JanelaCadVacina: public Ui_JanelaCadVacina {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JANELACADVACINA_H
