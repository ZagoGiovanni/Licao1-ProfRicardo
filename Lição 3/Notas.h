// Notas.h
#include <iostream>
#include <iomanip>
using namespace std;

class Aluno {
private:
    double nota1;
    double nota2;

public:
    Aluno(): nota1(0), nota2(0) {}

    void lerNotas() {
        cout << "Digite a primeira nota: ";
        cin >> nota1;
        cout << "Digite a segunda nota: ";
        cin >> nota2;
    }

    double getNotaFinal() const {
        return nota1 + nota2;
    }

    void exibirResultado() const {
        double final = getNotaFinal();
        cout << fixed << setprecision(1);
        cout << "NOTA FINAL = " << final << endl;
        if (final < 60.0) {
            cout << "REPROVADO" << endl;
        }
    }
};


