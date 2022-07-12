#ifndef LOCAL_MAIL_H
#define LOCAL_MAIL_H

#include <QWidget>

#include"normal_mail.h"
#include"register_mail.h"
#include"local_data.h"
namespace Ui {
class local_mail;
}

class local_mail : public QWidget
{
    Q_OBJECT

public:
    explicit local_mail(QWidget *parent = nullptr);
    ~local_mail();

private slots:
    void on_pushButton_5_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::local_mail *ui;
    normal_mail normal;
    register_mail regi;
    local_data ldata;

};

#endif // LOCAL_MAIL_H
