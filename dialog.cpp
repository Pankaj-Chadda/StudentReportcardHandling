#include "dialog.h"
#include "ui_dialog.h"
#include<QMessageBox>
#include<QDebug>
#include<QSqlError>
#include<QSqlQueryModel>
#include<QSqlQuery>
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    if(!connOpen())
    {
        ui->status->setText("Failed to open databse..");
    }
    else ui->status->setText("Connected to database...");

}
Dialog::~Dialog()
{
    delete ui;
    mydb.close();
}

void Dialog::on_pushButton_clicked()
{
   QString ID,Name,DS,OOPS,LD,DM,Elec,CS;
   ID=ui->txt_Id->text();
   Name=ui->txt_Name->text();
   DS=ui->txt_DS->text();
   OOPS=ui->txt_OOPS->text();
   LD=ui->txt_LD->text();
   DM=ui->txt_DM->text();
   Elec=ui->txt_Elective->text();
   CS=ui->txt_CS->text();
   connOpen();
   QSqlQuery qry;
   qry.prepare("INSERT INTO Student(StudentID,Name,DataStructuresC,OOPSCPP,LogicDesign,DiscreteMathematics,Elective,Careerskills)values('"+ID+"','"+Name+"','"+DS+"','"+OOPS+"','"+LD+"','"+DM+"','"+Elec+"','"+CS+"')");
   if(qry.exec())
   {
       QMessageBox::information(this,tr("Save"),tr("Saved"));
       connClose();
   }
   else QMessageBox::critical(this,tr("error::"),qry.lastError().text());
}


void Dialog::on_pushButton_load_tbl_clicked()
{

    QSqlQueryModel *modal=new QSqlQueryModel;
    connOpen();
    QSqlQuery *qry=new QSqlQuery(mydb);
    qry->prepare("select*from Student");
    qry->exec();
    modal->setQuery(*qry);
    ui->tableView->setModel(modal);
    connClose();
    qDebug()<<(modal->rowCount());

}

void Dialog::on_pushButton_update_clicked()
{
    QString ID,Name,DS,OOPS,LD,DM,Elec,CS;
    ID=ui->txt_Id->text();
    Name=ui->txt_Name->text();
    DS=ui->txt_DS->text();
    OOPS=ui->txt_OOPS->text();
    LD=ui->txt_LD->text();
    DM=ui->txt_DM->text();
    Elec=ui->txt_Elective->text();
    CS=ui->txt_CS->text();
    connOpen();
    QSqlQuery qry;
    qry.prepare("update Student set StudentID='"+ID+"',Name='"+Name+"',DataStructuresC='"+DS+"',OOPSCPP='"+OOPS+"',LogicDesign='"+LD+"',DiscreteMathematics='"+DM+"',Elective='"+Elec+"',Careerskills='"+CS+"' where StudentID='"+ID+"'");
    if(qry.exec())
    {
        QMessageBox::information(this,tr("Edit"),tr("Updated"));
        connClose();
    }
    else QMessageBox::critical(this,tr("error::"),qry.lastError().text());
}


void Dialog::on_pushButton_delete_clicked()
{
    QString ID;
    ID=ui->txt_Id->text();
    connOpen();
    QSqlQuery qry;
    qry.prepare("Delete from Student where StudentID='"+ID+"'");
    if(qry.exec())
    {
        QMessageBox::information(this,tr("Delete"),tr("Deleted"));
        connClose();
    }
    else QMessageBox::critical(this,tr("error::"),qry.lastError().text());
}


