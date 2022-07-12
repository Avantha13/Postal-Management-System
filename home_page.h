#ifndef HOME_PAGE_H
#define HOME_PAGE_H

#include <QMainWindow>

#include "foring_mail.h"
#include "local_mail.h"

QT_BEGIN_NAMESPACE
namespace Ui { class home_page; }
QT_END_NAMESPACE

class home_page : public QMainWindow
{
    Q_OBJECT

public:
    home_page(QWidget *parent = nullptr);
    ~home_page();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::home_page *ui;
    foring_mail foreing;
    local_mail local;

};
#endif // HOME_PAGE_H
