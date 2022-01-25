#include "Freezer.h"
Freezer::Freezer() :
    GoodBasic{ 0, 1, "noname", "nodescription" } {
    fillProperties(1, 11, "color", "counry", 2);
}

Freezer::Freezer(int id) :
    GoodBasic{ id, 1, "noname", "nodescription" } {
    fillProperties(1, 11, "color", "counry", 2);
}

Freezer::Freezer(int id, int price) :
    GoodBasic{ id, price, "noname", "nodescription" } {
    fillProperties(1, 11, "color", "counry", 2);
}

Freezer::Freezer(int id, int price, string name) :
    GoodBasic{ id, price, name, "nodescription" } {
    fillProperties(1, 11, "color", "counry", 2);
}

Freezer::Freezer(int id, int price, string name, 
    string description, int cam) :
    GoodBasic{ id, price, name, description } {
    fillProperties(cam, 11, "color", "counry", 2);
}

Freezer::Freezer(int id, int price, string name, 
    string description, int cam, int weight,
    string color, string counry, int doors) :
    GoodBasic{ id, price, name, description } {
    fillProperties(cam, weight, color, counry, doors);    
}

void Freezer::fillProperties(int cameras, int weight, 
    string color, string counry, int doors) {
    _cameras = cameras;
    _weight = weight;
    _color = color;
    _counry = counry;
    _doors = doors;
}

int Freezer::getCameras() {
    return _cameras;
}

int Freezer::getWeight() {
    return _weight;
}

void Freezer::setCameras(int cam) {
    if (cam > 0 && cam < 5) {
        _cameras = cam;
    }
    else {
        _cameras = 2;
    }
    
}

void Freezer::setWeight(int weight) {
    _weight = weight;
}

void Freezer::printHello() {
    std::cout << "Hello from class!\n";
}

void Freezer::printString(string dataToPrint) {
    std::cout << dataToPrint + "\n";
}

void Freezer::toString() {
    cout << "toString inside FreezeOld: id:" << getItemId() << " Price:" << getPrice() << " Name:" << getName() << " Descr:" << getDescription() << " Sections:" << getCameras() << " Weight:" << getWeight() << "\n";
}