// CalculadoraAumento.h
#include <iostream>
#include <iomanip>
using namespace std;

class CalculadoraAumento {
private:
    double salario;

public:
    CalculadoraAumento(): salario(0) {}

    void lerSalario() {
        cout << "Digite o Salário da pessoa: ";
        cin >> salario;
    }

    void calcularEExibirAumento() const {
        double aumento;
        int porcentagem;

        if (salario <= 1000.0)      porcentagem = 20;
        else if (salario <= 3000.0) porcentagem = 15;
        else if (salario <= 8000.0) porcentagem = 10;
        else                        porcentagem = 5;

        aumento = salario * porcentagem / 100.0;
        double novoSalario = salario + aumento;

        cout << fixed << setprecision(2);
        cout << "Novo Salário R$" << novoSalario << endl;
        cout << "Aumento R$" << aumento << endl;
        cout << "Porcentagem = " << porcentagem << "%" << endl;
    }
};
