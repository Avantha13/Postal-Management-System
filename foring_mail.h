#ifndef FORING_MAIL_H
#define FORING_MAIL_H

#include <QWidget>
#include<QDialog>

#include"sea_mail.h"
#include"air_mail.h"
#include"foreing_data.h"

namespace Ui {
class foring_mail;
}

class foring_mail : public QWidget
{
    Q_OBJECT

public:
    explicit foring_mail(QWidget *parent = nullptr);
    ~foring_mail();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::foring_mail *ui;
    sea_mail sea;
    air_mail air;
    foreing_data data;


};

#endif // FORING_MAIL_H
