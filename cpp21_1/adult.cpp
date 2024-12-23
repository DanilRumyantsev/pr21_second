#include "adult.h"

Adult::Adult() {
	setHumanFirstName("undefined");
	setHumanLastName("undefined");
	setHumanAge(0);
	setHumanWeight(0);
	setHumanHeight(0);
	this->_workplace = "undefined";
}

Adult::Adult(std::string FirstName, std::string LastName, int age, int weight, int height, std::string workplace) :
	IHuman(FirstName, LastName, age, weight, height), _workplace(correctAlpha(workplace)) {
}

Adult::Adult(std::string FirstName, std::string LastName, int age, int weight, int height) :
	IHuman(FirstName, LastName, age, weight, height), _workplace("Undefined") {
}
Adult::Adult(std::string FirstName, std::string LastName, int age, int weight) :
	IHuman(FirstName, LastName, age, weight, 0), _workplace("Undefined") {
}
Adult::Adult(std::string FirstName, std::string LastName, int age) :
	IHuman(FirstName, LastName, age, 0, 0), _workplace("Undefined") {
}
Adult::Adult(std::string FirstName, std::string LastName) :
	IHuman(FirstName, LastName, 0, 0, 0), _workplace("Undefined") {
}
Adult::Adult(std::string FirstName) :
	IHuman(FirstName, "Undefined", 0, 0, 0), _workplace("Undefined") {
}

void Adult::setWorkplace(std::string workplace) {
	this->_workplace = correctAlpha(workplace);
}

std::string Adult::getWorkplace() {
	return _workplace;
}

Adult::~Adult() {}

void Adult::display() {
	IHuman::display();
	std::cout << "Workplace is: " << _workplace << std::endl
		<< "______________________________________" << std::endl;
}

void Adult::readFromConsole() {
	IHuman::readFromConsole();
	std::cout << "Input the workplace: "; std::cin >> _workplace;
	std::cout << "______________________________________" << std::endl;
}

void Adult::writeToFile() {
	std::ofstream out;
	out.open("Human.txt", std::ios::app);
	if (out.is_open()) {
		out << "First name: " << getHumanFirstName() << std::endl
			<< "Last name: " << getHumanLastName() << std::endl
			<< "Age: " << getHumanAge() << std::endl
			<< "Weight: " << getHumanWeight() << std::endl
			<< "Height: " << getHumanHeight() << std::endl
			<< "The workpace: " << _workplace << std::endl
			<< "__________________" << std::endl;
	}
	out.close();
}