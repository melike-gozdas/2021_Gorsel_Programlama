#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:

    void on_buton_hesapla_clicked();

    void on_buton_cikis_clicked();

private:
    Ui::Dialog *ui;
};
#endif // DIALOG_H
