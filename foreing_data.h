#ifndef FOREING_DATA_H
#define FOREING_DATA_H

#include <QWidget>
#include<QtSql>
#include<QSqlDatabase>

namespace Ui {
class foreing_data;
}

class foreing_data : public QWidget
{
    Q_OBJECT

public:
    explicit foreing_data(QWidget *parent = nullptr);
    ~foreing_data();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::foreing_data *ui;
};

#endif // FOREING_DATA_H
