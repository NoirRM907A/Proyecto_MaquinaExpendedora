cmake_minimum_required(VERSION 3.17)
project(Proyecto_MaquinaExpendedora)

set(CMAKE_CXX_STANDARD 14)

add_executable(Proyecto_MaquinaExpendedora main.cpp Producto.cpp Producto.h IMaquinaAdministradora.h IMaquinaVendedora.h Maquina.cpp Maquina.h)