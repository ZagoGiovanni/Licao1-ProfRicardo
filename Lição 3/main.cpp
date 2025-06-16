// Main.cpp
#include <bits/stdc++.h>
#include "Notas.h"
#include "FormulaBhaskara.h"
#include "MenorTres.h"
#include "PlanoTelefonia.h"
#include "CaixaTrocoFalta.h"
#include "MedidorGlicose.h"
#include "CompeticaoDardo.h"
#include "ConversorTemperatura.h"
#include "Lanchonete.h"
#include "VerificadorMultiplos.h"
#include "CalculadoraAumento.h"
#include "CalculadoraDuracaoJogo.h"
#include "PlanoCartesiano.h"
using namespace std;

// Fun��o para exibir o menu de op��es
void exibirMenu() {
    cout << "\n\n========== MENU DE EXERC�CIOS C++ ==========\n";
    cout << "1.  Notas do Aluno\n";
    cout << "2.  F�rmula de Bhaskara\n";
    cout << "3.  Menor de Tr�s\n";
    cout << "4.  Plano de Telefonia\n";
    cout << "5.  Troco ou Falta\n";
    cout << "6.  Medidor de Glicose\n";
    cout << "7.  Lan�amento de Dardo\n";
    cout << "8.  Conversor de Temperatura\n";
    cout << "9.  Lanchonete\n";
    cout << "10. M�ltiplos\n";
    cout << "11. Aumento Salarial\n";
    cout << "12. Dura��o do Jogo\n";
    cout << "13. Coordenadas Cartesianas\n";
    cout << "0.  Sair\n";
    cout << "---------------------------------\n";
    cout << "Escolha uma op��o: ";
}

int main() {
	setlocale(LC_ALL, "Portuguese");
    int opcao;

    do {
        exibirMenu();
        cin >> opcao;

        // Valida��o de entrada para garantir que o usu�rio digitou um n�mero
        while (cin.fail()) {
            cout << "Entrada inv�lida. Por favor, digite um n�mero: ";
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        	cin >> opcao;
        }
        
        cout << "\n"; 

        switch (opcao) {
            case 1: {
                cout << "===== Executando: Notas do Aluno =====\n";
                Aluno aluno;
                aluno.lerNotas();
                aluno.exibirResultado();
                break;
            }
            case 2: {
                cout << "===== Executando: F�rmula de Bhaskara =====\n";
                EquacaoSegundoGrau eq;
                eq.lerCoeficientes();
                eq.calcularEExibirRaizes();
                break;
            }
            case 3: {
                cout << "===== Executando: Menor de Tr�s =====\n";
                Comparador comp;
                comp.lerValores();
                comp.exibirMenor();
                break;
            }
            case 4: {
                cout << "===== Executando: Plano de Telefonia =====\n";
                PlanoTelefonia plano;
                plano.lerMinutos();
                plano.exibirCusto();
                break;
            }
            case 5: {
                cout << "===== Executando: Troco ou Falta =====\n";
                CaixaVenda venda;
                venda.lerDados();
                venda.processarPagamento();
                break;
            }
            case 6: {
                cout << "===== Executando: Medidor de Glicose =====\n";
                MedidorGlicose medidor;
                medidor.lerMedida();
                medidor.exibirClassificacao();
                break;
            }
            case 7: {
                cout << "===== Executando: Lan�amento de Dardo =====\n";
                CompeticaoDardo competicao;
                competicao.lerDistancias();
                competicao.exibirMaiorDistancia();
                break;
            }
            case 8: {
                cout << "===== Executando: Conversor de Temperatura =====\n";
                ConversorTemperatura conversor;
                conversor.iniciar();
                break;
            }
            case 9: {
                cout << "===== Executando: Lanchonete =====\n";
                Lanchonete lanchonete;
                lanchonete.processarPedido();
                break;
            }
            case 10: {
                cout << "===== Executando: M�ltiplos =====\n";
                VerificadorMultiplos verif;
                verif.lerNumeros();
                verif.exibirResultado();
                break;
            }
            case 11: {
                cout << "===== Executando: Aumento Salarial =====\n";
                CalculadoraAumento calc;
                calc.lerSalario();
                calc.calcularEExibirAumento();
                break;
            }
            case 12: {
                cout << "===== Executando: Dura��o do Jogo =====\n";
                CalculadoraDuracaoJogo jogo;
                jogo.lerHoras();
                jogo.exibirDuracao();
                break;
            }
            case 13: {
                cout << "===== Executando: Coordenadas Cartesianas =====\n";
                PlanoCartesiano ponto;
                ponto.lerCoordenadas();
                ponto.exibirLocalizacao();
                break;
            }
            case 0: {
                cout << "Saindo do programa. At� mais!\n";
                break;
            }
            default: {
                cout << "Op��o inv�lida! Por favor, tente novamente.\n";
                break;
            }
        }
    } while (opcao != 0);

    return 0;
}
