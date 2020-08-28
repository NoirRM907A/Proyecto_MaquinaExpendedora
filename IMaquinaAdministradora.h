//
// Created by Noel on 27/08/2020.
//

#ifndef PROYECTO_MAQUINAEXPENDEDORA_IMAQUINAADMINISTRADORA_H
#define PROYECTO_MAQUINAEXPENDEDORA_IMAQUINAADMINISTRADORA_H
#include <iostream>
#include <sstream>
#include "Producto.h"
using namespace std;

class IMaquinaAdministradora {
public:
    virtual int getIdentificador() = 0;
    virtual string getNombre() = 0;
    virtual void setNombre(string) = 0;
    virtual string toString() = 0;
    virtual void insertar(Producto*) = 0;
    virtual void agregarProvisiones(string idProducto, int cantidad) = 0;
    virtual void disminuirProvisiones(string idProducto, int cantidad) = 0;
    virtual void borrar(string id) = 0;
    virtual Producto* consultar(string id) = 0;
    virtual void ingresarDinero() = 0;
    virtual void retirarDinero(int cantidad) = 0;
};


#endif //PROYECTO_MAQUINAEXPENDEDORA_IMAQUINAADMINISTRADORA_H
