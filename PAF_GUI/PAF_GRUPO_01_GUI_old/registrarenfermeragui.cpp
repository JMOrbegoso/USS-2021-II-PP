#include "registrarenfermeragui.h"
#include "ui_registrarenfermeragui.h"

registrarEnfermeraGui::registrarEnfermeraGui(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registrarEnfermeraGui)
{
    ui->setupUi(this);
}

registrarEnfermeraGui::~registrarEnfermeraGui()
{
    delete ui;
}

void registrarEnfermeraGui::on_pushButton_clicked()
{
    this->close();
}
