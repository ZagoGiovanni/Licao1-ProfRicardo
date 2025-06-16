// VerificadorMultiplos.h
#include <iostream>
using namespace std;

class VerificadorMultiplos {
private:
    int n1, n2;

public:
    VerificadorMultiplos() : n1(0), n2(0) {}

    void lerNumeros() {
        cout << "Digite o 1� n�mero inteiro: ";
        cin >> n1;
		cout << "Digite o 2� n�mero inteiro: ";
		cin >> n2;
    }

    bool saoMultiplos() const {
        if (n1 == 0 || n2 == 0) return true;
        return (n1 % n2 == 0 || n2 % n1 == 0);
    }

    void exibirResultado() const {
        if (saoMultiplos()) {
            cout << "N�meros m�ltiplos!" << endl;
        } else {
            cout << "N�meros n�o m�ltiplos!" << endl;
        }
    }
};


