#ifndef PRINCIPAL_H
#define PRINCIPAL_H

#include <QMainWindow>

#include "producto.h"
#define IVA 12
QT_BEGIN_NAMESPACE
namespace Ui { class Principal; }
QT_END_NAMESPACE

class Principal : public QMainWindow
{
    Q_OBJECT

public:
    Principal(QWidget *parent = nullptr);
    ~Principal();

private slots:
    void on_cmdAgregar_released();

    void on_inProducto_currentIndexChanged(int index);

    void on_pushButton_clicked();



    void on_pushButton_2_released();

private:
    Ui::Principal *ui;
    QList<Producto*> m_productos;
    float m_subtotal;
    void calculr(float stProducto);
    void verificacion();
};
#endif // PRINCIPAL_H
