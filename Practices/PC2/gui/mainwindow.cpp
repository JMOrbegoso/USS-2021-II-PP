#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(studentsListClass *students, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    this->ui->setupUi(this);

    this->students = students;

    // Column headers
    this->ui->studentsTableWidget->setColumnWidth(0, 90);
    this->ui->studentsTableWidget->setColumnWidth(1, 120);
    this->ui->studentsTableWidget->setColumnWidth(2, 120);
    this->ui->studentsTableWidget->setColumnWidth(3, 120);

    this->updateStudentsTable();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateStudentsTable(studentsListClass *students){
    students = students == NULL ? this->students : students;

    // Clear the table
    this->ui->studentsTableWidget->setRowCount(0);

    // Items
    for (int x = 0; x < students->getLength(); x++){
        auto student = students->getHead() + x;

        // Class properties
        string code = student->getCode();
        string firstName = student->getFirstName();
        string lastName = student->getLastName();
        string dni = student->getDni();

        // Class properties in UI
        this->ui->studentsTableWidget->insertRow(x);
        this->ui->studentsTableWidget->setItem(x, 0, new QTableWidgetItem(QString::fromStdString(code)));
        this->ui->studentsTableWidget->setItem(x, 1, new QTableWidgetItem(QString::fromStdString(firstName)));
        this->ui->studentsTableWidget->setItem(x, 2, new QTableWidgetItem(QString::fromStdString(lastName)));
        this->ui->studentsTableWidget->setItem(x, 3, new QTableWidgetItem(QString::fromStdString(dni)));
    }
}

void MainWindow::on_lineEdit_textChanged(const QString &arg1)
{
    auto studentsByDni = this->students->findByDni(arg1.toStdString());
    this->updateStudentsTable(studentsByDni);
}
