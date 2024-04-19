#include <iostream>
using namespace std;

void F1(){
    cout << "Funkcja 1" << endl;
    return;
}

void F2(){
    cout << "Funkcja 2" << endl;
    return;
}

void F3(){
    cout << "Funkcja 3" << endl;
    return;
}

extern "C" void F4(){
    cout << "Funkcja 4" << endl;
    return;
}

extern "C" void F5(){
    cout << "Funkcja 5" << endl;
    return;
}

int main(){
    F1();
    F2();
    F3();
    F4();
    F5();

    return 0;
}
