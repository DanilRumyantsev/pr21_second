#pragma once
#include <iostream>
#include "age.h"
#include <fstream>
#include <string>
using namespace age;

class IHuman {
private:
    std::string _humanFname;
    std::string _humanLname;
    int _humanAge;
    int _humanWeight;
    int _humanHeight;

public:
    //constructor
    IHuman();
    IHuman(std::string FirstName, std::string LastName, int age, int weight, int height);
    IHuman(std::string FirstName, std::string LastName, int age, int weight);
    IHuman(std::string FirstName, std::string LastName, int age);
    IHuman(std::string Firstname, std::string LastName);
    IHuman(std::string Firstname);

    //destructor
    virtual ~IHuman();

    //overloaded operators
    IHuman operator++();
    IHuman operator--();

    bool operator< (IHuman other);
    bool operator> (IHuman other);

    friend std::ostream& operator<< (std::ostream& output, IHuman h);

    //methods
    void IMT();
    void Birthday();
    virtual void display();
    virtual void readFromConsole() = 0;
    virtual void writeToFile();
    void NameChange();

    //getters and setters
    void setHumanFirstName(std::string FirstName);
    std::string getHumanFirstName();

    void setHumanLastName(std::string LastName);
    std::string getHumanLastName();

    void setHumanAge(int age);
    int getHumanAge();

    void setHumanWeight(int weight);
    int getHumanWeight();

    void setHumanHeight(int height);
    int getHumanHeight();


};