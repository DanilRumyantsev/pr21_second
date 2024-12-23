#include "child.h"

Child::Child() {
	setHumanFirstName("undefined");
	setHumanLastName("undefined");
	setHumanAge(0);
	setHumanWeight(0);
	setHumanHeight(0);
	this->_studyplace = "undefined";
}

Child::Child(std::string FirstName, std::string LastName, int age, int weight, int height, std::string studyplace) :
	IHuman(FirstName, LastName, age, weight, height), _studyplace(correctAlpha(studyplace)) {
}

Child::Child(std::string FirstName, std::string LastName, int age, int weight, int height) :
	IHuman(FirstName, LastName, age, weight, height), _studyplace("Undefined") {
}
Child::Child(std::string FirstName, std::string LastName, int age, int weight) :
	IHuman(FirstName, LastName, age, weight, 0), _studyplace("Undefined") {
}
Child::Child(std::string FirstName, std::string LastName, int age) :
	IHuman(FirstName, LastName, age, 0, 0), _studyplace("Undefined") {
}
Child::Child(std::string FirstName, std::string LastName) :
	IHuman(FirstName, LastName, 0, 0, 0), _studyplace("Undefined") {
}
Child::Child(std::string FirstName) :
	IHuman(FirstName, "Undefined", 0, 0, 0), _studyplace("Undefined") {
}

void Child::setStudyPlace(std::string studyplace) {
	this->_studyplace = correctAlpha(studyplace);
}

std::string Child::getStudyPlace() {
	return _studyplace;
}

Child::~Child() {};

void Child::display() {
	IHuman::display();
	std::cout << "Study place is: " << _studyplace << std::endl
		<< "______________________________________" << std::endl;
}

void Child::readFromConsole() {
	IHuman::readFromConsole();
	std::cout << "Input the study place: "; std::cin >> _studyplace;
	std::cout << "______________________________________" << std::endl;
}

void Child::writeToFile() {
	std::ofstream out;
	out.open("Human.txt", std::ios::app);
	if (out.is_open()) {
		out << "First name: " << getHumanFirstName() << std::endl
			<< "Last name: " << getHumanLastName() << std::endl
			<< "Age: " << getHumanAge() << std::endl
			<< "Weight: " << getHumanWeight() << std::endl
			<< "Height: " << getHumanHeight() << std::endl
			<< "The studyplace: " << _studyplace << std::endl
			<< "__________________" << std::endl;
	}
	out.close();
}