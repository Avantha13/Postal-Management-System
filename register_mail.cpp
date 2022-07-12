#include "register_mail.h"
#include "ui_register_mail.h"
#include "home_page.h"
#include "local_mail.h"
#include<QMessageBox>

register_mail::register_mail(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::register_mail)
{
    ui->setupUi(this);
    ui->image->setPixmap(QPixmap(":/img/image/logo.png"));
    ui->image->setScaledContents( true );
    ui->image->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );

}

register_mail::~register_mail()
{
    delete ui;
}

void register_mail::on_pushButton_3_clicked()
{
    home_page * hp = new home_page();
    hp -> show();
    this->hide();
}


void register_mail::on_pushButton_2_clicked()
{
    local_mail * lm = new local_mail();
    lm -> show();
    this->hide();
}


void register_mail::on_lineEdit_6_editingFinished()
{
    int v1;
    v1=ui->lineEdit_6->text().toInt();


        if(v1<=200){

        QString result = QString::number(v1*2);

        ui->lineEdit_7->setText(result);
        }

        else if( v1<=750 ){

        QString result = QString::number((200*2) +((v1-200)*3));

        ui->lineEdit_7->setText(result);
        }

        else if( v1<=1250 ){

        QString result = QString::number((200*2) + (550*3) + ((v1-750)*4));

        ui->lineEdit_7->setText(result);
        }

        else if(v1<=2000 ){

        QString result = QString::number((200*2) + (550*3 )+ (500*4) + ((v1-1250)*5));

        ui->lineEdit_7->setText(result);
        }

        else{
            ui->lineEdit_7->setText("5000");
        }
}


void register_mail::on_pushButton_clicked()
{
    QSqlDatabase sqlitedb = QSqlDatabase:: addDatabase("QSQLITE");
       sqlitedb.setDatabaseName("C:/sqlite3/database/postal_managment_system.sqlite");

       sqlitedb.open();

       QString id,sn,rn,sa,ra,cn,pr,wi;
       id= ui->lineEdit_5  ->text();
       sn= ui->lineEdit  ->text();
       rn= ui-> lineEdit_2 ->text();
       sa= ui-> lineEdit_3 ->text();
       ra= ui-> lineEdit_4->text();
       pr= ui-> lineEdit_6 ->text();
       wi= ui-> lineEdit_7 ->text();


       QSqlQuery qry;
       qry.prepare("insert into Local_Mail (ID,Sender,Receiver,S_Address,R_Address,Price,Weight ) values('"+id+"','"+sn+"','"+rn+"','"+sa+"','"+ra+"','"+pr+"','"+wi+"')");

       if(qry.exec())
       {

           QMessageBox::critical(this,tr("Save"),tr("saved"));
       }
       else{
            QMessageBox::critical(this,tr("error::"),qry.lastError().text());
       }


       ui->lineEdit  ->clear();
       ui->lineEdit_2  ->clear();
       ui->lineEdit_3  ->clear();
       ui->lineEdit_4  ->clear();
       ui->lineEdit_5 ->clear();
       ui->lineEdit_6 ->clear();
       ui->lineEdit_7 ->clear();
       ui->lineEdit_8  ->clear();
       ui->lineEdit_9  ->clear();
}


void register_mail::on_lineEdit_8_editingFinished()
{
    int v1;
    v1=ui->lineEdit_7->text().toInt();
    int v2;
    v2=ui->lineEdit_8->text().toInt();


        QString result = QString::number(v2-v1);

        ui->lineEdit_9->setText(result);
}

