//
// Created by Kendal Q on 8/9/2020.
//

#ifndef PROYECTO_MAQUINAEXPENDEDORA_NODO_H
#define PROYECTO_MAQUINAEXPENDEDORA_NODO_H

#include <iostream>
using namespace std;

template <class T>

class Nodo
{
    T* elemento;
    Nodo<T>* sig;
public:

    Nodo(T* dato);
    Nodo<T>* getSig();
    T* getElemento();
    void setSig(Nodo<T> *elemento);
};


//---------------------------------------------------------
template<class T>
Nodo<T>::Nodo(T* elemento)
{
    this->elemento = elemento;
    sig = NULL;
}

//-----------------------------------------------------------
template<class T>
T* Nodo<T>::getElemento() { return elemento; }


//-----------------------------------------------------------
template<class T>
Nodo<T>*  Nodo<T>::getSig()
{
    return sig;
}
//-----------------------------------------------------------
template<class T>
void Nodo<T>::setSig(Nodo<T> *aux) {
    sig = aux;
}


#endif //PROYECTO_MAQUINAEXPENDEDORA_NODO_H
