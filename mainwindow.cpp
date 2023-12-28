#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{   hide();
   secdialog =new Dialog(this);
   secdialog->show();
}


void MainWindow::on_pushButton_instruc_clicked()
{
    QMessageBox::information(this,tr("HELP"),tr("1.To delete the record enter StudentID only.\nAfter saving,updating or deleting the record refresh the data to see the changes.\n3.Student ID is unique,do not try to enter different records with same StudentID."));
}

