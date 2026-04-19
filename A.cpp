#include <iostream>
using namespace std;

class A {
private:
    int A1;
    float A2;

public:
    // Getters
    int getA1() {
        return A1;
    }

    float getA2() {
        return A2;
    }

    // Setters
    void setA1(int value) {
        A1 = value;
    }

    void setA2(float value) {
        A2 = value;
    }

    // Métodos
    void MA1() {
        cout << "Metodo MA1" << endl;
    }

    void MA2() {
        cout << "Metodo MA2" << endl;
    }
};