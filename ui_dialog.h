/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QPushButton *pushButton;
    QLabel *status;
    QTableView *tableView;
    QPushButton *pushButton_load_tbl;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *txt_Id;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *txt_Name;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *DS;
    QLineEdit *txt_DS;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *OOPS;
    QLineEdit *txt_OOPS;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *LD;
    QLineEdit *txt_LD;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayout_6;
    QLabel *DM;
    QLineEdit *txt_DM;
    QWidget *layoutWidget7;
    QHBoxLayout *horizontalLayout_7;
    QLabel *Elective;
    QLineEdit *txt_Elective;
    QWidget *layoutWidget8;
    QHBoxLayout *horizontalLayout_8;
    QLabel *CS;
    QLineEdit *txt_CS;
    QPushButton *pushButton_update;
    QPushButton *pushButton_delete;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(838, 405);
        Dialog->setStyleSheet(QString::fromUtf8("background-color: rgb(70, 255, 76);"));
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(0, 310, 121, 24));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);"));
        status = new QLabel(Dialog);
        status->setObjectName(QString::fromUtf8("status"));
        status->setGeometry(QRect(20, 360, 231, 16));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe Script")});
        font1.setPointSize(10);
        font1.setBold(true);
        status->setFont(font1);
        tableView = new QTableView(Dialog);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(255, 10, 571, 261));
        tableView->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 255, 241);"));
        tableView->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tableView->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        pushButton_load_tbl = new QPushButton(Dialog);
        pushButton_load_tbl->setObjectName(QString::fromUtf8("pushButton_load_tbl"));
        pushButton_load_tbl->setGeometry(QRect(450, 280, 171, 24));
        pushButton_load_tbl->setFont(font);
        pushButton_load_tbl->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 85, 255);"));
        layoutWidget1 = new QWidget(Dialog);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 50, 241, 24));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        horizontalLayout->addWidget(label);

        txt_Id = new QLineEdit(layoutWidget1);
        txt_Id->setObjectName(QString::fromUtf8("txt_Id"));

        horizontalLayout->addWidget(txt_Id);

        layoutWidget2 = new QWidget(Dialog);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 80, 241, 24));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        txt_Name = new QLineEdit(layoutWidget2);
        txt_Name->setObjectName(QString::fromUtf8("txt_Name"));

        horizontalLayout_2->addWidget(txt_Name);

        layoutWidget3 = new QWidget(Dialog);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 110, 242, 24));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        DS = new QLabel(layoutWidget3);
        DS->setObjectName(QString::fromUtf8("DS"));
        DS->setFont(font);

        horizontalLayout_3->addWidget(DS);

        txt_DS = new QLineEdit(layoutWidget3);
        txt_DS->setObjectName(QString::fromUtf8("txt_DS"));

        horizontalLayout_3->addWidget(txt_DS);

        layoutWidget4 = new QWidget(Dialog);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(10, 140, 241, 24));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        OOPS = new QLabel(layoutWidget4);
        OOPS->setObjectName(QString::fromUtf8("OOPS"));
        QFont font2;
        font2.setBold(true);
        OOPS->setFont(font2);

        horizontalLayout_4->addWidget(OOPS);

        txt_OOPS = new QLineEdit(layoutWidget4);
        txt_OOPS->setObjectName(QString::fromUtf8("txt_OOPS"));

        horizontalLayout_4->addWidget(txt_OOPS);

        layoutWidget5 = new QWidget(Dialog);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(10, 170, 241, 26));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        LD = new QLabel(layoutWidget5);
        LD->setObjectName(QString::fromUtf8("LD"));
        LD->setFont(font2);

        horizontalLayout_5->addWidget(LD);

        txt_LD = new QLineEdit(layoutWidget5);
        txt_LD->setObjectName(QString::fromUtf8("txt_LD"));

        horizontalLayout_5->addWidget(txt_LD);

        layoutWidget6 = new QWidget(Dialog);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(10, 210, 241, 24));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        DM = new QLabel(layoutWidget6);
        DM->setObjectName(QString::fromUtf8("DM"));
        DM->setFont(font2);

        horizontalLayout_6->addWidget(DM);

        txt_DM = new QLineEdit(layoutWidget6);
        txt_DM->setObjectName(QString::fromUtf8("txt_DM"));

        horizontalLayout_6->addWidget(txt_DM);

        layoutWidget7 = new QWidget(Dialog);
        layoutWidget7->setObjectName(QString::fromUtf8("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(10, 240, 241, 24));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget7);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        Elective = new QLabel(layoutWidget7);
        Elective->setObjectName(QString::fromUtf8("Elective"));
        Elective->setFont(font2);

        horizontalLayout_7->addWidget(Elective);

        txt_Elective = new QLineEdit(layoutWidget7);
        txt_Elective->setObjectName(QString::fromUtf8("txt_Elective"));

        horizontalLayout_7->addWidget(txt_Elective);

        layoutWidget8 = new QWidget(Dialog);
        layoutWidget8->setObjectName(QString::fromUtf8("layoutWidget8"));
        layoutWidget8->setGeometry(QRect(10, 270, 209, 24));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget8);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        CS = new QLabel(layoutWidget8);
        CS->setObjectName(QString::fromUtf8("CS"));
        CS->setFont(font2);

        horizontalLayout_8->addWidget(CS);

        txt_CS = new QLineEdit(layoutWidget8);
        txt_CS->setObjectName(QString::fromUtf8("txt_CS"));

        horizontalLayout_8->addWidget(txt_CS);

        pushButton_update = new QPushButton(Dialog);
        pushButton_update->setObjectName(QString::fromUtf8("pushButton_update"));
        pushButton_update->setGeometry(QRect(120, 310, 121, 24));
        pushButton_update->setFont(font);
        pushButton_update->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);"));
        pushButton_delete = new QPushButton(Dialog);
        pushButton_delete->setObjectName(QString::fromUtf8("pushButton_delete"));
        pushButton_delete->setGeometry(QRect(240, 310, 121, 24));
        pushButton_delete->setFont(font);
        pushButton_delete->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 34, 34);"));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Record", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog", "SAVE RECORD", nullptr));
        status->setText(QCoreApplication::translate("Dialog", "status ", nullptr));
        pushButton_load_tbl->setText(QCoreApplication::translate("Dialog", "Load Table/Refreshdata", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "StudentID:", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "Name:", nullptr));
        DS->setText(QCoreApplication::translate("Dialog", "DataStructuresC", nullptr));
        OOPS->setText(QCoreApplication::translate("Dialog", "OOPSCPP", nullptr));
        LD->setText(QCoreApplication::translate("Dialog", "Logic Design", nullptr));
        DM->setText(QCoreApplication::translate("Dialog", "DiscreteMathematics", nullptr));
        Elective->setText(QCoreApplication::translate("Dialog", "Elective", nullptr));
        CS->setText(QCoreApplication::translate("Dialog", " Careerskills  ", nullptr));
        pushButton_update->setText(QCoreApplication::translate("Dialog", "UPDATE RECORD", nullptr));
        pushButton_delete->setText(QCoreApplication::translate("Dialog", "DELETE RECORD", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
