#include <iostream>

void Funkcja1() {
    int a = 0, b = 0, c = 0;
    int *p = &a;

    std::cout << "1. A, B, C: " << a << "  " << b << "  " << c << std::endl;

    p++;
    std::cout << "2. A, B, C: " << a << "  " << b << "  " << c << std::endl;

    ++p;
    std::cout << "3. A, B, C: " << a << "  " << b << "  " << c << std::endl;

    ++*p;
    std::cout << "4. A, B, C: " << a << "  " << b << "  " << c << std::endl;

    ++(*p);
    std::cout << "5. A, B, C: " << a << "  " << b << "  " << c << std::endl;

    ++*(p);
    std::cout << "6. A, B, C: " << a << "  " << b << "  " << c << std::endl;

    *p++;
    std::cout << "7. A, B, C: " << a << "  " << b << "  " << c << std::endl;

    (*p)++;
    std::cout << "8. A, B, C: " << a << "  " << b << "  " << c << std::endl;

    *(p)++;
    std::cout << "9. A, B, C: " << a << "  " << b << "  " << c << std::endl;

    *++p;
    std::cout << "10. A, B, C: " << a << "  " << b << "  " << c << std::endl;

    *(++p);
    std::cout << "11. A, B, C: " << a << "  " << b << "  " << c << std::endl;
}

void Funkcja2() {
    int a = 0, b = 0, c = 0;
    int *p = &a;

    std::cout << "1. A, B, C: " << a << "  " << b << "  " << c << std::endl;

    *p += 10;
    std::cout << "2. A, B, C: " << a << "  " << b << "  " << c << std::endl;

    p = &b;
    *p += 20;
    std::cout << "3. A, B, C: " << a << "  " << b << "  " << c << std::endl;

    p = &a;
    *p += 30;
    std::cout << "4. A, B, C: " << a << "  " << b << "  " << c << std::endl;

    p = &c;
    *p += 40;
    std::cout << "5. A, B, C: " << a << "  " << b << "  " << c << std::endl;

    p = &b;
    *p += 50;
    std::cout << "6. A, B, C: " << a << "  " << b << "  " << c << std::endl;

    p = &c;
    *p += 60;
    std::cout << "7. A, B, C: " << a << "  " << b << "  " << c << std::endl;

    p = &a;
    *p += 70;
    std::cout << "8. A, B, C: " << a << "  " << b << "  " << c << std::endl;

    p = &b;
    *p += 80;
    std::cout << "9. A, B, C: " << a << "  " << b << "  " << c << std::endl;

    p = &c;
    *p += 90;
    std::cout << "10. A, B, C: " << a << "  " << b << "  " << c << std::endl;
}

int main() {
    Funkcja1();
    Funkcja2();
    return 0;
}
