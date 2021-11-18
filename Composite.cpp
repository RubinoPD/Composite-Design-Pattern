//
// Created by Robert Kaskur on 2021-11-16.
//

#include <string>
#include "Composite.h"

Composite::Composite(const std::string &name) : name(name) {}

double Composite::GetPrice() {

    double totalPrice = 0;
    for(Component* c: components) {
        totalPrice += c->GetPrice();
    }

    return totalPrice;
}

void Composite::GetInfo() {

    std::cout << "--------------------------------------" << std::endl;
    std::cout << name << std::endl;
    std::cout << "--------------------------------------" << std::endl;

    for (Component *c: components) {
        c->GetInfo();
    }
}

void Composite::PutComponent(Component *component) {
    components.emplace_back(component);
}
