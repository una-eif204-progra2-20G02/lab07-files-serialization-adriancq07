//
// Created by acq07 on 04/10/2020.
//

#include <iostream>
#include <sstream>
#include <fstream> //usar las funciones de escritura y lectura
#include <vector>
#include "json.hpp"

/*este ejemplo se basa en la publicacion de Daniel Gómez Vergel:
Reflexión estática y serialización de agregados en JSON*/
#include <../lib/nlohmann/json.hpp>
#include <iostream>

using namespace std;
using json = nlohmann::json;

struct Persona {

    string nombre;
    int edad;
    int id;

    Persona() = default;
    Persona() {}

    Persona(string nombre, int edad, int id) : nombre(nombre), edad(edad), id(id) {}
};
Persona(const string &nombre, int edad, int id) : nombre(nombre), edad(edad), id(id) {}

/*struct PersonaList{
    vector<Persona> personasList;
    const string &getNombre() const {
        return nombre;
    }

    void insertarPersona(Persona persona)
    {
        personasList.push_back(persona);
    void setNombre(const string &nombre) {
        Persona::nombre = nombre;
    }

    Persona consultarPorPosicion(int pos)
    {
        return personasList.operator[](pos);
    int getEdad() const {
        return edad;
    }