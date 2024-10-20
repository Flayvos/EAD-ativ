#include <iostream>

using namespace std;

// Funcao para imprimir a lista
void imprimirLista(int *lista, int n) {
    cout << "Lista: ";
    for (int i = 0; i < n; i++) {
        cout << lista[i] << " ";
    }
    cout << endl;
}

// Funcao para inserir um elemento na lista
void inserir(int *&lista, int &n, int valor) {
    int* novaLista = new int[n + 1]; // Cria uma nova lista com tamanho maior
    for (int i = 0; i < n; i++) {
        novaLista[i] = lista[i]; // Copia elementos da lista antiga
    }
    novaLista[n] = valor; // Adiciona o novo elemento
    delete[] lista; // Libera a memoria da lista antiga
    lista = novaLista; // Atualiza o ponteiro para a nova lista
    n++; // Aumenta o tamanho da lista
}

// Funcao para remover um elemento da lista
void remover(int *&lista, int &n, int valor) {
    int index = -1;
    // Procura pelo valor na lista
    for (int i = 0; i < n; i++) {
        if (lista[i] == valor) {
            index = i;
            break;
        }
    }

    // Se o valor nao for encontrado
    if (index == -1) {
        cout << "Valor nao encontrado na lista!" << endl;
        return;
    }

    // Cria uma nova lista com tamanho menor
    int *novaLista = new int[n - 1];
    for (int i = 0, j = 0; i < n; i++) {
        if (i != index) {
            novaLista[j++] = lista[i]; // Copia elementos, exceto o removido
        }
    }
    delete[] lista; // Libera a memoria da lista antiga
    lista = novaLista; // Atualiza o ponteiro para a nova lista
    n--; // Diminui o tamanho da lista
}

// Funcao para buscar um elemento na lista
bool buscar(int *lista, int n, int valor) {
    for (int i = 0; i < n; i++) {
        if (lista[i] == valor) {
            return true; // Valor encontrado
        }
    }
    return false; // Valor nao encontrado
}

int main() {
    int n = 0; // Tamanho da lista
    int *lista = nullptr; // Ponteiro para a lista
    int opcao, valor;

    do {
        cout << "\nMenu:\n";
        cout << "1. Inserir elemento\n";
        cout << "2. Remover elemento\n";
        cout << "3. Buscar elemento\n";
        cout << "0. Sair\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cout << "Digite o valor a ser inserido: ";
                cin >> valor;
                inserir(lista, n, valor);
                imprimirLista(lista, n);
                break;

            case 2:
                cout << "Digite o valor a ser removido: ";
                cin >> valor;
                remover(lista, n, valor);
                imprimirLista(lista, n);
                break;

            case 3:
                cout << "Digite o valor a ser buscado: ";
                cin >> valor;
                if (buscar(lista, n, valor)) {
                    cout << "Valor " << valor << " encontrado na lista!" << endl;
                } else {
                    cout << "Valor " << valor << " nao encontrado na lista!" << endl;
                }
                imprimirLista(lista, n);
                break;

        	case 0:
                cout << "Saindo do programa..." << endl;
                break;

            default:
                cout << "Opcao invalida! Tente novamente." << endl;
        }
    } while (opcao != 0);

    delete[] lista; // Libera a memoria da lista antes de sair
    return 0;
}
