// ConsoleApplicationOOP.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include "GoodBasic.h"
using namespace std;

class FreezerOld : public GoodBasic{
private:
    int _itemPrice;
    string _itemName;
    string _itemDescription;

public:
    FreezerOld(int id, int price, string name, string description) : 
        GoodBasic{ id } {
        _itemPrice = price;
        _itemName = name;
        _itemDescription = description;
    }

    int getPrice() {
        return _itemPrice;
    }

    void setPrice(int newPrice) {
        _itemPrice = newPrice;
    }

    string getName() {
        return _itemName;
    }

    void setName(string name) {
        _itemName = name;
    }

    string getDescription() {
        return _itemDescription;
    }

    void setDescription(string descr) {
        _itemDescription = descr;
    }

    void printHello() {
        std::cout << "Hello from class!\n";
    }

    void printString(string dataToPrint) {
        std::cout << dataToPrint + "\n";
    }

    void printAllInfo() {
        std::cout << " Item N" << GoodBasic::getItemId() << ":" << _itemName << "   Description:" << _itemDescription << "  Price:" << getItemPrice() << "\n";
    }
    //setters and getters

    int getItemPrice() {
        return _itemPrice;
    }
};

int main()
{
    std::cout << "Hello World!\n";
    FreezerOld freezer01(1, 234, "Freezer Samsung", "Good thing...");
    FreezerOld* pointerFreezer01 = &freezer01;

    freezer01.printAllInfo();
    pointerFreezer01->printAllInfo();
    //int array01[5] = {1,2,3,4,5};
    //int* pointerToArray = array01;
   // cout << pointerToArray[2];
   // freezer01.printString(freezer01.getName());
    //freezer01.goodsPublicFunction();
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
