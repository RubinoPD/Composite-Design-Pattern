//
// Created by Robert Kaskur on 2021-11-16.
//

#ifndef UNTITLED1_LEAF_H
#define UNTITLED1_LEAF_H

#include <iostream>
#include <string>
#include "Component.h"

class Leaf : public virtual Component {

public:
    Leaf(const string &name, double price);

    double GetPrice() override;

    void GetInfo() override;

private:
    string name;
    double price;

};


#endif //UNTITLED1_LEAF_H
