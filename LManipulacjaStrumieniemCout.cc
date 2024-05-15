#include <iostream>
#include <iomanip>

int main() {
    float x1 = 12.3456;
    float x2 = 78.91234;
    float T = 56.78912;

    std::cout << "Wyniki naszego dzialania: " << x1 << " jest niepoprawny ale:" << std::endl;

    std::cout << std::setw(10) << std::setprecision(3) << std::fixed << std::setfill('0') << x2 << "   ";
    std::cout << "T: " << std::setw(6) << std::setprecision(3) << std::fixed << std::setfill('0') << T << std::endl;

    std::cout << "   // float w = 16.0;" << std::endl;
    std::cout << "     output1:   " << std::setw(9) << std::setprecision(4) << std::fixed << std::setfill('0') << x1 << "   ";
    std::cout << "T: " << std::setw(8) << std::setprecision(5) << std::fixed << std::setfill('0') << T << std::endl;

    std::cout << "     output2:   " << std::setw(9) << std::setprecision(4) << std::fixed << std::setfill('0') << x1 << "   ";
    std::cout << "T: " << std::setw(9) << std::setprecision(6) << std::fixed << std::setfill('0') << T << std::endl;

    std::cout << "     ---------------------------------" << std::endl;
    float average = (x1 + x2) / 2.0;
    std::cout << "     average:  " << std::setw(9) << std::setprecision(4) << std::fixed << std::setfill('0') << average << "   ";
    std::cout << "T: " << std::setw(9) << std::setprecision(6) << std::fixed << std::setfill('0') << T << std::endl;


    return 0;
}
