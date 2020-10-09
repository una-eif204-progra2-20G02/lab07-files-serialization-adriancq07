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


    Person  person1 = {"Mike", 30, 1};
    /*  Persona persona2 = {"pep", 22, 43};
      Persona persona3 = {"lucas", 33, 12};*/

    managerPerson.addPerson(person1);}

//    // Convertir a JSON: Copia cada valor en un objeto JSON (SERIALIZACION)
//    json jsonPerson;
//    jsonPerson["nombre"] = person1->getNombre();
//    jsonPerson["edad"] = person1->getEdad();
//    jsonPerson["id"] = person1->getId();
//
//    string personaSerializado = jsonPerson.dump(4);
//
//    // Convertir desde JSON: copia cada valor desde un objeto de JSON (DESEREALIZAR)
//    Person person22;
//    person22.setNombre(jsonPerson["nombre"]);
//    person22.setEdad(jsonPerson["edad"]);
//    person22.setId(jsonPerson["id"]);
//
//    // Convertir de un String de JSON (DESEREALIZAR)
//    string data = R"({
//                        "nombre": "Mike",
//                        "edad": 30,
//                        "id" : 1
//                    })";
//
//    json jsonData = json::parse(data);
//    Person person33;
//    person33.setNombre(jsonData["nombre"]);
//    person33.setEdad(jsonData["edad"]);
//    person33.setId(jsonData["id"]);
//
//
//    //guarda el archivo
//    ofstream archivo;
//    try { archivo.open("ArchivoTexto.json", ios::binary); }
//    catch (ifstream::failure a) {
//        cout << "no se pudo abrir el archivo";
//        exit(1);
//    }
//    //para la lista de personas poner:archivo << personasSerializando<< '\n';
//    archivo << personaSerializado << '\n';
//    archivo.close();
//
//    //lee el archivo
//    ifstream archivo1;
//    string texto;
//    try { archivo1.open("ArchivoTexto.json", ios::binary); }
//    catch (ifstream::failure a) {
//        cout << "no se pudo abrir el archivo";
//        exit(1);
//    }
//    cout << endl;
//    while (!archivo1.eof()) {
//        getline(archivo1, texto);
//        cout << texto << endl;
//    }
//    archivo1.close();
//
//    return 0;
//}
