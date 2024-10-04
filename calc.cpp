// calc.cpp
#include <iostream>
using namespace std;

// Funcao para soma
float soma(float a, float b) {
    return a + b;
}

// Funcao para subtracao
float subtracao(float a, float b) {
    return a - b;
}

// Funcao para multiplicacao
float multiplicacao(float a, float b) {
    return a * b;
}

// Funcao para divisao
float divisao(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        cout << "Erro: Divisao por zero!" << endl;
        return 0; // Retorna 0 em caso de erro
    }
}
