#pragma once
#include "human.h"

class Child : virtual public IHuman {
public:
	Child();
	Child(std::string FirstName, std::string LastName, int age, int weight, int height, std::string studyplace);
	Child(std::string FirstName, std::string LastName, int age, int weight, int height);
	Child(std::string FirstName, std::string LastName, int age, int weight);
	Child(std::string FirstName, std::string LastName, int age);
	Child(std::string FirstName, std::string LastName);
	Child(std::string FirstName);

	void setStudyPlace(std::string studyplace);
	std::string getStudyPlace();

	void display();
	void readFromConsole();
	void writeToFile();

	~Child();

private:
	std::string _studyplace;
};