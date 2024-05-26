// (.hpp) EXCEPTIONS

#pragma once


#ifndef EXCEPTIONS_HPP
#define EXCEPTIONS_HPP

#include <stdexcept>
#include <exception>
using namespace std;


class ExceptionError : public exception { //Excepcion general
public:
    ExceptionError(const char* message) : exception(message) {}
};

class ExceptionLecturaArchivo : public ExceptionError {
public:
    ExceptionLecturaArchivo() : ExceptionError("Error al leer el archivo") {}
};

class ExceptionEscrituraArchivo : public ExceptionError {
public:
    ExceptionEscrituraArchivo() : ExceptionError("Error al escribir en el archivo") {}
};

class ExceptionInicioSesion : public ExceptionError {
public:
    ExceptionInicioSesion() : ExceptionError("Error en el usuario o contrasena impuestos") {}
};


#endif // !EXCEPTIONS_HPP

