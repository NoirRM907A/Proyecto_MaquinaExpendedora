//
// Created by Kendal Q on 8/9/2020.
//

#ifndef PROYECTO_MAQUINAEXPENDEDORA_ITERADORLISTA_H
#define PROYECTO_MAQUINAEXPENDEDORA_ITERADORLISTA_H
#include "iterador.h"

template <class T>
class iteradorLista : public iterador<T> {
private:
    Nodo<T> * cur;
    Nodo<T>* primero;

public:
    iteradorLista(Nodo<T>*);
    virtual bool isDone() ; // retorna true si hay mas elementos
    virtual void next();// avanza cur
    virtual T* currenItem() ;// retorna el elemento actual
    virtual void first(); //pone cur al inicio
};


//----------iterador------------
template <class T>
iteradorLista<T>::iteradorLista(Nodo<T>* p) : cur(p), primero(p) {

}
//-------------------------------
template <class T>
bool iteradorLista<T>::isDone()
{
    return (cur != NULL);
}

//------------------------------
template <class T>
T* iteradorLista<T>::currenItem()  {
    return  cur->getElemento();
}

//--------------------------------
template <class T>
void iteradorLista<T>::first()
{
    cur = primero;
}

//---------------------------------
template <class T>
void iteradorLista<T>::next()
{
    cur = cur->getSig();
}


#endif //PROYECTO_MAQUINAEXPENDEDORA_ITERADORLISTA_H
