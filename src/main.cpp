//
// Created by acq07 on 04/10/2020.
//


#include <../lib/nlohmann/json.hpp>
#include <iostream>
#include <fstream>

using namespace std;
using json = nlohmann::json;

struct Persona {
    string nombre;
    int edad;
    int id;

    Persona() {}

    Persona(const string &nombre, int edad, int id) : nombre(nombre), edad(edad), id(id) {}

    const string &getNombre() const {
        return nombre;
    }

    void setNombre(const string &nombre) {
        Persona::nombre = nombre;
    }

    int getEdad() const {
        return edad;
    }

    void setEdad(int edad) {
        Persona::edad = edad;
    }

    int getId() const {
        return id;
    }

    void setId(int id) {
        Persona::id = id;
    }
};

int main() {
    return 0;
}
