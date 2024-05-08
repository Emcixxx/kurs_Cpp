// Pokazanie kolejność adresowania tablicy dwuwymiarowej oraz wypisywanie adresu poszczególnych elementów

#include <iostream>

int main() {
    int Tab[3][3];

    std::cout << "Adresy poszczególnych elementów tablicy Tab[3][3]:" << std::endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << "&Tab[" << i << "][" << j << "]: " << &Tab[i][j] << std::endl;
        }
    }

    return 0;
}
