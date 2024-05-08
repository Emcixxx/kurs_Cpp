
// Program odpowiedzialny jest za ilustrowanie kierunku adresowania pamięci odnośnie zmiennych zadeklarowanyc w funkcji.

// W programie &x wskazuje na początek miejsca w pamięci, gdzie przechowywana jest wartość zmiennej
// Za to $y wskazuje na miejsce gdzie przechowywany jest adres zmiennej x

#include <iostream>

int main() {
    int x = 1;
    int* y = &x;

    std::cout << "Adres zmiennej x: " << &x << std::endl;
    std::cout << "Wartość wskaźnika: " << y << std::endl; 
    std::cout << "Adres wskaźnika: " << &y << std::endl; 

    return 0;
}
