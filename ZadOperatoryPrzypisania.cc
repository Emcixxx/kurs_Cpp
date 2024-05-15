#include <iostream>

void OperatoryArytmetyczne() {
    int a = 10;
    int b = 5;

    int suma = a + b;
    std::cout << "Suma: " << suma << std::endl;

    int roznica = a - b;
    std::cout << "Roznica: " << roznica << std::endl;

    int iloczyn = a * b;
    std::cout << "Iloczyn: " << iloczyn << std::endl;

    int iloraz = a / b;
    std::cout << "Iloraz: " << iloraz << std::endl;

    int reszta = a % b;
    std::cout << "Reszta z dzielenia: " << reszta << std::endl;
}

void OperatoryPrzypisania() {
    int x = 10;
    int y = 5;

    int z = x;
    std::cout << "Wartosc z: " << z << std::endl;

    z += y;
    std::cout << "Po dodaniu z += y: " << z << std::endl;

    z -= y;
    std::cout << "Po odjeciu z -= y: " << z << std::endl;

    z *= y;
    std::cout << "Po pomnozeniu z *= y: " << z << std::endl;

    z /= y;
    std::cout << "Po podzieleniu z /= y: " << z << std::endl;

    z %= y;
    std::cout << "Po operacji z %= y: " << z << std::endl;
}

int main() {
    std::cout << "Operatory Arytmetyczne:" << std::endl;
    OperatoryArytmetyczne();

    std::cout << "\nOperatory Przypisania:" << std::endl;
    OperatoryPrzypisania();

    return 0;
}
