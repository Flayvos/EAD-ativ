#include <iostream>
using namespace std;

// Funcao para preencher o vetor dinamicamente alocado
void preencherVetor(int *vetor, int n) {
    cout << "Digite os " << n << " elementos do vetor:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> vetor[i]; 
    }
}

int main() {
    int n;

    // Solicita ao usuario o tamanho do vetor
    cout << "Digite o tamanho do vetor: ";
    cin >> n;

    // Aloca dinamicamente o vetor com n elementos
    int *vetor = new int[n];

    // Chama a funcao para preencher o vetor
    preencherVetor(vetor, n);

    // Exibe o vetor preenchido
    cout << "Vetor preenchido: ";
    for (int i = 0; i < n; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    // Libera a memoria alocada dinamicamente
    delete[] vetor;

    return 0;
}
