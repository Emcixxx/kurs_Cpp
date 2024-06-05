#include <iostream>
#include <string>

enum WordCode {
    HELLO,
    WORLD,
    EXIT,
    UNKNOWN
};

WordCode getWordCode(const std::string& word) {
    if (word == "hello") return HELLO;
    if (word == "world") return WORLD;
    if (word == "exit") return EXIT;
    return UNKNOWN;
}

void handleWord(const std::string& word) {
    switch (getWordCode(word)) {
        case HELLO:
            std::cout << "Hello detected!" << std::endl;
            break;
        case WORLD:
            std::cout << "World detected!" << std::endl;
            break;
        case EXIT:
            std::cout << "Exit detected!" << std::endl;
            std::cout << "Program zakończony." << std::endl;
            exit(0);
        case UNKNOWN:
        default:
            std::cout << "Unknown word detected!" << std::endl;
            break;
    }
}

int main() {
    std::string word;
    std::cout << "Podaj słowo (hello, world, exit): ";
    while (std::cin >> word) {
        handleWord(word);
        std::cout << "Podaj słowo (hello, world, exit): ";
    }
    return 0;
}
