/********************************************************************************
** Form generated from reading UI file 'JanelaDistribuir.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JANELADISTRIBUIR_H
#define UI_JANELADISTRIBUIR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_JanelaDistribuir
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_9;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QLabel *label;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *textFieldInsumo;
    QLineEdit *textFieldQtd;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnDistribuir;
    QPushButton *btnVoltar;

    void setupUi(QDialog *JanelaDistribuir)
    {
        if (JanelaDistribuir->objectName().isEmpty())
            JanelaDistribuir->setObjectName(QString::fromUtf8("JanelaDistribuir"));
        JanelaDistribuir->resize(353, 224);
        JanelaDistribuir->setStyleSheet(QString::fromUtf8("background-color: rgb(44, 44, 44);\n"
"color: rgb(255, 255, 255);"));
        verticalLayoutWidget = new QWidget(JanelaDistribuir);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 352, 221));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(verticalLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMaximumSize(QSize(350, 75));
        label_9->setPixmap(QPixmap(QString::fromUtf8(":/icones/icones/ms.png")));
        label_9->setScaledContents(true);

        verticalLayout->addWidget(label_9);

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

        verticalLayout->addWidget(comboBox);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_3->addWidget(label_2);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_3->addWidget(label);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        textFieldInsumo = new QLineEdit(verticalLayoutWidget);
        textFieldInsumo->setObjectName(QString::fromUtf8("textFieldInsumo"));

        verticalLayout_2->addWidget(textFieldInsumo);

        textFieldQtd = new QLineEdit(verticalLayoutWidget);
        textFieldQtd->setObjectName(QString::fromUtf8("textFieldQtd"));
        textFieldQtd->setLayoutDirection(Qt::RightToLeft);

        verticalLayout_2->addWidget(textFieldQtd);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnDistribuir = new QPushButton(verticalLayoutWidget);
        btnDistribuir->setObjectName(QString::fromUtf8("btnDistribuir"));
        btnDistribuir->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(btnDistribuir);

        btnVoltar = new QPushButton(verticalLayoutWidget);
        btnVoltar->setObjectName(QString::fromUtf8("btnVoltar"));
        btnVoltar->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(btnVoltar);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(JanelaDistribuir);

        QMetaObject::connectSlotsByName(JanelaDistribuir);
    } // setupUi

    void retranslateUi(QDialog *JanelaDistribuir)
    {
        JanelaDistribuir->setWindowTitle(QCoreApplication::translate("JanelaDistribuir", "Dialog", nullptr));
        label_9->setText(QString());
        comboBox->setItemText(0, QCoreApplication::translate("JanelaDistribuir", "Selecione um estado:", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("JanelaDistribuir", "Acre", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("JanelaDistribuir", "Alagoas", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("JanelaDistribuir", "Amap\303\241", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("JanelaDistribuir", "Amazonas", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("JanelaDistribuir", "Bahia", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("JanelaDistribuir", "Cear\303\241", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("JanelaDistribuir", "Distrito Federal", nullptr));
        comboBox->setItemText(8, QCoreApplication::translate("JanelaDistribuir", "Esp\303\255rito Santo", nullptr));
        comboBox->setItemText(9, QCoreApplication::translate("JanelaDistribuir", "Goi\303\241s", nullptr));
        comboBox->setItemText(10, QCoreApplication::translate("JanelaDistribuir", "Maranh\303\243o", nullptr));
        comboBox->setItemText(11, QCoreApplication::translate("JanelaDistribuir", "Mato Grosso", nullptr));
        comboBox->setItemText(12, QCoreApplication::translate("JanelaDistribuir", "Mato Grosso do Sul", nullptr));
        comboBox->setItemText(13, QCoreApplication::translate("JanelaDistribuir", "Minas Gerais", nullptr));
        comboBox->setItemText(14, QCoreApplication::translate("JanelaDistribuir", "Par\303\241", nullptr));
        comboBox->setItemText(15, QCoreApplication::translate("JanelaDistribuir", "Para\303\255ba", nullptr));
        comboBox->setItemText(16, QCoreApplication::translate("JanelaDistribuir", "Paran\303\241", nullptr));
        comboBox->setItemText(17, QCoreApplication::translate("JanelaDistribuir", "Pernambuco", nullptr));
        comboBox->setItemText(18, QCoreApplication::translate("JanelaDistribuir", "Piau\303\255", nullptr));
        comboBox->setItemText(19, QCoreApplication::translate("JanelaDistribuir", "Rio de Janeiro", nullptr));
        comboBox->setItemText(20, QCoreApplication::translate("JanelaDistribuir", "Rio Grande do Norte", nullptr));
        comboBox->setItemText(21, QCoreApplication::translate("JanelaDistribuir", "Rio Grande do Sul", nullptr));
        comboBox->setItemText(22, QCoreApplication::translate("JanelaDistribuir", "Roraima", nullptr));
        comboBox->setItemText(23, QCoreApplication::translate("JanelaDistribuir", "Rond\303\264nia", nullptr));
        comboBox->setItemText(24, QCoreApplication::translate("JanelaDistribuir", "Santa Catarina", nullptr));
        comboBox->setItemText(25, QCoreApplication::translate("JanelaDistribuir", "S\303\243o Paulo", nullptr));
        comboBox->setItemText(26, QCoreApplication::translate("JanelaDistribuir", "Sergipe", nullptr));
        comboBox->setItemText(27, QCoreApplication::translate("JanelaDistribuir", "Tocantins", nullptr));

        label_2->setText(QCoreApplication::translate("JanelaDistribuir", "Insumo:", nullptr));
        label->setText(QCoreApplication::translate("JanelaDistribuir", "Quantidade:", nullptr));
        btnDistribuir->setText(QCoreApplication::translate("JanelaDistribuir", "Distribuir", nullptr));
        btnVoltar->setText(QCoreApplication::translate("JanelaDistribuir", "Voltar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class JanelaDistribuir: public Ui_JanelaDistribuir {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JANELADISTRIBUIR_H
