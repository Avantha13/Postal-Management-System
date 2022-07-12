#ifndef AIR_MAIL_H
#define AIR_MAIL_H

#include <QWidget>
#include<QtSql>
#include<QSqlDatabase>

namespace Ui {
class air_mail;
}

class air_mail : public QWidget
{
    Q_OBJECT

public:
    explicit air_mail(QWidget *parent = nullptr);
    ~air_mail();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_lineEdit_5_editingFinished();

    void on_lineEdit_6_editingFinished();

    void on_pushButton_clicked();

    void on_lineEdit_7_editingFinished();

private:
    Ui::air_mail *ui;
};

#endif // AIR_MAIL_H
