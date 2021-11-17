#include "mostrarfilaatendidosgui.h"
#include "ui_mostrarfilaatendidosgui.h"

mostrarFilaAtendidosGUI::mostrarFilaAtendidosGUI(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mostrarFilaAtendidosGUI)
{
    ui->setupUi(this);
}

mostrarFilaAtendidosGUI::~mostrarFilaAtendidosGUI()
{
    delete ui;
}

void mostrarFilaAtendidosGUI::on_pushButton_2_clicked()
{
    this->close();
}
