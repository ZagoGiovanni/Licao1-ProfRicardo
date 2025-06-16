// CaixaTrocoFalta.h
#include <iostream>
#include <iomanip>
using namespace std;

class CaixaVenda {
private:
    double precoUnitario, dinheiroRecebido;
    int quantidade;

public:
    CaixaVenda(): precoUnitario(0), dinheiroRecebido(0), quantidade(0) {}

    void lerDados() {
        cout << "Preço unitário do produto: ";
        cin >> precoUnitario;
        cout << "Quantidade comprada: ";
        cin >> quantidade;
        cout << "Dinheiro recebido: ";
        cin >> dinheiroRecebido;
    }

    void processarPagamento() const {
        double totalCompra = precoUnitario * quantidade;
        cout << fixed << setprecision(2);

        if (dinheiroRecebido >= totalCompra) {
            double troco = dinheiroRecebido - totalCompra;
        	cout << "Troco = " << troco << endl;
        } else {
            double falta = totalCompra - dinheiroRecebido;
            cout << "Dinheiro Insuficiente! Faltam = R$" << falta << " Reais" << endl;
        }
    }
};


