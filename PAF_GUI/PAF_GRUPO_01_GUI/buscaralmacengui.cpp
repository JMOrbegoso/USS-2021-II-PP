#include "buscaralmacengui.h"
#include "ui_buscaralmacengui.h"

buscarAlmacenGui::buscarAlmacenGui(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::buscarAlmacenGui)
{
    ui->setupUi(this);
}

buscarAlmacenGui::~buscarAlmacenGui()
{
    delete ui;
}
