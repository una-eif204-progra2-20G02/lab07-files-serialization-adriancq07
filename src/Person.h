//
// Created by acq07 on 08/10/2020.
//

#ifndef MY_PROJECT_NAME_PERSON_H
#define MY_PROJECT_NAME_PERSON_H
#include <../lib/nlohmann/json.hpp>
#include <iostream>
#include <fstream>
using json = nlohmann::json;

using namespace std;

class Person{
public:
    Person();

    Person(const string &nombre, int edad, int id);

    const string &getNombre() const;

    void setNombre(const string &nombre);

    int getEdad() const;

    void setEdad(int edad);

    int getId() const;

    void setId(int id);

    virtual ~Person();

private:
    string nombre;
    int edad;
    int id;
};

#endif //MY_PROJECT_NAME_PERSON_H
