#include <iostream>
using namespace std;

class C {
private:
    int C1;
    float C2;

public:
    // Getters
    int getC1() {
        return C1;
    }

    float getC2() {
        return C2;
    }

    // Setters
    void setC1(int value) {
        C1 = value;
    }

    void setC2(float value) {
        C2 = value;
    }

    // Métodos
    void MC1() {
        cout << "Metodo MC1" << endl;
    }

    void MC2() {
        cout << "Metodo MC2" << endl;
    }
};