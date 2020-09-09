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

string MonederoElectronico::desgloceVuelto(string cant) {
    string devolucion = "";
    int cantidad = atoi (cant.c_str());
    int desgloce[]={100,500,1000,2000};
    int n = sizeof(desgloce) / sizeof(desgloce[0]);
    vector<int> monedas;
    for (int i = n-1; i>=0; i--){
        while(cantidad >= desgloce[i]) {
            cantidad -= desgloce[i];
            monedas.push_back(desgloce[i]);
        }
    }

    for(int i = 0; i < monedas.size(); i++) {
        int a = monedas[i];
        stringstream ss;
        ss << a;
        devolucion = devolucion + ss.str() + "\n";
    }
    return devolucion;
}
