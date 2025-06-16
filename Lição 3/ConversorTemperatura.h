// ConversorTemperatura.h
#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

class ConversorTemperatura {
public:
    void iniciar() {
        char escala;
        double tempEntrada, tempConvertida;

        cout << "A temperatura vai ser em qual escala (C/F)? " << endl;
        cin >> escala;
        escala = toupper(escala);

        cout << fixed << setprecision(2);

        if (escala == 'F') {
            cout << "Digite a temperatura em Fahrenheit: ";
            cin >> tempEntrada;
            tempConvertida = (5.0 / 9.0) * (tempEntrada - 32.0);
            cout << "Temperatura equivalente em Celsius: " << tempConvertida << endl;
        } else if (escala == 'C') {
        	cout << "Digite a temperatura em Celsius: ";
            cin >> tempEntrada;
            tempConvertida = (tempEntrada * 9.0 / 5.0) + 32.0;
            cout << "Temperatura equivalente em Fahrenheit: " << tempConvertida << endl;
        } else {
            cout << "Escala invalida." << endl;
        }
    }
};


