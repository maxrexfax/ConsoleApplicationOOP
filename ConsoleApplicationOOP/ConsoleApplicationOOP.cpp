// ConsoleApplicationOOP.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include "GoodBasic.h"

class FreezerOld : public GoodBasic{
private:
    //int _itemPrice;
    //string _itemName;
    //string _itemDescription;
    

public:
    
    FreezerOld() :
        GoodBasic{ 0, 1, "noname", "nodescription" } {
    }

    FreezerOld(int id, int price, string name, string description) : 
        GoodBasic{ id, price, name, description } {
    }    

    void printHello() {
        std::cout << "Hello from class!\n";
    }

    void printString(string dataToPrint) {
        std::cout << dataToPrint + "\n";
    }

    void printAllInfo() {
        std::cout << " Item N" << GoodBasic::getItemId() << ":" << getName() << "   Description:" << getDescription() << "  Price:" << getPrice() << "\n";
    }

    void toString() {
        cout << "toString inside FreezeOld:" << getItemId() << " " << getPrice() << " " << getName() << " " << getDescription() << "\n";
    }
   

};

int main()
{
    setlocale(LC_ALL, "Russian");

   //std::cout << "Hello Привет World!\n";
    FreezerOld freezer01(1, 234, "Freezer Samsung", "Good thing...");
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
    static_cast<FreezerOld*>(universalPointer01)->printAllInfo();
}
