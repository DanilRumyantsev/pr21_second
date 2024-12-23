#include <iostream>
#include <fstream>
#include "Street.h"
using namespace std;

int main() {
	Adult* adu1 = new Adult("Test", "Test", 0, 1, 1.1f, "Test");
	Child* chi2 = new Child;
	Adult* adu3 = new Adult;
	Child* chi4 = new Child;
	Street* ani5 = new Street;

	IHuman** arr = new IHuman * [5] {adu1, chi2, adu3, chi4, ani5};

	bool start = true;
	do
	{
		setlocale(LC_ALL, "");
		std::cout
			<< "Выберите животное: " << std::endl
			<< "1 - домашнее" << std::endl << "2 - дикое" << std::endl
			<< "3 - домашнее" << std::endl << "4 - дикое" << std::endl
			<< "5 - уличное" << std::endl << "0 - выход\n" << std::endl;

		char choice1;
		std::cin >> choice1;
		switch (choice1)
		{
		case '1':
			arr[0]->readFromConsole();
			std::cout
				<< "Выберите действие: " << std::endl
				<< "1 - кормить" << std::endl << "2 - сменить имя" << std::endl
				<< "3 - вывести информацию" << "0 - выход\n" << std::endl;
			char choice2;
			std::cin >> choice2;
			switch (choice2) {
			case '1':
				arr[0]->IMT();
			case '2':
				arr[0]->NameChange();
			case '3':
				arr[0]->display();
			case '0':
				start = false;
				break;
			default:
				break;
			}
			break;
		case '2':
			arr[1]->readFromConsole();
			std::cout
				<< "Выберите действие: " << std::endl
				<< "1 - кормить" << std::endl << "2 - сменить имя" << std::endl
				<< "3 - вывести информацию\n" << "0 - выход\n" << std::endl;
			char choice3;
			std::cin >> choice3;
			switch (choice3) {
			case '1':
				arr[1]->IMT();
			case '2':
				arr[1]->NameChange();
			case '3':
				arr[1]->display();
			case '0':
				start = false;
				break;
			default:
				break;
			}
			break;
		case '3':
			arr[2]->readFromConsole();
			std::cout
				<< "Выберите действие: " << std::endl
				<< "1 - кормить" << std::endl << "2 - сменить имя" << std::endl
				<< "3 - вывести информацию\n" << "0 - выход\n" << std::endl;
			char choice4;
			std::cin >> choice4;
			switch (choice4) {
			case '1':
				arr[2]->IMT();
			case '2':
				arr[2]->NameChange();
			case '3':
				arr[2]->display();
			case '0':
				start = false;
				break;
			default:
				break;
			}
			break;
		case '4':
			arr[3]->readFromConsole();
			std::cout
				<< "Выберите действие: " << std::endl
				<< "1 - кормить" << std::endl << "2 - сменить имя" << std::endl
				<< "3 - вывести информацию\n" << "0 - выход\n" << std::endl;
			char choice5;
			std::cin >> choice5;
			switch (choice5) {
			case '1':
				arr[3]->IMT();
			case '2':
				arr[3]->NameChange();
			case '3':
				arr[3]->display();
			case '0':
				start = false;
				break;
			default:
				break;
			}
			break;
		case '5':
			arr[4]->readFromConsole();
			std::cout
				<< "Выберите действие: " << std::endl
				<< "1 - кормить" << std::endl << "2 - сменить имя" << std::endl
				<< "3 - вывести информацию\n" << "0 - выход\n" << std::endl;
			char choice6;
			std::cin >> choice6;
			switch (choice6) {
			case '1':
				arr[4]->IMT();
			case '2':
				arr[4]->NameChange();
			case '3':
				arr[4]->display();
			case '0':
				start = false;
				break;
			default:
				break;
			}
			break;
		case '0':
			for (int i = 0; i < 5; ++i)
			{
				arr[i]->display();
			}
			start = false;
			break;
		default:
			break;
		}
	} while (start);

	std::ofstream out("Animal.txt", std::ios::out | std::ios::trunc);
	out.close();

	for (int i = 0; i < 5; ++i)
	{
		arr[i]->writeToFile();
		std::cout << "Имя \"" << arr[i]->getHumanFirstName() << "\" успешно записано в файл." << std::endl;
	}

	delete adu1;
	delete chi2;
	delete adu3;
	delete chi4;
	delete ani5;
	delete[] arr;

	return 0;
};