// ConsoleApplicationOOP.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include "GoodBasic.h"

class FreezerOld : public GoodBasic{
private:
    int _cameras;
    int _weight;
    

public:
    
    FreezerOld() :
        GoodBasic{ 0, 1, "noname", "nodescription" } {
        _cameras = 1;
        _weight = 10;
    }

    FreezerOld(int id, int price, string name, string description, int cam, int weight) : 
        GoodBasic{ id, price, name, description } {
        _cameras = cam;
        _weight = weight;
    }   

    int getCameras() {
        return _cameras;
    }

    int getWeight() {
        return _weight;
    }

    void setCameras(int cam) {
        _cameras = cam;
    }

    void setWeight(int weight) {
        _weight = weight;
    }

    void printHello() {
        std::cout << "Hello from class!\n";
    }

    void printString(string dataToPrint) {
        std::cout << dataToPrint + "\n";
    }   

    void toString() {
        cout << "toString inside FreezeOld: id" << getItemId() << " Price:" << getPrice() << " Name:" << getName() << " Descr:" << getDescription() << " Sections:" << getCameras() << " Weight:" << getWeight() << "\n";
    }
   

};

class Software {
private:
    int _licenseYears;
    int _computersQuantity;
public:

};

int main()
{
    setlocale(LC_ALL, "Russian");

   //std::cout << "Hello Привет World!\n";
    FreezerOld freezer01(1, 234, "Freezer Samsung", "Good thing...", 2, 34);
    FreezerOld* pointerFreezer01 = &freezer01;

   // freezer01.printAllInfo();
    //pointerFreezer01->printAllInfo();
    freezer01.toString();
    //int array01[5] = {1,2,3,4,5};
    //int* pointerToArray = array01;
   // cout << pointerToArray[2];
   // freezer01.printString(freezer01.getName());
    //freezer01.goodsPublicFunction();
    //Универсальный указатель
    GoodBasic* universalPointer01 = new FreezerOld;
    static_cast<FreezerOld*>(universalPointer01)->toString();
}
