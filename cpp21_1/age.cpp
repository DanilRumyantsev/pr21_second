#include "age.h"
#include <iostream>

std::string age::correctAlpha(std::string str) {
	for (int i = 0; i < str.length(); ++i) {
		if (!isalpha(str.at(i)) && !ispunct(str.at(i))) {
			std::cout << "Incorrect input data" << std::endl
				<< "_________" << std::endl;
			return "undefined";
		}
	}
	if (!(str == "undefined")) return str;
}

int age::correctCount(int count) {
	if (count >= 0) return count;
	else {
		std::cout << "Incorrect input data" << std::endl << "____________" << std::endl;
		return 0;
	}
}