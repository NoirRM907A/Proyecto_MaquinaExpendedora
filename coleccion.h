//
// Created by Kendal Q on 8/9/2020.
//

#ifndef PROYECTO_MAQUINAEXPENDEDORA_COLECCION_H
#define PROYECTO_MAQUINAEXPENDEDORA_COLECCION_H


template <class T>
class coleccion {
public:
    virtual void borrarTodo() = 0;
    virtual bool agregaInicio(T*) = 0;
    virtual bool vacio() = 0;
    virtual string toString()=0;
    virtual int getCantidad() = 0;
};

#endif //PROYECTO_MAQUINAEXPENDEDORA_COLECCION_H
