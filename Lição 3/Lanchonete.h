// Lanchonete.h
#include <iostream>
#include <iomanip>
using namespace std;

class Lanchonete {
private:
    double getPreco(int codigo) const {
        switch (codigo) {
            case 1: return 5.00;
            case 2: return 3.50;
            case 3: return 4.80;
            case 4: return 8.90;
            case 5: return 7.32;
            default: return 0.0;
        }
    }

public:
    void processarPedido() {
        int codigo, quantidade;
        cout << "Código do Produto Comprado: ";
        cin >> codigo;
        cout << "Quantidade Comprada: ";
        cin >> quantidade;

        double precoUnitario = getPreco(codigo);

        if (precoUnitario > 0) {
            double total = precoUnitario * quantidade;
            cout << fixed << setprecision(2);
            cout << "Valor a pagar: R$" << total << endl;
        } else {
            cout << "Cdigo de Produto Inválido!" << endl;
        }
    }
};


