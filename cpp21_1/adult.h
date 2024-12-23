#pragma once
#include "human.h"

class Adult : virtual public IHuman {
public:
	Adult();
	Adult(std::string FirstName, std::string LastName, int age, int weight, int height, std::string workplace);
	Adult(std::string FirstName, std::string LastName, int age, int weight, int height);
	Adult(std::string FirstName, std::string LastName, int age, int weight);
	Adult(std::string FirstName, std::string LastName, int age);
	Adult(std::string FirstName, std::string LastName);
	Adult(std::string FirstName);

	~Adult();

	void setWorkplace(std::string workplace);
	std::string getWorkplace();

	void display();
	void readFromConsole();
	void writeToFile();

private:
	std::string _workplace;
};