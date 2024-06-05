#include <iostream>

bool isEvenBitwise(int num) {
    return (num & 1) == 0;
}

bool isEvenModulo(int num) {
    return num % 2 == 0;
}

bool isEvenDivision(int num) {
    return (num / 2) * 2 == num;
}

int main() {
    int number, choice;
    std::cout << "Podaj liczbe: ";
    std::cin >> number;

    std::cout << "Wybierz metode sprawdzania parzystości:\n";
    std::cout << "1. Operacje bitowe\n";
    std::cout << "2. Operator modulo\n";
    std::cout << "3. Dzielenie\n";
    std::cin >> choice;

    bool isEven;

    switch (choice) {
        case 1:
            isEven = isEvenBitwise(number);
            break;
        case 2:
            isEven = isEvenModulo(number);
            break;
        case 3:
            isEven = isEvenDivision(number);
            break;
        default:
            std::cerr << "Nieprawidłowy wybór metody!" << std::endl;
            return 1;
    }

    if (isEven) {
        std::cout << number << " jest liczba parzysta" << std::endl;
    } else {
        std::cout << number << " jest liczba nieparzysta" << std::endl;
    }

    return 0;
}
