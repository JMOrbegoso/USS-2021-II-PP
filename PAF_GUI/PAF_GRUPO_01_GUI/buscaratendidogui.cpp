#include "buscaratendidogui.h"
#include "ui_buscaratendidogui.h"

buscarAtendidoGUI::buscarAtendidoGUI(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::buscarAtendidoGUI)
{
    ui->setupUi(this);
}

buscarAtendidoGUI::~buscarAtendidoGUI()
{
    delete ui;
}

void buscarAtendidoGUI::on_pushButton_2_clicked()
{
    this->close();
}
