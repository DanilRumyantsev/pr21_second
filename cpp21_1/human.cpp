#include "human.h"

IHuman::IHuman() {
    this->_humanFname = "undefined";
    this->_humanLname = "undefined";
    this->_humanAge = 0;
    this->_humanWeight = 0;
    this->_humanHeight = 0;
}

IHuman::IHuman(std::string FirstName, std::string LastName, int age, int weight, int height) : _humanFname(correctAlpha(FirstName)),
_humanLname(correctAlpha(LastName)), _humanAge(correctCount(age)), _humanWeight(correctCount(weight)), _humanHeight(correctCount(height)) {
}

IHuman::IHuman(std::string FirstName, std::string LastName, int age, int weight) : IHuman(FirstName, LastName, age, weight, 0) {}
IHuman::IHuman(std::string FirstName, std::string LastName, int age) : IHuman(FirstName, LastName, age, 0, 0) {}
IHuman::IHuman(std::string FirstName, std::string LastName) : IHuman(FirstName, LastName, 0, 0, 0) {}
IHuman::IHuman(std::string FirstName) : IHuman(FirstName, "Undefined", 0, 0) {}

IHuman::~IHuman() {}

void IHuman::setHumanAge(int age) {
    this->_humanAge = correctCount(age);
}

int IHuman::getHumanAge() {
    return _humanAge;
}

void IHuman::setHumanFirstName(std::string FirstName) {
    this->_humanFname = correctAlpha(FirstName);
}

std::string IHuman::getHumanFirstName() {
    return _humanFname;
}

void IHuman::setHumanLastName(std::string LastName) {
    this->_humanLname = correctAlpha(LastName);
}

std::string IHuman::getHumanLastName() {
    return _humanLname;
}

void IHuman::setHumanWeight(int weight) {
    this->_humanWeight = correctCount(weight);
}

int IHuman::getHumanWeight() {
    return _humanWeight;
}

void IHuman::setHumanHeight(int height) {
    this->_humanHeight = correctCount(height);
}

int IHuman::getHumanHeight() {
    return _humanHeight;
}

void IHuman::IMT() {
    float a = 2.205f;
    float b = 39.37f;
    int weight = _humanWeight;
    int height = _humanHeight;
    float IMT = (weight / a) / ((height / b) * (height / b));

    std::cout << "IMT = " << IMT << std::endl;
    std::cout << "___________________________________________" << std::endl;
}

void IHuman::Birthday() {
    int age = _humanAge;
    int year = 2024;
    int birthday = year - age;

    std::cout << "Birthday = " << birthday << std::endl;
    std::cout << "___________________________________________" << std::endl;
}

void IHuman::display() {
    std::cout << "Human first name = " << _humanFname << std::endl;
    std::cout << "Human last name = " << _humanLname << std::endl;
    std::cout << "Human age = " << _humanAge << std::endl;
    std::cout << "Human weight = " << _humanWeight << std::endl;
    std::cout << "Human height = " << _humanHeight << std::endl;
    std::cout << "___________________________________________" << std::endl;
}

void IHuman::readFromConsole() {
    std::cout << "Human first name = "; std::cin >> _humanFname;
    std::cout << "Human last name = "; std::cin >> _humanLname;
    std::cout << "Human age = "; std::cin >> _humanAge;
    std::cout << "Human weight = "; std::cin >> _humanWeight;
    std::cout << "Human height = "; std::cin >> _humanHeight;
    std::cout << "___________________________________________" << std::endl;
}

void IHuman::writeToFile() {}

void IHuman::NameChange() {
    int answer;
    std::string newName;
    std::cout << "Change name? 1 - yes, 2 - no: ";
    std::cin >> answer;
    if (answer == 1) {
        std::cout << "Input new First name: ";
        std::cin >> newName;
        std::cout << "Write" << std::endl;
        setHumanFirstName(newName);
        std::cout << "" << std::endl;
    }
    if (answer == 2) {
        std::cout << "No changes" << std::endl;
        std::cout << "" << std::endl;
    }

}