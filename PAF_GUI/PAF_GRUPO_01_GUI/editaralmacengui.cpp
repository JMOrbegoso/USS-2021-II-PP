#include "editaralmacengui.h"
#include "ui_editaralmacengui.h"

editarAlmacenGui::editarAlmacenGui(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::editarAlmacenGui)
{
    ui->setupUi(this);
}

editarAlmacenGui::~editarAlmacenGui()
{
    delete ui;
}
