#include "WorkClass.h"
void WorkClass::startWork() {
    std::cout << "Hello Привет World!\n";

    GoodBasic* universalPointer01 = new Freezer(2);
    static_cast<Freezer*>(universalPointer01)->toString();
    GoodBasic* universalPointer02 = new Freezer(2, 222);
    static_cast<Freezer*>(universalPointer02)->toString();
    GoodBasic* universalPointer03 = new Freezer(3, 3333, "NewName");
    static_cast<Freezer*>(universalPointer03)->toString();
    GoodBasic* universalPointer04 = new Freezer(4, 4444, "NewName", "Some description", 3);
    static_cast<Freezer*>(universalPointer04)->toString();
    GoodBasic* universalPointer05 = new Freezer(5, 55555, "NewName5", "Some description5", 5, 
        333, "white", "country", 3);
    static_cast<Freezer*>(universalPointer05)->toString();

   /*Родительский класс GoodBasic включает 4 поля, обязательные для всех предметов
       Родительский класс Электроприборы мог бы включать обязат. для всех ЭЛЕКТРОприборов
                поля Энергопотребление, шумноть, класс энергоэкономии и другие
       Конечный дочерний класс Холодильник получает от двух родителей поля и методы, обязательные для
       предметов и электроприборов и реализует свои личные, которых не может быть у других классов
       предметов.*/
}