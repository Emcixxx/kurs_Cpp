#include <iostream>
#include "ZadKcpp.h"

void showMenu() {
    std::cout << "Menu:\n";
    std::cout << "1. Przyklad uzycia typu enum z uzyciem miesiecy\n";
    std::cout << "2. Podwojna wartosc, referencja, wskaznik, tablica\n";
    std::cout << "3. Operatory arytmetyczne i przypisania\n";
    std::cout << "4. Przyklad String Stream\n";
    std::cout << "5. Petle\n";
    std::cout << "0. Zakoncz\n";
}

int main() {
    ZadKcpp zad;
    int choice;
    int x, y, tab[5];

    do {
        showMenu();
        std::cout << "Wybierz opcje: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                zad.printMonth(ZadKcpp::styczen);
                break;
            case 2:
                std::cout << "Podwojna wartosc: " << zad.fWartosc(5) << std::endl;
                x = 5;
                zad.fReferencja(x);
                std::cout << "Podwojna referencja: " << x << std::endl;
                y = 5;
                zad.fWskaznik(&y);
                std::cout << "Podwojny wskaznik: " << y << std::endl;
                tab[0] = 1; tab[1] = 2; tab[2] = 3; tab[3] = 4; tab[4] = 5;
                zad.fTablica(tab, 5);
                std::cout << "Podwojna tablica: ";
                for (int i : tab) std::cout << i << " ";
                std::cout << std::endl;
                break;
            case 3:
                zad.OperatoryArytmetyczne();
                zad.OperatoryPrzypisania();
                break;
            case 4:
                std::cout << "String Stream: " << zad.stringStreamExample() << std::endl;
                zad.parseStringStream("123 456 789");
                break;
            case 5:
                zad.whileLoop();
                zad.doWhileLoop();
                zad.forLoop();
                break;
            case 0:
                std::cout << "Zakonczanie..." << std::endl;
                break;
            default:
                std::cout << "Nieprawidlowa opcja!" << std::endl;
        }
    } while (choice != 0);

    return 0;
}
