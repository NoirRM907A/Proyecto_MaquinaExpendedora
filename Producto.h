//
// Created by Noel on 27/08/2020.
//

#ifndef PROYECTO_MAQUINAEXPENDEDORA_PRODUCTO_H
#define PROYECTO_MAQUINAEXPENDEDORA_PRODUCTO_H
#include <iostream>
#include <sstream>
using namespace std;

class Producto {
protected:
    string nombre;
    float precio;
    int cantidad;
public:
    Producto();
    Producto(string = "", float = 0, int = 0);
    ~Producto();
    string getNombre();
    virtual float getPrecio() = 0;
    int getCantidad();
    void setNombre(string);
    void setPrecio(float);
    void getCantidad(int);
    string toString();

};


#endif //PROYECTO_MAQUINAEXPENDEDORA_PRODUCTO_H
