#include "Street.h"
using namespace std;

// деструктор
Street::~Street() {}

// конструктор
Street::Street() : Street("undefined", "undefined", 0, 0, 0, "undefined", "undefined", "undefined") {}

// список инициализации
Street::Street(std::string FirstName, std::string LastName, int age, int weight, int height, std::string workplace, std::string studyplace, std::string livingStreet) :
    IHuman(FirstName, LastName, age, weight, height), Adult(workplace), Child(studyplace), _livingStreet(livingStreet) {
}

// геттеры и сеттеры
void Street::setLivingStreet(std::string livingStreet) {
    this->_livingStreet = correctAlpha(livingStreet);
}
std::string Street::getLivingStreet() {
    return _livingStreet;
}

// перегруженные операторы 
Street Street::operator++() {
    setHumanWeight(getHumanWeight() + 1);
    return *this;
}

bool Street::operator< (Street other) {
    return this->getHumanWeight() < other.getHumanWeight();
}

bool Street::operator> (Street other) {
    return this->getHumanWeight() > other.getHumanWeight();
}

ostream& operator<< (ostream& output, Street s) {
    setlocale(LC_ALL, "");
    output << "First Name: " << s.getHumanFirstName() << endl
        << "Last Name: " << s.getHumanLastName() << endl
        << "Age: " << s.getHumanAge() << endl
        << "Heigth: " << s.getHumanHeight() << endl
        << "Weight: " << s.getHumanWeight() << endl
        << "Workplace: " << s.getWorkplace() << endl
        << "Street: " << s.getLivingStreet() << endl
        << "__________________" << endl;
    return output;
}

// методы
void Street::readFromConsole() {
    IHuman::readFromConsole();
    std::cout << "Input the workplace: ";
    std::string workplace; std::cin >> workplace; setWorkplace(workplace);
    std::cout << "Input the studyplace: ";
    std::string studyplace; std::cin >> studyplace; setStudyPlace(studyplace);
    std::cout << "Input the livingstreet: "; std::cin >> _livingStreet;
}

void Street::display() {
    IHuman::display();
    cout << "The workplace: " << getWorkplace() << endl;
    cout << "The studyplace: " << getStudyPlace() << endl;
    cout << "Street: " << _livingStreet << endl;
}

void Street::writeToFile() {
    std::ofstream out;
    out.open("Human.txt", std::ios::app);
    if (out.is_open()) {
        out << "First Name: " << getHumanFirstName() << endl
            << "Last Name: " << getHumanLastName() << endl
            << "Age: " << getHumanAge() << endl
            << "Height: " << getHumanHeight() << endl
            << "Weight: " << getHumanWeight() << endl
            << "Workplace: " << getWorkplace() << endl
            << "Livingstreet: " << _livingStreet << endl
            << "__________________" << endl;
    }
    out.close();
}