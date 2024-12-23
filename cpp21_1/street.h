#pragma once
#include "human.h"
#include "adult.h"
#include "child.h"

class Street : public Adult, Child {
public:
    // конструкторы
    Street();
    Street(std::string FirstName, std::string LastName, int age, int weight, int height, std::string workplace, std::string studyplace, std::string livingStreet);

    // деструктор
    ~Street();

    // геттеры и сеттеры
    void setLivingStreet(std::string livingStreet);
    std::string getLivingStreet();

    // перегруженные операторы
    Street operator++();
    Street operator--();
    bool operator< (Street other);
    bool operator> (Street other);
    friend std::ostream& operator<< (std::ostream& output, Street s);

    // метод
    void readFromConsole();
    void display();
    void writeToFile();
private:
    std::string _livingStreet;
};
