#include "foreing_data.h"
#include "ui_foreing_data.h"
#include"home_page.h"
#include"foring_mail.h"

foreing_data::foreing_data(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::foreing_data)
{
    ui->setupUi(this);
    ui->image->setPixmap(QPixmap(":/img/image/logo.png"));
    ui->image->setScaledContents( true );
    ui->image->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
}

foreing_data::~foreing_data()
{
    delete ui;
}

void foreing_data::on_pushButton_clicked()
{
    home_page * hp = new home_page();
    hp -> show();
    this->hide();
}


void foreing_data::on_pushButton_2_clicked()
{
    foring_mail * fm = new foring_mail();
    fm -> show();
    this->hide();
}


void foreing_data::on_pushButton_3_clicked()
{
    //SQlite Database Connection

    QSqlDatabase sqlitedb = QSqlDatabase:: addDatabase("QSQLITE");
       sqlitedb.setDatabaseName("C:/sqlite3/database/postal_managment_system.sqlite");

       sqlitedb.open();

    QSqlQueryModel * modal =new QSqlQueryModel();

    QSqlQuery * qry = new QSqlQuery(sqlitedb);

    qry->prepare("select * from Foreing_Mail ");
    qry->exec();
    modal ->setQuery(*qry);
    ui-> tableView -> setModel(modal);

    sqlitedb.close();
    qDebug() <<(modal->rowCount());
}

