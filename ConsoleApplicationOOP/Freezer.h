#pragma once
#include "GoodBasic.h"
class Freezer : public GoodBasic
{
private:
    int _cameras;
    int _weight;
    string _color;
    string _counry;
    int _doors;
public:
    Freezer();
    Freezer(int id);
    Freezer(int id, int price);
    Freezer(int id, int price, string name);
    Freezer(int id, int price, string name, 
        string description, int cam);
    Freezer(int id, int price, string name, 
        string description, int cam, int weight, 
        string color, string counry, int doors);
    void fillProperties(int cameras, int weight, 
        string color, string counry, int doors);

    int getCameras();

    int getWeight();

    void setCameras(int cam);

    void setWeight(int weight);

    void printHello();

    void printString(string dataToPrint);

    void toString();
};

