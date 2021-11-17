#include "mostraralmacenesgui.h"
#include "ui_mostraralmacenesgui.h"

mostrarAlmacenesGui::mostrarAlmacenesGui(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mostrarAlmacenesGui)
{
    ui->setupUi(this);
}

mostrarAlmacenesGui::~mostrarAlmacenesGui()
{
    delete ui;
}
