#ifndef SEA_MAIL_H
#define SEA_MAIL_H

#include <QWidget>
#include<QtSql>
#include<QSqlDatabase>


namespace Ui {
class sea_mail;
}

class sea_mail : public QWidget
{
    Q_OBJECT

public:
    explicit sea_mail(QWidget *parent = nullptr);
    ~sea_mail();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_lineEdit_5_editingFinished();

    void on_lineEdit_6_editingFinished();

    void on_pushButton_clicked();

    void on_lineEdit_8_editingFinished();

private:
    Ui::sea_mail *ui;

};

#endif // SEA_MAIL_H
