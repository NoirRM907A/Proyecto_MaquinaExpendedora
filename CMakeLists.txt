cmake_minimum_required(VERSION 3.16)
project(Proyecto_MaquinaExpendedora)

set(CMAKE_CXX_STANDARD 14)

add_executable(Proyecto_MaquinaExpendedora main.cpp Producto.cpp Producto.h IMaquinaAdministradora.h IMaquinaVendedora.h Maquina.cpp Maquina.h MonederoElectronico.cpp MonederoElectronico.h Nodo.h coleccion.h iterador.h iteradorLista.h listaGenerica.h)