//
// Created by acq07 on 04/10/2020.
//


#include <../lib/nlohmann/json.hpp>
#include <iostream>
#include <fstream>
#include "Person.h"
#include "ManagerPerson.h"
using namespace std;
using json = nlohmann::json;


int main() {

     ManagerPerson managerPerson;


    Person person1 = {"Mike", 25, 1};
    Person person2 = {"Ana", 25, 2};
    Person person3 = {"Pedro", 20, 3};

    managerPerson.addPerson(person1);
    managerPerson.addPerson(person2);
    managerPerson.addPerson(person3);

    json jsonPersonas;

    jsonPersonas["Personas"] = {{" Persona 1: ",person1.getNombre(),person1.getEdad(),person1.getId()},
                                {" Persona 2: ",person2.getNombre(),person2.getEdad(),person2.getId()},
                                {" Persona 3: ",person3.getNombre(),person3.getEdad(),person3.getId()}};

    string personasSerializando = jsonPersonas.dump();

    ofstream archivo;
    try { archivo.open("ArchivoTexto.json", ios::binary); }
    catch (ifstream::failure a) {
        cout << "no se pudo abrir el archivo";
        exit(1);
    }
    //para la lista de personas poner:archivo << personasSerializando<< '\n';
    archivo << personasSerializando << '\n';
    archivo.close();

    //lee el archivo
    ifstream archivo1;
    string texto;
    try { archivo1.open("ArchivoTexto.json", ios::binary); }
    catch (ifstream::failure a) {
        cout << "no se pudo abrir el archivo";
        exit(1);
    }
    cout << endl;
    while (!archivo1.eof()) {
        getline(archivo1, texto);
        cout << texto << endl;
    }
    archivo1.close();


    return 0;

}

