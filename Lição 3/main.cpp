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

// Função para exibir o menu de opções
void exibirMenu() {
    cout << "\n\n========== MENU DE EXERCÍCIOS C++ ==========\n";
    cout << "1.  Notas do Aluno\n";
    cout << "2.  Fórmula de Bhaskara\n";
    cout << "3.  Menor de Três\n";
    cout << "4.  Plano de Telefonia\n";
    cout << "5.  Troco ou Falta\n";
    cout << "6.  Medidor de Glicose\n";
    cout << "7.  Lançamento de Dardo\n";
    cout << "8.  Conversor de Temperatura\n";
    cout << "9.  Lanchonete\n";
    cout << "10. Múltiplos\n";
    cout << "11. Aumento Salarial\n";
    cout << "12. Duração do Jogo\n";
    cout << "13. Coordenadas Cartesianas\n";
    cout << "0.  Sair\n";
    cout << "---------------------------------\n";
    cout << "Escolha uma opção: ";
}

int main() {
	setlocale(LC_ALL, "Portuguese");
    int opcao;

    do {
        exibirMenu();
        cin >> opcao;

        // Validação de entrada para garantir que o usuário digitou um número
        while (cin.fail()) {
            cout << "Entrada inválida. Por favor, digite um número: ";
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
                cout << "===== Executando: Fórmula de Bhaskara =====\n";
                EquacaoSegundoGrau eq;
                eq.lerCoeficientes();
                eq.calcularEExibirRaizes();
                break;
            }
            case 3: {
                cout << "===== Executando: Menor de Três =====\n";
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
                cout << "===== Executando: Lançamento de Dardo =====\n";
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
                cout << "===== Executando: Múltiplos =====\n";
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
                cout << "===== Executando: Duração do Jogo =====\n";
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
                cout << "Saindo do programa. Até mais!\n";
                break;
            }
            default: {
                cout << "Opção inválida! Por favor, tente novamente.\n";
                break;
            }
        }
    } while (opcao != 0);

    return 0;
}
