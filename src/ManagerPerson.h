//
// Created by acq07 on 08/10/2020.
//

#ifndef MY_PROJECT_NAME_MANAGERPERSON_H
#define MY_PROJECT_NAME_MANAGERPERSON_H
#include "Person.h"
#include <vector>
#include "IPerson.h"

class ManagerPerson:public IPerson {
public:
   ManagerPerson();
//   ManagerPerson(Person*);
   void addPerson(Person&)override;
   void erase(int) override;

private:
    Person* person;
    vector<Person> personList;
};


#endif //MY_PROJECT_NAME_MANAGERPERSON_H
