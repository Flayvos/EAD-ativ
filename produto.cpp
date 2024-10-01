#include <iostream>
#include <string>
using namespace std;

// Estrutura para representar um Produto
struct Produto {
    string nome;
    int quantidadeInicial;
    int quantidadeVendida;
    float valorVenda;
};

// Funcao para cadastrar os produtos
void cadastrarProdutos(Produto produtos[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Cadastro do Produto " << i + 1 << ":\n";
        cout << "Nome do produto: ";
        cin.ignore();  
        getline(cin, produtos[i].nome);  
        cout << "Quantidade inicial em estoque: ";
        cin >> produtos[i].quantidadeInicial;
        cout << "Quantidade vendida: ";
        cin >> produtos[i].quantidadeVendida;
        cout << "Valor de venda: ";
        cin >> produtos[i].valorVenda;
        cout << endl;
    }
}

// Funcao para imprimir a quantidade restante de cada produto
void imprimirEstoqueRestante(Produto produtos[], int n) {
    cout << "\n=== Estoque Restante ===\n";
    for (int i = 0; i < n; i++) {
        int quantidadeRestante = produtos[i].quantidadeInicial - produtos[i].quantidadeVendida;
        cout << "Produto: " << produtos[i].nome << " | Estoque restante: " << quantidadeRestante << endl;
    }
}

int main() {
    int n;

    // Solicita a quantidade de produtos a serem cadastrados
    cout << "Quantos produtos deseja cadastrar? ";
    cin >> n;

    // Aloca um vetor de produtos dinamicamente
    Produto* produtos = new Produto[n];

    // Cadastra os produtos
    cadastrarProdutos(produtos, n);

    // Imprime a quantidade restante de cada produto
    imprimirEstoqueRestante(produtos, n);

    // Libera a memoria alocada
    delete[] produtos;

    return 0;
}
