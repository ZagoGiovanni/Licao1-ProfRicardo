#include <iostream>
#include <string>
using namespace std;

class PlanoCartesiano {
private:
    double x, y;

public:
    PlanoCartesiano() : x(0), y(0) {}

    void lerCoordenadas() {
        cout << "Valor de X: ";
        cin >> x;
        cout << "Valor de Y: ";
        cin >> y;
    }

    string getLocalizacao() const {
        if (x == 0.0 && y == 0.0) return "Origem";
        if (x == 0.0) return "Eixo Y";
        if (y == 0.0) return "Eixo X";
        if (x > 0.0 && y > 0.0) return "Q1";
        if (x < 0.0 && y > 0.0) return "Q2";
        if (x < 0.0 && y < 0.0) return "Q3";
        return "Q4";
    }

    void exibirLocalizacao() const {
        cout << getLocalizacao() << endl;
    }
};


