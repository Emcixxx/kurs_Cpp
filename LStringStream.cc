#include <iostream>
#include <sstream> 
#include <string>

int main() {
    std::stringstream ss;

    int wiek = 22;
    double wzrost = 1.86;
    std::string imie = "Jan";
    ss << "Imie: " << imie << ", Wiek: " << wiek << ", Wzrost: " << wzrost;

    std::string dane = ss.str();
    std::cout << "stringstream: " << dane << "\n";

    ss.str("");
    ss.clear();

    ss << "123 456 789";
    int a, b, c;
    ss >> a >> b >> c;
    std::cout << "Parsowane liczby: " << a << ", " << b << ", " << c << "\n";

    return 0;
}
