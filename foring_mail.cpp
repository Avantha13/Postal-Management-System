#include "foring_mail.h"
#include "ui_foring_mail.h"
#include"home_page.h"
foring_mail::foring_mail(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::foring_mail)
{
    ui->setupUi(this);
    ui->image->setPixmap(QPixmap(":/img/image/logo.png"));
    ui->image->setScaledContents( true );
    ui->image->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
    ui->label_2->setAlignment(Qt::AlignCenter);

}

foring_mail::~foring_mail()
{
    delete ui;
}

void foring_mail::on_pushButton_clicked()
{
    sea.show();
    this->hide();
}


void foring_mail::on_pushButton_2_clicked()
{
    air.show();
    this->hide();
}


void foring_mail::on_pushButton_3_clicked()
{
    data.show();
    this->hide();
}


void foring_mail::on_pushButton_4_clicked()
{

    home_page * hp = new home_page();
    hp -> show();
    this->hide();

}

