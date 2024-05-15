#include <iostream>

void printBinaryShort(const unsigned char val) {
    for(int i = 7; i >= 0; i--)
        if(val & (1 << i))
            std::cout << "1";
        else
            std::cout << "0";
}

unsigned char convertToBinary(const int arr[]) {
    unsigned char result = 0;
    for(int i = 0; i < 8; ++i) {
        if(arr[i] == 1) {
            result |= (1 << (7 - i));
        }
    }
    return result;
}

int main(int argc, char *argv[]) {
    if(argc != 9) {
        std::cerr << "Usage: " << argv[0] << " <0/1> <0/1> <0/1> <0/1> <0/1> <0/1> <0/1> <0/1>" << std::endl;
        return 1;
    }

    int input[8];
    for(int i = 0; i < 8; ++i) {
        input[i] = std::atoi(argv[i + 1]);
        if(input[i] != 0 && input[i] != 1) {
            std::cerr << "Invalid input. Please provide only 0s and 1s." << std::endl;
            return 1;
        }
    }

    unsigned char result = convertToBinary(input);

    std::cout << "Binary representation: ";
    printBinaryShort(result);
    std::cout << std::endl;

    return 0;
}
