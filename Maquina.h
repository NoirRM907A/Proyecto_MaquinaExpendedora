//
// Created by Noel on 29/08/2020.
//

#ifndef PROYECTO_MAQUINAEXPENDEDORA_MAQUINA_H
#define PROYECTO_MAQUINAEXPENDEDORA_MAQUINA_H
#include "IMaquinaAdministradora.h"
#include "IMaquinaVendedora.h"
#include "MonederoElectronico.h"
#include "listaGenerica.h"

class Maquina : public IMaquinaAdministradora, public IMaquinaVendedora{
private:
    int identificador;
    string nombre;
    listaGenerica<Producto>* productos;
    MonederoElectronico* monedero;
public:
    Maquina();
    Maquina(int = 0, string = "");
    ~Maquina();
    void setIdentificador(int);

    //Metodos de IMaquinaAdministradora
    virtual int getIdentificador();
    virtual string getNombre();
    virtual void setNombre(string);
    virtual string toString();
    virtual void insertar(Producto*);
    virtual void agregarProvisiones(string idProducto, int cantidad);
    virtual void disminuirProvisiones(string idProducto, int cantidad);
    virtual void borrar(string id);
    virtual Producto* consultar(string id);
    virtual void ingresarDinero();
    virtual void retirarDinero(int cantidad);

    //Metodos de IMaquinaVendedora
    virtual string realizarCompra(string ID, int cantidad, int montoPago);



};


#endif //PROYECTO_MAQUINAEXPENDEDORA_MAQUINA_H
