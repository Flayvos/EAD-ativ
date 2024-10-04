// man.cpp
#include <iostream>
#include "calc.cpp" // Incluindo o arquivo calc.cpp

using namespace std;

int main() {
    float num1, num2;
    int opcao;

    // Leitura dos dois numeros
    cout << "Digite o primeiro numero: ";
    cin >> num1;
    cout << "Digite o segundo numero: ";
    cin >> num2;

    do {
        // Menu de operacoes
        cout << "\n=== Menu de Operacoes ===" << endl;
        cout << "1. Soma" << endl;
        cout << "2. Subtracao" << endl;
        cout << "3. Multiplicacao" << endl;
        cout << "4. Divisao" << endl;
        cout << "5. Sair" << endl;
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        // Chama a funcao correspondente a opcao escolhida
        switch (opcao) {
            case 1:
                cout << "Resultado da soma: " << soma(num1, num2) << endl;
                break;
            case 2:
                cout << "Resultado da subtracao: " << subtracao(num1, num2) << endl;
                break;
            case 3:
                cout << "Resultado da multiplicacao: " << multiplicacao(num1, num2) << endl;
                break;
            case 4:
                cout << "Resultado da divisao: " << divisao(num1, num2) << endl;
                break;
            case 5:
                cout << "Saindo do programa..." << endl;
                break;
            default:
                cout << "Opcao invalida. Tente novamente." << endl;
        }
    } while (opcao != 5); // Continua ate que o usuario escolha sair

    return 0;
}
