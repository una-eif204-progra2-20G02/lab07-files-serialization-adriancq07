//
// Created by acq07 on 08/10/2020.
//

#include "ManagerPerson.h"
ManagerPerson::ManagerPerson(){
}

//ManagerPerson::ManagerPerson(Person* person) {
//    this->person = person;
//}

void ManagerPerson::addPerson(Person& person) {
    personList.push_back(person);
}

void ManagerPerson::erase(int pos) {
    assert(!personList.empty());
    personList.erase(personList.begin() + pos);
}