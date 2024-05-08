#include <iostream>
using namespace std;

int main() {
    const int tam = 6;
    int matrix[tam][tam];
    int multi;

    // Leitura da matriz
    cout << "Digite os elementos da matriz " << tam << "x" << tam << ":\n";
    for (int x = 0; x < tam; x++) {
        for (int y = 0; y < tam; y++) {
            cout << "Matriz[" << x << "][" << y << "]: ";
            cin >> matrix[x][y];
        }
    }

    // Leitura do numero multiplicador
    cout << "Digite um numero pelo qual deseja multiplicar os elementos da diagonal primaria: ";
    cin >> multi;

    // Multiplicacao dos elementos da diagonal primaria
    for (int x = 0; x < tam; x++) {
        matrix[x][x] *= multi;
    }

    // Exibicao da matriz resultante
    cout << "Matriz resultante:\n";
    for (int x = 0; x < tam; x++) {
        for (int y = 0; y < tam; y++) {
            cout << matrix[x][y] << " ";
        }
        cout << "\n";
    }

    return 0;
}