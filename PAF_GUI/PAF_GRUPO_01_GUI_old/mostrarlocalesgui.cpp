#include "mostrarlocalesgui.h"
#include "ui_mostrarlocalesgui.h"

mostrarLocalesGUI::mostrarLocalesGUI(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mostrarLocalesGUI)
{
    ui->setupUi(this);
}

mostrarLocalesGUI::~mostrarLocalesGUI()
{
    delete ui;
}
