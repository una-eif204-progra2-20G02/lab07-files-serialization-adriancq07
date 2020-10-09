//
// Created by acq07 on 08/10/2020.
//

#ifndef MY_PROJECT_NAME_IPERSON_H
#define MY_PROJECT_NAME_IPERSON_H
#include  "Person.h"

class IPerson{
public:
    virtual void addPerson(Person&)=0;
    virtual void erase(int)=0;
    ~IPerson();

};
#endif //MY_PROJECT_NAME_IPERSON_H
