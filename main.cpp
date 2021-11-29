#include <iostream>
#include "Composite.h"
#include "Leaf.h"

int main() {

    auto *car = new Composite("Alfa Romeo");

    auto *model = new Composite("Model"); // 159, 156, GT, Giulia, Stelvio.
    auto *electronics = new Composite("Electronics"); // parktronics, lane-assist, heated-seats.
    auto *interior = new Composite("Interior"); // leather or cloth.
    auto *exterior = new Composite("Exterior"); // R17, R18 or R19.
    auto *fuel = new Composite("Fuel"); // Diesel, Petrol or Electric1

    auto *model_156 = new Leaf("156", 2000.99);
    auto *model_159 = new Leaf("159", 3500.99);
    auto *model_GT = new Leaf("GT", 3000.99);
    auto *model_giulia = new Leaf("Giulia", 5000.99);
    auto *model_stelvio = new Leaf("Stelvio", 8000.99);

    auto *el_parktronics = new Leaf("Parktronics", 200.99);
    auto *el_lane_assist = new Leaf("Lane Assist", 150.99);
    auto *el_heated_seats = new Leaf("Heated Seats", 100.99);
    auto *el_none = new Leaf("None", 0.0);

    auto *interior_cloth = new Leaf("Cloth", 100.99);
    auto *interior_leather = new Leaf("Leather", 400.99);

    auto *exterior_wheels_r17 = new Leaf("R17", 150.99);
    auto *exterior_wheels_r18 = new Leaf("R18", 200.99);
    auto *exterior_wheels_r19 = new Leaf("R19", 250.99);

    auto *fuel_petrol = new Leaf("Petrol", 300.99);
    auto *fuel_diesel = new Leaf("Diesel", 200.99);
    auto *fuel_electric = new Leaf("Eletctric", 500.99);

    int menu_num = 1;

    while(menu_num != 0) {
        std::cout << "-------------------------------------------------------" << std::endl;
        std::cout << "          Susideliokite savo Alfa Romeo        " << std::endl;
        std::cout << "-------------------------------------------------------" << std::endl;

        std::cout << "1. Pasirinkite modeli." << std::endl;
        std::cout << "2. Pasirinkite elektronika." << std::endl;
        std::cout << "3. Pasirinkite interjera." << std::endl;
        std::cout << "4. Pasirinkite eksterjera." << std::endl;
        std::cout << "5. Pasirinkite degalu tipa." << std::endl;
        std::cout << "6. Perziureti savo pasirinkta komplektacija" << std::endl;
        std::cout << "0. Iseiti is komplektavimo." << std::endl;

        std::cout << "Iveskite meniu punkto numeri: ";
        std::cin >> menu_num;

        int num = 1;

        switch(menu_num) {
            case 1:
                std::cout << "------------------------------------------" << std::endl;
                std::cout << "          Pasirinkite modeli       " << std::endl;
                std::cout << "------------------------------------------" << std::endl;
                std::cout << "1. 156" << std::endl;
                std::cout << "2. 159" << std::endl;
                std::cout << "3. GT" << std::endl;
                std::cout << "4. Giulia" << std::endl;
                std::cout << "5. Stelvio" << std::endl;
            {

                while(num != 0) {
                    std::cout << "Iveskite meniu punkto numeri: ";
                    std::cin >> num;

                    switch (num) {
                        case 1:
                            model->PutComponent(model_156);
                            num = 0;
                            break;
                        case 2:
                            model->PutComponent(model_159);
                            num = 0;
                            break;
                        case 3:
                            model->PutComponent(model_GT);
                            num = 0;
                            break;
                        case 4:
                            model->PutComponent(model_giulia);
                            num = 0;
                            break;
                        case 5:
                            model->PutComponent(model_stelvio);
                            num = 0;
                            break;
                        default:
                            std::cout << "Iveskite tinkama numeri" << std::endl;
                            break;
                    }
                }

            }
                break;

            case 2:
                std::cout << "------------------------------------------" << std::endl;
                std::cout << "          Pasirinkite elektronika       " << std::endl;
                std::cout << "------------------------------------------" << std::endl;
                std::cout << "1. Parktronics" << std::endl;
                std::cout << "2. Lane Assist" << std::endl;
                std::cout << "3. Heated Seats" << std::endl;
                std::cout << "4. None" << std::endl;
            {
                while(num != 0) {
                    std::cout << "Iveskite meniu punkto numeri: ";
                    std::cin >> num;
                    switch (num) {
                        case 1:
                            electronics->PutComponent(el_parktronics);
                            num = 0;
                            break;
                        case 2:
                            electronics->PutComponent(el_lane_assist);
                            num = 0;
                            break;
                        case 3:
                            electronics->PutComponent(el_heated_seats);
                            num = 0;
                            break;
                        case 4:
                            electronics->PutComponent(el_none);
                            num = 0;
                            break;
                        default:
                            std::cout << "Iveskite tinkama numeri" << std::endl;
                            break;
                    }
                }
            }
                break;
            case 3:
                std::cout << "------------------------------------------" << std::endl;
                std::cout << "          Pasirinkite interjera       " << std::endl;
                std::cout << "------------------------------------------" << std::endl;
                std::cout << "1. Leather" << std::endl;
                std::cout << "2. Cloth" << std::endl;

                while(num != 0) {
                    std::cout << "Iveskite meniu punkto numeri: ";
                    std::cin >> num;
                    switch (num) {
                        case 1:
                            interior->PutComponent(interior_leather);
                            num = 0;
                            break;
                        case 2:
                            interior->PutComponent(interior_cloth);
                            num = 0;
                            break;
                        default:
                            std::cout << "Iveskite tinkama numeri" << std::endl;
                            break;
                    }
                }

                break;
            case 4:
                std::cout << "------------------------------------------" << std::endl;
                std::cout << "          Pasirinkite eksterjera       " << std::endl;
                std::cout << "------------------------------------------" << std::endl;
                std::cout << "1. R17" << std::endl;
                std::cout << "2. R18" << std::endl;
                std::cout << "3. R19" << std::endl;

                while(num != 0) {
                    std::cout << "Iveskite meniu punkto numeri: ";
                    std::cin >> num;
                    switch (num) {
                        case 1:
                            exterior->PutComponent(exterior_wheels_r17);
                            num = 0;
                            break;
                        case 2:
                            exterior->PutComponent(exterior_wheels_r18);
                            num = 0;
                            break;
                        case 3:
                            exterior->PutComponent(exterior_wheels_r19);
                            num = 0;
                            break;
                        default:
                            std::cout << "Iveskite tinkama numeri" << std::endl;
                            break;
                    }
                }

                break;
            case 5:
                std::cout << "------------------------------------------" << std::endl;
                std::cout << "          Pasirinkite degalu tipa       " << std::endl;
                std::cout << "------------------------------------------" << std::endl;
                std::cout << "1. Diesel" << std::endl;
                std::cout << "2. Petrol" << std::endl;
                std::cout << "3. Electric" << std::endl;

                while(num != 0) {
                    std::cout << "Iveskite meniu punkto numeri: ";
                    std::cin >> num;
                    switch (num) {
                        case 1:
                            fuel->PutComponent(fuel_diesel);
                            num = 0;
                            break;
                        case 2:
                            fuel->PutComponent(fuel_petrol);
                            num = 0;
                            break;
                        case 3:
                            fuel->PutComponent(fuel_electric);
                            num = 0;
                            break;
                        default:
                            std::cout << "Iveskite tinkama numeri" << std::endl;
                            break;
                    }
                }
                break;
            case 6:
                car->PutComponent(model);
                car->PutComponent(electronics);
                car->PutComponent(interior);
                car->PutComponent(exterior);
                car->PutComponent(fuel);

                std::cout << "Jusu pasirinkta komplektacija:" <<std::endl;
                car->GetInfo();
                std::cout << "-------------------------------------------------------------------------" << std::endl;
                std::cout << "Jusu pasirinktos komplektacijos kaina: " << car->GetPrice() << " EUR" << std::endl;
                std::cout << "-------------------------------------------------------------------------" << std::endl;

                std::cout << "Ar noretumete baigti komplektacija?" << std::endl;
                std::cout << "1. Taip" << std::endl;
                std::cout << "2. Ne" << std::endl;

                while(num !=0){
                    std::cout << "Irasykite 1 arba 2" << std::endl;
                    std::cin >> num;
                    switch (num) {
                        case 1:
                            exit(3);
                            break;
                        case 2:
                            num = 0;
                            break;
                        default:
                            std::cout << "Iveskite tinkama numeri" << std::endl;
                            break;
                    }
                }
                break;
            default:
                std::cout << "Just ivedete " << menu_num << ". " << "Prasau iveskite skaiciu nuo 0 iki 5." << std::endl;
                break;
        }

    }

    return 0;
}
