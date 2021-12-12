#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "studentsListClass.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(studentsListClass *students, QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_lineEdit_textChanged(const QString &arg1);

private:
    studentsListClass *students;
    Ui::MainWindow *ui;
    void updateStudentsTable(studentsListClass *students = NULL);
};
#endif // MAINWINDOW_H
