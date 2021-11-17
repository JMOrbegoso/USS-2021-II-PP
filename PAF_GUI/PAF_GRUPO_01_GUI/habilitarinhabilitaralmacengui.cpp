#include "habilitarinhabilitaralmacengui.h"
#include "ui_habilitarinhabilitaralmacengui.h"

habilitarInhabilitarAlmacenGui::habilitarInhabilitarAlmacenGui(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::habilitarInhabilitarAlmacenGui)
{
    ui->setupUi(this);
}

habilitarInhabilitarAlmacenGui::~habilitarInhabilitarAlmacenGui()
{
    delete ui;
}
