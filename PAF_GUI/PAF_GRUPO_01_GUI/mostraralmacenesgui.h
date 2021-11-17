#ifndef MOSTRARALMACENESGUI_H
#define MOSTRARALMACENESGUI_H

#include <QWidget>

namespace Ui {
class mostrarAlmacenesGui;
}

class mostrarAlmacenesGui : public QWidget
{
    Q_OBJECT

public:
    explicit mostrarAlmacenesGui(QWidget *parent = nullptr);
    ~mostrarAlmacenesGui();

private:
    Ui::mostrarAlmacenesGui *ui;
};

#endif // MOSTRARALMACENESGUI_H
