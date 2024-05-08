// Zastosowanie arytmetyki wskaźników w odniesieniu do wskaźnika na tablicę.

#include <iostream>

int main() {
    int arr[] = {1, 2, 3};
    int* ptr = arr; // wskazanie na początek tablicy arr

    // Przykład zastosowania
    int i = 2;
    int q = 1;

    int result = *(ptr + i*q); // Obliczenie i[q]

    std::cout << "Wartość i[q]: " << result << std::endl;

    return 0;
}
