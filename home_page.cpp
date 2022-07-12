#include "home_page.h"
#include "ui_home_page.h"

home_page::home_page(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::home_page)
{
    ui->setupUi(this);
    ui->image->setPixmap(QPixmap(":/img/image/logo.png"));
    ui->image->setScaledContents( true );
    ui->image->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
    ui->label_2->setAlignment(Qt::AlignCenter);
    ui->label->setAlignment(Qt::AlignCenter);


}

home_page::~home_page()
{
    delete ui;
}


void home_page::on_pushButton_clicked()
{
    foreing.show();
    this->hide();
}


void home_page::on_pushButton_2_clicked()
{
    local.show();
    this->hide();
}

