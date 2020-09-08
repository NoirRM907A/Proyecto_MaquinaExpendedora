//
// Created by Noel on 30/08/2020.
//

#include "MonederoElectronico.h"


MonederoElectronico::MonederoElectronico(int dinero) : dinero(dinero) {

}

MonederoElectronico::MonederoElectronico() : dinero(0) {

}

int MonederoElectronico::getDinero() const {
    return dinero;
}

void MonederoElectronico::setDinero(int dinero) {
    MonederoElectronico::dinero = dinero;
}

string MonederoElectronico::toString() {
    stringstream s;
    s << "Cantidad de dinero: " << dinero << endl;
    return s.str();
}

string MonederoElectronico::desgloceVuelto(string &) {

}
