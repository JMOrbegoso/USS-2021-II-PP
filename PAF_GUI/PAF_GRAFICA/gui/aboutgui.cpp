#include "aboutgui.h"
#include "ui_aboutgui.h"

aboutGui::aboutGui(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::aboutGui)
{
    ui->setupUi(this);

    //QPixmap pix("D:/USS-CICLO IV/PARADIGMAS DE PROGRAMACION/GitHub/USS-2021-II-PP/PAF_GUI/PAF_GRAFICA/img/img_prueba.jpg");
    //ui->imagenLabel->setPixmap(pix);

    this->ui->angelObedLabel->setOpenExternalLinks(true);
    this->ui->angelTorresLabel->setOpenExternalLinks(true);
    this->ui->daraLabel->setOpenExternalLinks(true);
    this->ui->jmLabel->setOpenExternalLinks(true);
}

aboutGui::~aboutGui()
{
    delete ui;
}

void aboutGui::on_cmdClose_clicked()
{
    this->close();
}
