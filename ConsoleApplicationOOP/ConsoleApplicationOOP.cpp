// ConsoleApplicationOOP.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include "GoodBasic.h"
#include "Freezer.h"

int main()
{
    setlocale(LC_ALL, "Russian");

   //std::cout << "Hello Привет World!\n";
    Freezer freezer01(1, 234, "Freezer Samsung", "Good thing...", 2, 34);
    Freezer* pointerFreezer01 = &freezer01;

   // freezer01.printAllInfo();
    //pointerFreezer01->printAllInfo();
    freezer01.toString();
    //int array01[5] = {1,2,3,4,5};
    //int* pointerToArray = array01;
   // cout << pointerToArray[2];
   // freezer01.printString(freezer01.getName());
    //freezer01.goodsPublicFunction();
    //Универсальный указатель
    GoodBasic* universalPointer01 = new Freezer;
    static_cast<Freezer*>(universalPointer01)->toString();
}
