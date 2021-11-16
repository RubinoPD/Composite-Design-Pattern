//
// Created by Robert Kaskur on 2021-11-16.
//

#ifndef UNTITLED1_COMPOSITE_H
#define UNTITLED1_COMPOSITE_H

#include <iostream>
#include <vector>
#include "Component.h"

class Composite : public  virtual Component{
public:
    Composite(const string &name);

    double GetPrice() override;

    void GetInfo() override;

    void PutComponent(Component *component);
private:
    string name;
    std::vector<Component*> components;
};


#endif //UNTITLED1_COMPOSITE_H
