// CalculadoraDuracaoJogo.h
#include <iostream>
using namespace std;

class CalculadoraDuracaoJogo {
private:
    int horaInicial, horaFinal;

public:
    CalculadoraDuracaoJogo(): horaInicial(0), horaFinal(0) {}

    void lerHoras() {
        cout << "Hora Inicial: ";
        cin >> horaInicial;
        cout << "Hora Final: ";
        cin >> horaFinal;
    }

    int getDuracao() const {
        if (horaInicial < horaFinal) {
            return horaFinal - horaInicial;
        } else {
            return 24 - horaInicial + horaFinal;
        }
    }

    void exibirDuracao() const {
        cout << "O Jogo Durou " << getDuracao() << " Hora(s)" << endl;
    }
};


