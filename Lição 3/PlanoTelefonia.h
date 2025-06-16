// PlanoTelefonia.h
#include <iostream>
#include <iomanip>
using namespace std;

class PlanoTelefonia {
private:
    int minutos;
    static const double FRANQUIA_MINUTOS = 100.0;
    static const double CUSTO_BASICO = 50.0;
    static const double CUSTO_EXCEDENTE_POR_MINUTO = 2.0;

public:
    PlanoTelefonia(): minutos(0) {}

    void lerMinutos() {
        cout << "Digite a quantidade de minutos: ";
        cin >> minutos;
    }

    double calcularCusto() const {
        if (minutos <= FRANQUIA_MINUTOS) {
            return CUSTO_BASICO;
        } else {
            double minutosExcedentes = minutos - FRANQUIA_MINUTOS;
            return CUSTO_BASICO + (minutosExcedentes * CUSTO_EXCEDENTE_POR_MINUTO);
        }
    }

    void exibirCusto() const {
        cout << fixed << setprecision(2);
        cout << "Valor a pagar: R$ " << calcularCusto() << endl;
    }
};


