#ifndef FACTURA_H
#define FACTURA_H

#include <QDialog>

namespace Ui {
class Factura;
}

class Factura : public QDialog
{
    Q_OBJECT

public:
    explicit Factura(QWidget *parent = nullptr);
    ~Factura();

    void setNombre(const QString &value);

    void setCedula(const QString &value);

    void setTelefono(const QString &value);

    void setE_mail(const QString &value);

    void setDirecion(const QString &value);

    void setDetalle(const QString &value);

    void setSubtotal(const QString &value);

    void setIVA(const QString &value);

    void setTotal(const QString &value);

private:
    Ui::Factura *ui;
    QString Cedula;
    QString Nombre;
    QString Telefono;
    QString E_mail;
    QString Direcion;
    QString Detalle;
    QString Subtotal;
    QString Iva;
    QString Total;
};

#endif // FACTURA_H
