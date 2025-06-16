// VerificadorMultiplos.h
#include <iostream>
using namespace std;

class VerificadorMultiplos {
private:
    int n1, n2;

public:
    VerificadorMultiplos() : n1(0), n2(0) {}

    void lerNumeros() {
        cout << "Digite o 1º número inteiro: ";
        cin >> n1;
		cout << "Digite o 2º número inteiro: ";
		cin >> n2;
    }

    bool saoMultiplos() const {
        if (n1 == 0 || n2 == 0) return true;
        return (n1 % n2 == 0 || n2 % n1 == 0);
    }

    void exibirResultado() const {
        if (saoMultiplos()) {
            cout << "Números múltiplos!" << endl;
        } else {
            cout << "Números não múltiplos!" << endl;
        }
    }
};


