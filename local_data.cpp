#include "local_data.h"
#include "ui_local_data.h"
#include "home_page.h"
#include "local_mail.h"

local_data::local_data(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::local_data)
{
    ui->setupUi(this);
    ui->image->setPixmap(QPixmap(":/img/image/logo.png"));
    ui->image->setScaledContents( true );
    ui->image->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
}

local_data::~local_data()
{
    delete ui;
}

void local_data::on_pushButton_clicked()
{
    home_page * hp = new home_page();
    hp -> show();
    this->hide();
}


void local_data::on_pushButton_2_clicked()
{
    local_mail * lm = new local_mail();
    lm -> show();
    this->hide();
}


void local_data::on_pushButton_3_clicked()
{
    //SQlite Database Connection

    QSqlDatabase sqlitedb = QSqlDatabase:: addDatabase("QSQLITE");
       sqlitedb.setDatabaseName("C:/sqlite3/database/postal_managment_system.sqlite");

       sqlitedb.open();

    QSqlQueryModel * modal =new QSqlQueryModel();

    QSqlQuery * qry = new QSqlQuery(sqlitedb);

    qry->prepare("select * from Local_Mail ");
    qry->exec();
    modal ->setQuery(*qry);
    ui-> tableView -> setModel(modal);

    sqlitedb.close();
    qDebug() <<(modal->rowCount());
}

