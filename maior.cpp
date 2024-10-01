#include <iostream>
using namespace std;

// Procedimento para encontrar o maior elemento do vetor
void maior(int v[], int n, int &maiorValor) {
    maiorValor = v[0]; 
    for (int i = 1; i < n; i++) {
        if (v[i] > maiorValor) {
            maiorValor = v[i]; 
        }
    }
}

int main() {
    int n;

    // Solicita o tamanho do vetor
    cout << "Digite o tamanho do vetor: ";
    cin >> n;

    int v[n]; 

    // Solicita a entrada dos elementos do vetor
    cout << "Digite os elementos do vetor:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int maiorValor;

    // Chama o procedimento para encontrar o maior valor
    maior(v, n, maiorValor);

    // Exibe o maior valor encontrado
    cout << "O maior valor do vetor e: " << maiorValor << endl;

    return 0;
}
