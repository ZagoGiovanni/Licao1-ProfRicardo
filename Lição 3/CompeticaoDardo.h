// CompeticaoDardo.h
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

class CompeticaoDardo {
private:
    double d1, d2, d3;

public:
    CompeticaoDardo(): d1(0), d2(0), d3(0) {}

    void lerDistancias() {
        cout << "Digite as três distâncias:" << endl;
        cin >> d1 >> d2 >> d3;
    }

    double getMaiorDistancia() const {
        return max(d1, max(d2, d3));
    }

    void exibirMaiorDistancia() const {
        cout << fixed << setprecision(2);
        cout << "Maior Distância = " << getMaiorDistancia() << endl;
    }
};


