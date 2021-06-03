/********************************************************************************
** Form generated from reading UI file 'JanelaCadastro.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JANELACADASTRO_H
#define UI_JANELACADASTRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_JanelaCadastro
{
public:
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *btnVoltar;

    void setupUi(QDialog *JanelaCadastro)
    {
        if (JanelaCadastro->objectName().isEmpty())
            JanelaCadastro->setObjectName(QString::fromUtf8("JanelaCadastro"));
        JanelaCadastro->resize(305, 166);
        JanelaCadastro->setStyleSheet(QString::fromUtf8("background-color: rgb(44, 44, 44);\n"
"color: rgb(255, 255, 255);"));
        verticalLayoutWidget_2 = new QWidget(JanelaCadastro);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(0, 0, 304, 161));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(verticalLayoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(300, 65));
        label->setPixmap(QPixmap(QString::fromUtf8(":/icones/icones/ms.png")));
        label->setScaledContents(true);

        verticalLayout->addWidget(label);

        comboBox = new QComboBox(verticalLayoutWidget_2);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
"	cursor: none;\n"
"}\n"
"\n"
"QPushButton::pressed {\n"
"	border-left: 2px solid rgb(30, 30, 30);\n"
"	border-right: 2px solid rgb(30, 30, 30);\n"
"	border-bottom: 3px solid rgb(30, 30, 30);\n"
"	border-top: 3px solid rgb(30, 30, 30);\n"
"}"));

        verticalLayout->addWidget(comboBox);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(verticalLayoutWidget_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(pushButton);

        btnVoltar = new QPushButton(verticalLayoutWidget_2);
        btnVoltar->setObjectName(QString::fromUtf8("btnVoltar"));
        btnVoltar->setCursor(QCursor(Qt::PointingHandCursor));
        btnVoltar->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(btnVoltar);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(JanelaCadastro);

        QMetaObject::connectSlotsByName(JanelaCadastro);
    } // setupUi

    void retranslateUi(QDialog *JanelaCadastro)
    {
        JanelaCadastro->setWindowTitle(QCoreApplication::translate("JanelaCadastro", "Dialog", nullptr));
        label->setText(QString());
        comboBox->setItemText(0, QCoreApplication::translate("JanelaCadastro", "Selecione o tipo de insumo:", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("JanelaCadastro", "Vacina", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("JanelaCadastro", "Medicamento", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("JanelaCadastro", "EPI", nullptr));

        pushButton->setText(QCoreApplication::translate("JanelaCadastro", "OK", nullptr));
        btnVoltar->setText(QCoreApplication::translate("JanelaCadastro", "Voltar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class JanelaCadastro: public Ui_JanelaCadastro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JANELACADASTRO_H
