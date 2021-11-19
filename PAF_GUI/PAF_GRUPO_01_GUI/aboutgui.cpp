#include "aboutgui.h"
#include "ui_aboutgui.h"

aboutGui::aboutGui(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::aboutGui)
{
    ui->setupUi(this);
}

aboutGui::~aboutGui()
{
    delete ui;
}

void aboutGui::on_cmdClose_clicked()
{
    this->close();
}
