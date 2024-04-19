#include <iostream>
#include <string>
using namespace std;

void F() {
    string napis1 = "xyz";
    cout <<"napis1: "<< napis1 << endl;
    cout <<"empty(): "<< napis1.empty() << endl;

    napis1.clear();
    cout <<"napis1 po clear(): "<< napis1 << endl;

    string napis2 = "abcde";
    cout <<"przed erase(): "<< napis2 << endl;
    napis2.erase(2);
    cout <<"po erase(): "<< napis2 << endl;

    string napis3 = "Hello World";
    cout <<"Zdanie: "<< napis3 << endl;
    cout <<"find(): "<< napis3.find("World") << endl;

    string napis4 = "size";
    cout <<"napis4: "<< napis4 << endl;
    cout <<"size(): "<< napis4.size() << endl;

    string napis5 = "substring";
    cout <<"napis5: "<< napis5 << endl;
    cout <<"substr(3, 4): "<< napis5.substr(3, 4) << endl;

    string napis6 = "append";
    cout <<"przed append(): "<< napis6 << endl;
    napis6.append("ing");
    cout <<"po append(): "<< napis6 << endl;

    string napis7 = "swap";
    string napis8 = "string";
    cout <<"Przed swap(): "<< napis7 << ", "<< napis8 << endl;
    napis7.swap(napis8);
    cout <<"Po swap(): "<< napis7 << ", "<< napis8 << endl;
}


int main() {
    F();
    return 0;
}
