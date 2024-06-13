#ifndef ZADKCPP_H
#define ZADKCPP_H

#include <iostream>
#include <string>
#include <sstream>

class ZadKcpp {
public:
    enum mies {
        styczen,
        luty,
        marzec,
        kwiecien,
        maj,
        czerwiec,
        lipiec,
        sierpien,
        wrzesien,
        pazdziernik,
        listopad,
        grudzien
    };

    void printMonth(mies month);

    int fWartosc(int x);
    void fReferencja(int &x);
    void fWskaznik(int *x);
    void fTablica(int tab[], int rozmiar);

    void OperatoryArytmetyczne();
    void OperatoryPrzypisania();

    std::string stringStreamExample();
    void parseStringStream(const std::string& str);

    void whileLoop();
    void doWhileLoop();
    void forLoop();
};

#endif // ZADKCPP_H
