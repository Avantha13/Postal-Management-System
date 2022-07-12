#ifndef LOCAL_DATA_H
#define LOCAL_DATA_H

#include <QWidget>
#include<QtSql>
#include<QSqlDatabase>

namespace Ui {
class local_data;
}

class local_data : public QWidget
{
    Q_OBJECT

public:
    explicit local_data(QWidget *parent = nullptr);
    ~local_data();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::local_data *ui;
};

#endif // LOCAL_DATA_H
