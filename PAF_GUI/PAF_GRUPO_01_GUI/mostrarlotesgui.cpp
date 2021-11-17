#include "mostrarlotesgui.h"
#include "ui_mostrarlotesgui.h"

mostrarLotesGUI::mostrarLotesGUI(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mostrarLotesGUI)
{
    ui->setupUi(this);
}

mostrarLotesGUI::~mostrarLotesGUI()
{
    delete ui;
}
