//
// Created by Kendal Q on 8/9/2020.
//

#ifndef PROYECTO_MAQUINAEXPENDEDORA_ITERADOR_H
#define PROYECTO_MAQUINAEXPENDEDORA_ITERADOR_H
#include "Nodo.h"

template <class T>
class  iterador{
public:
    virtual bool isDone() = 0;
    virtual  void next() = 0;
    virtual  T* currenItem() = 0;
    virtual  void first() = 0;
};

#endif //PROYECTO_MAQUINAEXPENDEDORA_ITERADOR_H
