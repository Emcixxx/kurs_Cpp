#include <iostream>

void whileL() {
    int i = 0;
    std::cout << "Pętla while:\n";
    while (i < 10) {
        if (i == 5) {
            std::cout << "Przerwanie pętli  i = " << i << "\n";
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

void doWhile() {
    int i = 0;
    std::cout << "Pętla do-while:\n";
    do {
        if (i == 5) {
            std::cout << "Przerwanie pętli i = " << i << "\n";
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

void forL() {
    std::cout << "Pętla for:\n";
    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            std::cout << "Przerwanie pętli i = " << i << "\n";
            break; 
        }
        if (i % 2 == 0) {
            continue; 
        }
        std::cout << "i = " << i << "\n";
    }
}

int main() {
    whileL();
    doWhile();
    forL();
    return 0;
}
