#include <iostream>

using namespace std;

// Funcao para imprimir a pilha
void imprimirPilha(int *pilha, int n) {
    cout << "Pilha: ";
    for (int i = 0; i < n; i++) {
        cout << pilha[i] << " ";
    }
    cout << endl;
}

// Funcao para inserir um elemento na pilha
void push(int *&pilha, int &n, int valor) {
    int* novaPilha = new int[n + 1]; // Cria uma nova pilha com tamanho maior
    for (int i = 0; i < n; i++) {
        novaPilha[i] = pilha[i]; // Copia elementos da pilha antiga
    }
    novaPilha[n] = valor; // Adiciona o novo elemento no topo
    delete[] pilha; // Libera a memoria da pilha antiga
    pilha = novaPilha; // Atualiza o ponteiro para a nova pilha
    n++; // Aumenta o tamanho da pilha
}

// Funcao para remover um elemento da pilha
void pop(int *&pilha, int &n) {
    if (n == 0) { // Verifica se a pilha esta vazia
        cout << "Pilha vazia! Nao e possivel remover um elemento." << endl;
        return;
    }

    // Cria uma nova pilha com tamanho menor
    int* novaPilha = new int[n - 1];
    for (int i = 0; i < n - 1; i++) {
        novaPilha[i] = pilha[i]; // Copia todos os elementos, exceto o ultimo
    }
    delete[] pilha; // Libera a memoria da pilha antiga
    pilha = novaPilha; // Atualiza o ponteiro para a nova pilha
    n--; // Diminui o tamanho da pilha
}

// Funcao para exibir o elemento do topo da pilha
void topo(int *pilha, int n) {
    if (n > 0) {
        cout << "Topo da pilha: " << pilha[n - 1] << endl; // Exibe o topo
    } else {
        cout << "Pilha vazia!" << endl;
    }
}

int main() {
    int n = 0; // Tamanho da pilha
    int *pilha = nullptr; // Ponteiro para a pilha
    int opcao, valor;

    do {
        cout << "\nMenu:\n";
        cout << "1. Inserir elemento (push)\n";
        cout << "2. Remover elemento (pop)\n";
        cout << "3. Ver topo da pilha\n";
        cout << "0. Sair\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cout << "Digite o valor a ser inserido: ";
                cin >> valor;
                push(pilha, n, valor);
                imprimirPilha(pilha, n);
                break;

            case 2:
                pop(pilha, n);
                imprimirPilha(pilha, n);
                break;

            case 3:
                topo(pilha, n);
                break;

            case 0:
                cout << "Saindo do programa..." << endl;
                break;

            default:
                cout << "Opcao invalida! Tente novamente." << endl;
        }
    } while (opcao != 0);

    delete[] pilha; // Libera a memoria da pilha antes de sair
    return 0;
}
