#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "kalkulator.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
    void on_addButton_clicker();
    void on_subButton_clicker();
    void on_mulButton_clicker();
    void on_divButton_clicker();
    void on_modButton_clicker();
    void on_clearButton_clicker();
private:
    Ui::MainWindow *ui;
    Kalkulator calc;
};
#endif // MAINWINDOW_H
