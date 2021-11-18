//
// Created by Robert Kaskur on 2021-11-16.
//

#include <string>
#include "Leaf.h"

Leaf::Leaf(const std::string &name, double price) : name(name), price(price) {}

double Leaf::GetPrice() {
    return price;
}

void Leaf::GetInfo() {
    std::cout << name << ", " << price <<std::endl;
}
