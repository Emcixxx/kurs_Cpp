#include <iostream>
#include <string>

using namespace std;

class Car {
private:
    string brand;
    string model;
    int year;

public:
    Car(string brand, string model, int year) {
        this->brand = brand;
        this->model = model;
        this->year = year;
    }

    void setBrand(string brand) {
        this->brand = brand;
    }

    string getBrand() const {
        return brand;
    }

    void setModel(string model) {
        this->model = model;
    }

    string getModel() const {
        return model;
    }

    void setYear(int year) {
        this->year = year;
    }

    int getYear() const {
        return year;
    }

    void displayInfo() const {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
  Car myCar("Volkswagen", "Polo", 2008);
    myCar.displayInfo();

    return 0;
}
