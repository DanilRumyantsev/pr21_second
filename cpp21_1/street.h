#pragma once
#include "human.h"
#include "adult.h"
#include "child.h"

class Street : public Adult, Child {
public:
    // ������������
    Street();
    Street(std::string FirstName, std::string LastName, int age, int weight, int height, std::string workplace, std::string studyplace, std::string livingStreet);

    // ����������
    ~Street();

    // ������� � �������
    void setLivingStreet(std::string livingStreet);
    std::string getLivingStreet();

    // ������������� ���������
    Street operator++();
    Street operator--();
    bool operator< (Street other);
    bool operator> (Street other);
    friend std::ostream& operator<< (std::ostream& output, Street s);

    // �����
    void readFromConsole();
    void display();
    void writeToFile();
private:
    std::string _livingStreet;
};
