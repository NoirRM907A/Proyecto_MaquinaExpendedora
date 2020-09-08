//
// Created by Kendal Q on 8/9/2020.
//

#ifndef PROYECTO_MAQUINAEXPENDEDORA_LISTAGENERICA_H
#define PROYECTO_MAQUINAEXPENDEDORA_LISTAGENERICA_H

#include <iostream>
using namespace std;
#include "Nodo.h";
#include "iteradorLista.h";
#include "coleccion.h";

template <class T>
class listaGenerica : public coleccion<T>
{
protected:
    Nodo<T> *primero;
    int can;
public:
    listaGenerica();
    bool vacio();
    bool agregaInicio(T*);
    bool agregaFinal(T*);
    int getCantidad();
    string  toString();
    void borrarTodo();
    iteradorLista<T>* obtenerIterador();
    ~listaGenerica();
};

//--------------------------------------------

template <class T>
bool  listaGenerica <T>::agregaFinal(T* x) {

    Nodo<T> *temp = primero;
    if (vacio()) {
        agregaInicio(x);
    }
    else {

        while (temp->getSig() != NULL)
        {
            temp = temp->getSig();
        }

        temp->setSig(new Nodo<T>(x));

        can++;

    }
    return true;
}


//--------------------------------------------
template<class T>
iteradorLista<T>* listaGenerica<T>::obtenerIterador()
{
    return new iteradorLista<T>(primero);
}


//--------------------------------------------
template<class T>
listaGenerica<T>::listaGenerica() {
    primero = NULL;
    can = 0;
}

//--------------------------------------------
template<class T>
bool listaGenerica<T>::vacio() {
    return (primero == NULL);
}
//---------------------------------------------
template<class T>
bool listaGenerica<T>::agregaInicio(T* dato) {
    Nodo<T> *nodo = new Nodo<T>(dato);
    if (primero == NULL)
    {
        primero=nodo;
    }
    else
    {
        nodo->setSig(primero);
        primero = nodo;
    }
    can++;
    return true;
}

//--------------------------------------------
template<class T>
string listaGenerica<T>::toString()
{
    Nodo<T> *temp = primero;
    stringstream s;
    int i = 1;

    s  <<"cantidad: " << can  << endl;
    while (temp)
    {
        s << "  (" <<i <<")" << endl;
        s << temp->getElemento()->toString();
        temp = temp->getSig();
        i++;
    }
    return s.str();
}

//--------------------------------------------
template<class T>
listaGenerica<T>::~listaGenerica()
{
    borrarTodo();
}

//--------------------------------------------
template<class T>
void listaGenerica<T>::borrarTodo()
{

    Nodo<T> *temp= primero;
    can = 0;
    while (temp != NULL)
    {
        temp = primero;
        primero = primero->getSig();
        delete temp;
    }
}
//--------------------------------------------------------------
template<class T>
int listaGenerica<T>::getCantidad()
{
    return can;
}


#endif //PROYECTO_MAQUINAEXPENDEDORA_LISTAGENERICA_H
