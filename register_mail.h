#ifndef REGISTER_MAIL_H
#define REGISTER_MAIL_H

#include <QWidget>
#include<QtSql>
#include<QSqlDatabase>

namespace Ui {
class register_mail;
}

class register_mail : public QWidget
{
    Q_OBJECT

public:
    explicit register_mail(QWidget *parent = nullptr);
    ~register_mail();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_lineEdit_6_editingFinished();

    void on_pushButton_clicked();

    void on_lineEdit_8_editingFinished();

private:
    Ui::register_mail *ui;
};

#endif // REGISTER_MAIL_H
