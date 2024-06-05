#include <iostream>
#define MESSAGE "Hello World"
#define CONCAT(a, b) a ## b
#ifdef DEBUG
#define DEBUG_MESSAGE "Tryb debugowania wlaczony"
#else
#define DEBUG_MESSAGE "Tryb debugowania wylaczony"
#endif


#ifndef VERSION
#define VERSION "1.0"
#endif

int main() {
    std::cout << "Makra:" << std::endl;
    std::cout << MESSAGE << std::endl;

    std::cout << "Zlaczenie MAKRA i NUM: " << CONCAT(MESSAGE, 2024) << std::endl;

    std::cout << "Dyrektywy preprocesora:" << std::endl;
    std::cout << DEBUG_MESSAGE << std::endl;

    std::cout << "Wersja programu: " << VERSION << std::endl;

    std::cout << "Bez dyrektyw preprocesora:" << std::endl;
#ifndef DEBUG
    std::cout << "Tryb debugowania jest wylaczony" << std::endl;
#endif

#ifndef VERSION
    std::cout << "Wersja niezdefiniowana" << std::endl;
#endif

    return 0;
}
