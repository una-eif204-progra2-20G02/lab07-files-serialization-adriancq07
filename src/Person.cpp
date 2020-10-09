//
// Created by acq07 on 08/10/2020.
//

#include "Person.h"


Person::Person(const string &nombre, int edad, int id) : nombre(nombre), edad(edad), id(id) {}

const string &Person::getNombre() const {
    return nombre;
}

void Person::setNombre(const string &nombre) {
    Person::nombre = nombre;
}

int Person::getEdad() const {
    return edad;
}

void Person::setEdad(int edad) {
    Person::edad = edad;
}

int Person::getId() const {
    return id;
}

void Person::setId(int id) {
    Person::id = id;
}

Person::Person() {}
