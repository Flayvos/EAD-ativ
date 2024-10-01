#include <iostream>
using namespace std;

// Funcao para verificar se o numero e primo
bool ehPrimo(int numero) {
    if (numero <= 1) 
        return false; 
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) 
            return false; 
    }
    return true; 
}

// Procedimento para escrever se e primo ou nao
void escreverResultado(bool resultado) {
    if (resultado) 
        cout << "Primo" << endl;
    else 
        cout << "Nao primo" << endl;
}

int main() {
    int numero;
    
    // Solicita a entrada do usuario
    cout << "Digite um numero: ";
    cin >> numero;
    
    // Verifica e imprime o resultado
    bool resultado = ehPrimo(numero);
    escreverResultado(resultado);

    return 0;
}
