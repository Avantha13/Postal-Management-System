#ifndef NORMAL_MAIL_H
#define NORMAL_MAIL_H

#include <QWidget>
#include<QtSql>
#include<QSqlDatabase>

namespace Ui {
class normal_mail;
}

class normal_mail : public QWidget
{
    Q_OBJECT

public:
    explicit normal_mail(QWidget *parent = nullptr);
    ~normal_mail();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_lineEdit_6_editingFinished();

    void on_pushButton_clicked();

    void on_lineEdit_8_editingFinished();

private:
    Ui::normal_mail *ui;
};

#endif // NORMAL_MAIL_H
