#ifndef CLIENTE_H
#define CLIENTE_H

#include <QObject>

class Cliente : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString cedula READ cedula  WRITE setCedula)
    Q_PROPERTY(QString telefono READ telefono WRITE setTelefono)
    Q_PROPERTY(QString nombre READ nombre WRITE setNombre)
    Q_PROPERTY(QString email READ email WRITE setEmail)
    Q_PROPERTY(QString direccion READ email WRITE setDireccion)

private:
    QString m_cedula;
    QString m_nombre;
    QString m_telefono;
    QString m_email;
    QString m_direccion;
public:
    explicit Cliente(QObject *parent = nullptr);
    Cliente(QString cedula, QString nombre, QString telefono, QString email, QString direccion);
    QString cedula() const;
    void setCedula(const QString &cedula);

    QString nombre() const;
    void setNombre(const QString &nombre);

    QString telefono() const;
    void setTelefono(const QString &telefono);

    QString email() const;
    void setEmail(const QString &email);

    QString direccion() const;
    void setDireccion(const QString &direccion);

signals:

};

#endif // CLIENTE_H
