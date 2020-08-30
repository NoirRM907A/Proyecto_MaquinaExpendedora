//
// Created by Noel on 29/08/2020.
//

#ifndef PROYECTO_MAQUINAEXPENDEDORA_IMAQUINAVENDEDORA_H
#define PROYECTO_MAQUINAEXPENDEDORA_IMAQUINAVENDEDORA_H
#include <iostream>
#include <sstream>
using namespace std;

class IMaquinaVendedora {
public:
    virtual string realizarCompra(string ID, int cantidad, int montoPago) = 0;
};


#endif //PROYECTO_MAQUINAEXPENDEDORA_IMAQUINAVENDEDORA_H
