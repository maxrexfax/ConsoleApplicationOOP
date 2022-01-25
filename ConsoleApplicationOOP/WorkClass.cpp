#include "WorkClass.h"
void WorkClass::startWork() {
    std::cout << "Hello Привет World!\n";

    GoodBasic* universalPointer01 = new Chipsi;
    static_cast<GoodBasic*>(universalPointer01)->toString();
    static_cast<Chipsi*>(universalPointer01)->toString();


  //new data for pull request

    int aaaa01 = 100;
    string textToMove = "move to freezer branch";

   /*Родительский класс GoodBasic включает 4 поля, обязательные для всех предметов
       Родительский класс Электроприборы мог бы включать обязат. для всех ЭЛЕКТРОприборов
                поля Энергопотребление, шумноть, класс энергоэкономии и другие
       Конечный дочерний класс Холодильник получает от двух родителей поля и методы, обязательные для
       предметов и электроприборов и реализует свои личные, которых не может быть у других классов
       предметов.*/
}