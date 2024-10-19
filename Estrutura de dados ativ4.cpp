#include <iostream>

using namespace std;

// Funcao para realizar a busca binaria
int buscaBinaria(int *vetor, int x, int n) {
    int inicio = 0;
    int fim = n - 1;

    while (inicio <= fim) {
        int meio = inicio + (fim - inicio) / 2; // Para evitar overflow

        if (vetor[meio] == x) {
            return meio; // Valor encontrado
        }
        if (vetor[meio] < x) {
            inicio = meio + 1; // Buscar na metade direita
        } else {
            fim = meio - 1; // Buscar na metade esquerda
        }
    }
    return -1; // Valor nao encontrado
}

// Funcao para preencher o vetor dinamicamente alocado
void valoresvetor(int *vetor, int n) {
    cout << "Digite os " << n << " valores do vetor (ja ordenados): " << endl;
    for (int i = 0; i < n; i++) {
        cin >> vetor[i];
    }
}

int main() {
    int n, x;

    cout << "Digite o tamanho do vetor: ";
    cin >> n;

    // Verifica se o tamanho do vetor e valido
    if (n <= 0) {
        cout << "O tamanho do vetor deve ser maior que zero." << endl;
        return 1; // Encerra o programa se o tamanho for invalido
    }

    int *vetor = new int[n]; // Alocacao dinamica do vetor

    valoresvetor(vetor, n);

    cout << "Digite o valor a ser buscado: ";
    cin >> x;

    int resultado = buscaBinaria(vetor, x, n);

    if (resultado != -1) {
        cout << "Valor encontrado na posicao " << resultado << " do vetor!" << endl;
    } else {
        cout << "Valor nao encontrado no vetor!" << endl;
    }

    delete[] vetor; // Liberando a memoria alocada dinamicamente

    return 0;
}
