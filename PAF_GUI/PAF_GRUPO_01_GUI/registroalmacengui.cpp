#include "registroalmacengui.h"
#include "ui_registroalmacengui.h"

registroAlmacenGui::registroAlmacenGui(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::registroAlmacenGui)
{
    ui->setupUi(this);
}

registroAlmacenGui::~registroAlmacenGui()
{
    delete ui;
}
