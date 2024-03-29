#include<iostream>
using namespace std;

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

enum class ScopedTypes {
    Int,
    Double,
    String
};

enum UnscopedTypes {
    Int,
    Double,
    String
};


int main()
{
    mies current_month = styczen; 

    switch (current_month) {
        case styczen:
            cout << "Styczeń" << endl;
        case luty:
            cout << "Luty" << endl;
        case marzec:
            cout << "Marzec" << endl;
        case kwiecien:
            cout << "Kwiecień" << endl;
        case maj:
            cout << "Maj" << endl;
        case czerwiec:
            cout << "Czerwiec" << endl;
        case lipiec:
            cout << "Lipiec" << endl;
        case sierpien:
            cout << "Sierpień" << endl;
        case wrzesien:
            cout << "Wrzesień" << endl;
        case pazdziernik:
            cout << "Październik" << endl;
        case listopad:
            cout << "Listopad" << endl;
        case grudzien:
            cout << "Grudzień" << endl;

    }

    return 0;
}
