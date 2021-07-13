#ifndef CEDULA_H
#define CEDULA_H

#include <QObject>

class Cedula : public QObject
{
    Q_OBJECT
public:
    explicit Cedula(QObject *parent = nullptr);

signals:

};

#endif // CEDULA_H
