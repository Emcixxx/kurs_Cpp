#include "ZadKcpp.h"

// Zadanie 1
void ZadKcpp::printMonth(mies month) {
    switch (month) {
        case styczen: std::cout << "Styczen" << std::endl; break;
        case luty: std::cout << "Luty" << std::endl; break;
        case marzec: std::cout << "Marzec" << std::endl; break;
        case kwiecien: std::cout << "Kwiecien" << std::endl; break;
        case maj: std::cout << "Maj" << std::endl; break;
        case czerwiec: std::cout << "Czerwiec" << std::endl; break;
        case lipiec: std::cout << "Lipiec" << std::endl; break;
        case sierpien: std::cout << "Sierpien" << std::endl; break;
        case wrzesien: std::cout << "Wrzesien" << std::endl; break;
        case pazdziernik: std::cout << "Pazdziernik" << std::endl; break;
        case listopad: std::cout << "Listopad" << std::endl; break;
        case grudzien: std::cout << "Grudzien" << std::endl; break;
    }
}

// Zadanie 2
int ZadKcpp::fWartosc(int x) {
    return x * 2;
}

void ZadKcpp::fReferencja(int &x) {
    x *= 2;
}

void ZadKcpp::fWskaznik(int *x) {
    *x *= 2;
}

void ZadKcpp::fTablica(int tab[], int rozmiar) {
    for (int i = 0; i < rozmiar; ++i) {
        tab[i] *= 2;
    }
}

// Zadanie 3
void ZadKcpp::OperatoryArytmetyczne() {
    int a = 10;
    int b = 5;

    std::cout << "Suma: " << (a + b) << std::endl;
    std::cout << "Roznica: " << (a - b) << std::endl;
    std::cout << "Iloczyn: " << (a * b) << std::endl;
    std::cout << "Iloraz: " << (a / b) << std::endl;
    std::cout << "Reszta z dzielenia: " << (a % b) << std::endl;
}

void ZadKcpp::OperatoryPrzypisania() {
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

// Zadanie 4
std::string ZadKcpp::stringStreamExample() {
    std::stringstream ss;
    int wiek = 22;
    double wzrost = 1.86;
    std::string imie = "Jan";
    ss << "Imie: " << imie << ", Wiek: " << wiek << ", Wzrost: " << wzrost;
    return ss.str();
}

void ZadKcpp::parseStringStream(const std::string& str) {
    std::stringstream ss(str);
    int a, b, c;
    ss >> a >> b >> c;
    std::cout << "Parsowane liczby: " << a << ", " << b << ", " << c << "\n";
}

// Zadanie 5
void ZadKcpp::whileLoop() {
    int i = 0;
    std::cout << "Petla while:\n";
    while (i < 10) {
        if (i == 5) {
            std::cout << "Przerwanie petli  i = " << i << "\n";
            break;
        }
        if (i % 2 == 0) {
            i++;
            continue;
        }
        std::cout << "i = " << i << "\n";
        i++;
    }
}

void ZadKcpp::doWhileLoop() {
    int i = 0;
    std::cout << "Petla do-while:\n";
    do {
        if (i == 5) {
            std::cout << "Przerwanie petli i = "<< i << "\n";
            break;
        }
        if (i % 2 == 0) {
            i++;
            continue;
        }
        std::cout << "i = " << i << "\n";
        i++;
    } while (i < 10);
}

void ZadKcpp::forLoop() {
    std::cout << "Petla for:\n";
    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            std::cout << "Przerwanie petli i = " << i << "\n";
            break;
        }
        if (i % 2 == 0) {
            continue;
        }
        std::cout << "i = " << i << "\n";
    }
}
