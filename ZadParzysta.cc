#include <iostream>

bool isEvenBitwise(int num) {
    // Jeśli ostatni bit (bit o indeksie 0) jest ustawiony na 0, to liczba jest parzysta.
    // W przeciwnym wypadku jest nieparzysta.
    return (num & 1) == 0;
}

bool isEvenModulo(int num) {
    return num % 2 == 0;
}

int main() {
    int number;
    std::cout << "Podaj liczbe: ";
    std::cin >> number;

    if (isEvenBitwise(number)) {
        std::cout << number << " jest liczba parzysta" << std::endl;
    } else {
        std::cout << number << " jest liczba nieparzysta" << std::endl;
    }

    if (isEvenModulo(number)) {
        std::cout << number << " jest liczba parzysta" << std::endl;
    } else {
        std::cout << number << " jest liczba nieparzysta" << std::endl;
    }

    return 0;
}
