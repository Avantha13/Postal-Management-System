#include "sea_mail.h"
#include "ui_sea_mail.h"
#include"home_page.h"
#include"foring_mail.h"
#include<QMessageBox>

sea_mail::sea_mail(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::sea_mail)
{
    ui->setupUi(this);
    ui->image->setPixmap(QPixmap(":/img/image/logo.png"));
    ui->image->setScaledContents( true );
    ui->image->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
}

sea_mail::~sea_mail()
{
    delete ui;
}

void sea_mail::on_pushButton_2_clicked()
{
    foring_mail * fm = new foring_mail();
    fm -> show();
    this->hide();
}


void sea_mail::on_pushButton_3_clicked()
{
    home_page * hp = new home_page();
    hp -> show();
    this->hide();
}


void sea_mail::on_lineEdit_5_editingFinished()
{
    QString txt;

    txt= ui-> lineEdit_5 -> text();

if (txt == "China" or txt == "England" or txt == "Argetina" or txt == " Chile" or txt == "Colombia ")
{
    ui->lbl_catagory->setText("A");
}

else if (txt == "Brazil" or txt == "Canada" or txt == "Denmark" or txt == "France" or txt == "Germany ")
{
    ui->lbl_catagory->setText("B");
}

else if (txt == "Finland" or txt == "Hungary" or txt == "India" or txt ==  "Japan" or txt ==  "Kenya")
{
    ui->lbl_catagory->setText("C");
}

else if (txt == "Ireland" or txt ==  "New Zealand" or txt == "Pakistan" or txt == "America" or txt ==  "Turkey ")
{
    ui->lbl_catagory->setText("D");
}
else{
    ui->lbl_catagory->setText("NO");
}
}


void sea_mail::on_lineEdit_6_editingFinished()
{
    QString txt;

    txt= ui-> lbl_catagory -> text();

    int v1;
    v1=ui->lineEdit_6->text().toInt();

    if (txt == "A"){
        if(v1<=200){

        QString result = QString::number(v1*10);

        ui->lineEdit_7->setText(result);
        }
        else if( v1<=750 ){

        QString result = QString::number((200*10) +((v1-200)*5));

        ui->lineEdit_7->setText(result);
        }
        else if( v1<=1250 ){

        QString result = QString::number((200*10) + (550*5) + ((v1-750)*3));

        ui->lineEdit_7->setText(result);
        }
        else if(v1<=2000 ){

        QString result = QString::number((200*10) + (550*5 )+ (500*3) + ((v1-1250)*5));

        ui->lineEdit_7->setText(result);
        }
        else{
            ui->lineEdit_7->setText("5000");
        }

    }

    else  if (txt == "B"){
        if(v1<=200){

        QString result = QString::number(v1*8);

        ui->lineEdit_7->setText(result);
        }
        else if( v1<=750 ){

        QString result = QString::number((200*8) +((v1-200)*8));

        ui->lineEdit_7->setText(result);
        }
        else if(v1<=1250 ){

        QString result = QString::number((200*8) + (550*8) + ((v1-750)*6));

        ui->lineEdit_7->setText(result);
        }
        else if(v1<=2000 ){

        QString result = QString::number((200*8) + (550*8) + (500*6) + ((v1-1250)*2));

        ui->lineEdit_7->setText(result);
        }
        else{
            ui->lineEdit_7->setText("5000");
        }

    }

    if (txt == "C"){
        if(v1<=200){

        QString result = QString::number(v1*15);

        ui->lineEdit_7->setText(result);
        }
        else if(v1<=750 ){

        QString result = QString::number((200*15) +((v1-200)*5));

        ui->lineEdit_7->setText(result);
        }
        else if( v1<=1250 ){

        QString result = QString::number((200*15) +( 550*5 )+ ((v1-750)*5));

        ui->lineEdit_7->setText(result);
        }
        else if( v1<=2000 ){

        QString result = QString::number((200*15) + (550*5) + (500*5) + ((v1-1250)*4));

        ui->lineEdit_7->setText(result);
        }
        else{
            ui->lineEdit_7->setText("6000");
        }

    }

    if (txt == "D"){
        if(v1<=200){

        QString result = QString::number(v1*5);

        ui->lineEdit_7->setText(result);
        }
        else if(v1<=750 ){

        QString result = QString::number((200*5) +((v1-200)*2));

        ui->lineEdit_7->setText(result);
        }
        else if(v1<=1250 ){

        QString result = QString::number((200*5) + (550*2) + ((v1-750)*2));

        ui->lineEdit_7->setText(result);
        }
        else if(v1<=2000 ){

        QString result = QString::number((200*5) + (550*2 )+ (500*2) + ((v1-1250)*3));

        ui->lineEdit_7->setText(result);
        }
        else{
            ui->lineEdit_7->setText("5500");
        }

    }
    else
    {
        ui->lineEdit_7->setText("6500");
    }

}


void sea_mail::on_pushButton_clicked()
{
    //SQlite Database Connection

    QSqlDatabase sqlitedb = QSqlDatabase:: addDatabase("QSQLITE");
       sqlitedb.setDatabaseName("C:/sqlite3/database/postal_managment_system.sqlite");

       sqlitedb.open();

       QString id,sn,rn,sa,ra,cn,pr,wi;
       id= ui->lineEdit_10  ->text();
       sn= ui->lineEdit  ->text();
       rn= ui-> lineEdit_2 ->text();
       sa= ui-> lineEdit_3 ->text();
       ra= ui-> lineEdit_4->text();
       cn= ui-> lineEdit_5 ->text();
       pr= ui-> lineEdit_7 ->text();
       wi= ui-> lineEdit_6 ->text();


       QSqlQuery qry;
       qry.prepare("insert into Foreing_Mail (ID,Sender,Receiver,S_Address,R_Address,Country,Price,Weight ) values('"+id+"','"+sn+"','"+rn+"','"+sa+"','"+ra+"','"+cn+"','"+pr+"','"+wi+"')");

       if(qry.exec())
       {

           QMessageBox::critical(this,tr("Save"),tr("saved"));
       }
       else{
            QMessageBox::critical(this,tr("error::"),qry.lastError().text());
       }


       ui->lineEdit  ->clear();
       ui->lineEdit_10  ->clear();
       ui->lineEdit_2  ->clear();
       ui->lineEdit_3  ->clear();
       ui->lineEdit_4  ->clear();
       ui->lineEdit_5 ->clear();
       ui->lineEdit_6 ->clear();
       ui->lineEdit_7 ->clear();
       ui->lineEdit_8  ->clear();
       ui->lineEdit_9  ->clear();
       ui->lbl_catagory  ->clear();

}


void sea_mail::on_lineEdit_8_editingFinished()
{
    int v1;
    v1=ui->lineEdit_7->text().toInt();
    int v2;
    v2=ui->lineEdit_8->text().toInt();


        QString result = QString::number(v2-v1);

        ui->lineEdit_9->setText(result);

}

