#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::cout << "Wypisywanie na ekran" << std::endl;
    std::cerr << "Error" << std::endl;

    std::string nazwaPliku = "przyklad.txt";
    std::ofstream plikWyjscie(nazwaPliku);
    if (plikWyjscie.is_open()) {
        plikWyjscie << "linia 1.\n";
        plikWyjscie << "linia 2.\n";
        plikWyjscie << "linia 3.\n";
        plikWyjscie.close();
    } else {
        std::cerr << "Wystąpił problem z odtworzeniem pliku do zapisu!" << std::endl;
    }

    std::ifstream plikWejscie(nazwaPliku);
    if (plikWejscie.is_open()) {
        std::string linia;
        std::cout << "Zawartość pliku " << nazwaPliku << ":" << std::endl;
        while (std::getline(plikWejscie, linia)) {
            std::cout << linia << std::endl;
        }
        plikWejscie.close();
    } else {
        std::cerr << "Wystąpił problem z odtworzeniem pliku do zapisu!" << std::endl;
    }

    return 0;
}
