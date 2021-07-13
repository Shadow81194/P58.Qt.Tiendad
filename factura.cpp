#include "factura.h"
#include "ui_factura.h"
#include "principal.h"
#include "cliente.h"
Factura::Factura(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Factura)
{
    ui->setupUi(this);
}

Factura::~Factura()
{
    delete ui;
}

void Factura::setNombre(const QString &value)
{
    Nombre = value;
    ui->outNombre->setText(value);
}

void Factura::setCedula(const QString &value)
{
    Cedula = value;
    ui->outCedula->setText(value);
}

void Factura::setTelefono(const QString &value)
{
    Telefono = value;
    ui->outTelefono->setText(value);
}

void Factura::setE_mail(const QString &value)
{
    E_mail = value;
    ui->outMail->setText(value);
}

void Factura::setDirecion(const QString &value)
{
    Direcion = value;
    ui->outDirecion->setText(value);
}

void Factura::setDetalle(const QString &value)
{
    Detalle = value;
    ui->outDetalle->setText(value);
}

void Factura::setSubtotal(const QString &value)
{
    Subtotal = value;
    ui->outSubtotal->setText(value);
}

void Factura::setIVA(const QString &value)
{
    Iva = value;
    ui->outIVA->setText(value);
}

void Factura::setTotal(const QString &value)
{
    Total = value;
    ui->outTotal->setText(value);
}
