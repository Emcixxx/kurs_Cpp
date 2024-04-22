#include <iostream>

int fWartosc(int x) {
    return x * 2;
}

void fReferencja(int &x) {
    x *= 2;
}

void fWskaznik(int *x) {
    *x *= 2;
}

void fTablica(int tab[], int rozmiar) {
    for (int i = 0; i < rozmiar; ++i) {
        tab[i] *= 2;
    }
}

int main() {
    int a = 5;
    int b = fWartosc(a);
    std::cout << "wartość: " << b << std::endl;

    int c = 5;
    fReferencja(c);
    std::cout << "referencja: " << c << std::endl;

    int d = 5;
    fWskaznik(&d);
    std::cout << "wskaźnik: " << d << std::endl;

    int tablica[] = {1, 2, 3, 4, 5};
    fTablica(tablica, 5);
    std::cout << "tablica: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << tablica[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
