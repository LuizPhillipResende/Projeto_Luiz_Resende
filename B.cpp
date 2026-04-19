#include <iostream>
using namespace std;

class B {
private:
    int B1;
    float B2;

public:
    // Getters
    int getB1() {
        return B1;
    }

    float getB2() {
        return B2;
    }

    // Setters
    void setB1(int value) {
        B1 = value;
    }

    void setB2(float value) {
        B2 = value;
    }

    // Métodos
    void MB1() {
        cout << "Metodo MB1" << endl;
    }

    void MB2() {
        cout << "Metodo MB2" << endl;
    }
};