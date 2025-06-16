// MenorTres.h
#include <iostream>
#include <algorithm>
using namespace std;

class Comparador {
private:
    int val1, val2, val3;

public:
    Comparador(): val1(0), val2(0), val3(0) {}

    void lerValores() {
        cout << "Primeiro valor: ";
        cin >> val1;
        cout << "Segundo valor: ";
        cin >> val2;
        cout << "Terceiro valor: ";
        cin >> val3;
    }

    int getMenor() const {
        return min(val1, min(val2, val3));
    }

    void exibirMenor() const {
        cout << "MENOR = " << getMenor() << endl;
    }
};


