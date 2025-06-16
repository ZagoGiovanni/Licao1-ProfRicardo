// FormulaBhaskara.h
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class EquacaoSegundoGrau {
private:
    double a, b, c;

public:
    EquacaoSegundoGrau() : a(0), b(0), c(0) {}

    void lerCoeficientes() {
        cout << "Coeficiente A: ";
        cin >> a;
        cout << "Coeficiente B: ";
        cin >> b;
        cout << "Coeficiente C: ";
        cin >> c;
    }

    void calcularEExibirRaizes() const {
        if (a == 0) {
            cout << "Não é uma equação do segundo grau!" << endl;
            return;
        }
        double delta = pow(b, 2) - 4 * a * c;

        if (delta < 0) {
            cout << "Está equação não possui raízes reais" << endl;
        } else {
            double x1 = (-b + sqrt(delta)) / (2 * a);
            double x2 = (-b - sqrt(delta)) / (2 * a);
            cout << fixed << setprecision(4);
            cout << "X1 = " << x1 << endl;
            cout << "X2 = " << x2 << endl;
        }
    }
};


