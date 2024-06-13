#include <iostream>
#include "ZadKcpp.h"

void showMenu() {
    std::cout << "Menu:\n";
    std::cout << "1. Przykład użycia typu enum z użyciem miesięcy\n";
    std::cout << "2. Podwójna wartość, referencja, wskaźnik, tablica\n";
    std::cout << "3. Operatory arytmetyczne i przypisania\n";
    std::cout << "4. Przykład String Stream\n";
    std::cout << "5. Pętle\n";
    std::cout << "0. Zakończ\n";
}

int main() {
    ZadKcpp zad;
    int choice;
    do {
        showMenu();
        std::cout << "Wybierz opcję: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                zad.printMonth(ZadKcpp::styczen);
                break;
            case 2:
                std::cout << "Podwójna wartość: " << zad.fWartosc(5) << std::endl;
                int x = 5;
                zad.fReferencja(x);
                std::cout << "Podwójna referencja: " << x << std::endl;
                int y = 5;
                zad.fWskaznik(&y);
                std::cout << "Podwójny wskaźnik: " << y << std::endl;
                int tab[5] = {1, 2, 3, 4, 5};
                zad.fTablica(tab, 5);
                std::cout << "Podwójna tablica: ";
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
