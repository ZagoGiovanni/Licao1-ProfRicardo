// MedidorGlicose.h
#include <iostream>
#include <string>
using namespace std;

class MedidorGlicose {
private:
    double medida;

public:
    MedidorGlicose(): medida(0) {}

    void lerMedida() {
        cout << "Digite a medida da glicose: ";
        cin >> medida;
    }

    string getClassificacao() const {
        if (medida <= 100.0) {
            return "Normal";
        } else if (medida <= 140.0) {
            return "Elevado";
        } else {
            return "Diabetes";
        }
    }

    void exibirClassificacao() const {
        cout << "Classificacao: " << getClassificacao() << endl;
    }
};


