#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_textEdit_textChanged();

    void on_textEdit_2_textChanged();

    void on_textEdit_3_textChanged();

    void on_textEdit_4_textChanged();

    void on_textEdit_5_textChanged();

    void on_textEdit_6_textChanged();

    void on_textEdit_7_textChanged();

    void on_textEdit_8_textChanged();

    void on_textEdit_9_textChanged();

    void on_textEdit_10_textChanged();

    void on_textEdit_11_textChanged();

    void on_textEdit_12_textChanged();

    void on_textEdit_13_textChanged();

    void on_textEdit_14_textChanged();

    void on_textEdit_15_textChanged();

    void on_textEdit_16_textChanged();

    void on_textEdit_17_textChanged();

    void on_textEdit_18_textChanged();

    void on_textEdit_19_textChanged();

    void on_textEdit_20_textChanged();

    void on_textEdit_21_textChanged();

    void on_textEdit_22_textChanged();

    void on_textEdit_23_textChanged();

    void on_textEdit_24_textChanged();

    void on_textEdit_25_textChanged();

    void on_textEdit_26_textChanged();

    void on_textEdit_27_textChanged();

    void on_textEdit_28_textChanged();

    void on_textEdit_29_textChanged();

    void on_textEdit_30_textChanged();

    void Line1();

    void Line2();

    void Line3();

    void Line4();

    void Line5();

    void Line6();

    void check();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_actionExit_triggered();

    void on_actionNew_Game_triggered();

    void on_actionHelp_triggered();

    void on_actionAbout_triggered();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void win1();

    void win2();

    void win3();

    void win4();

    void win5();

    void win6();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
