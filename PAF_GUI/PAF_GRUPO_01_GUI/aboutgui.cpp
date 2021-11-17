#include "aboutgui.h"
#include "ui_aboutgui.h"

aboutGUI::aboutGUI(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::aboutGUI)
{
    ui->setupUi(this);
}

aboutGUI::~aboutGUI()
{
    delete ui;
}
