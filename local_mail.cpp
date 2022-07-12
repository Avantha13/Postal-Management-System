#include "local_mail.h"
#include "ui_local_mail.h"
#include"home_page.h"

local_mail::local_mail(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::local_mail)
{
    ui->setupUi(this);
    ui->image->setPixmap(QPixmap(":/img/image/logo.png"));
    ui->image->setScaledContents( true );
    ui->image->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
    ui->label->setAlignment(Qt::AlignCenter);
}

local_mail::~local_mail()
{
    delete ui;
}




void local_mail::on_pushButton_5_clicked()
{
    home_page * hp = new home_page();
    hp -> show();
    this->hide();

}


void local_mail::on_pushButton_clicked()
{
    normal.show();
    this->hide();
}


void local_mail::on_pushButton_2_clicked()
{

    regi.show();
    this->hide();
}


void local_mail::on_pushButton_3_clicked()
{
    ldata.show();
    this->hide();
}

