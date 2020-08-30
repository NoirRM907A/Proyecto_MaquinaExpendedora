//
// Created by Noel on 30/08/2020.
//

#ifndef PROYECTO_MAQUINAEXPENDEDORA_MONEDEROELECTRONICO_H
#define PROYECTO_MAQUINAEXPENDEDORA_MONEDEROELECTRONICO_H
#include <iostream>
#include <sstream>
using namespace std;

class MonederoElectronico {
private:
    int dinero;
public:
    MonederoElectronico();
    MonederoElectronico(int);
    ~MonederoElectronico();
    int getDinero();
    void setDinero(int);
    string desgloceVuelto(string&);
    string toString();




};


#endif //PROYECTO_MAQUINAEXPENDEDORA_MONEDEROELECTRONICO_H
