#include <iostream>
#include "Composite.h"
#include "Leaf.h"

int main() {

    auto *computer = new Composite("Computer");

    auto *cabinet = new Composite("Cabinet");
    auto *peripherals = new Composite("Peripherals");
    auto *motherboard = new Composite("Motherboard");
    auto *hdd = new Composite("HDD");

    computer->PutComponent(cabinet);
    computer->PutComponent(peripherals);

    auto *cpu = new Leaf("CPU", 219.90);
    auto *ram = new Leaf("RAM", 219.90);
    auto *gpu = new Leaf("GPU", 219.90);

    auto *mouse = new Leaf("Mouse", 219.90);
    auto *keyboard = new Leaf("Keyboard", 219.90);
    auto *monitor = new Leaf("Monitor", 219.90);


    cabinet->PutComponent(hdd);
    cabinet->PutComponent(motherboard);

    peripherals->PutComponent(mouse);
    peripherals->PutComponent(keyboard);
    peripherals->PutComponent(monitor);

    motherboard->PutComponent(cpu);
    motherboard->PutComponent(ram);
    motherboard->PutComponent(gpu);

    computer->GetInfo();


    return 0;
}
