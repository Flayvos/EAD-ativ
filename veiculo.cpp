#include <iostream>
#include <string>
using namespace std;

// Classe para representar um Veiculo
class Veiculo {
private:
    string nome;
    string placa;
    string fabricante;
    string cor;

public:
    // Metodo para cadastrar um veiculo
    void cadastrarVeiculo() {
        cout << "Nome do veiculo: ";
        getline(cin, nome);
        cout << "Placa: ";
        getline(cin, placa);
        cout << "Fabricante: ";
        getline(cin, fabricante);
        cout << "Cor: ";
        getline(cin, cor);
        cout << endl;
    }

    // Metodo para imprimir as informacoes do veiculo
    void imprimirVeiculo() const {
        cout << "Nome: " << nome << ", Placa: " << placa
             << ", Fabricante: " << fabricante << ", Cor: " << cor << endl;
    }
};

// Funcao principal
int main() {
    int n;

    // Solicita a quantidade de veiculos a serem cadastrados
    cout << "Quantos veiculos deseja cadastrar? ";
    cin >> n;
    cin.ignore();  // Limpa o buffer de entrada

    // Cria um array de objetos da classe Veiculo
    Veiculo* veiculos = new Veiculo[n];

    // Cadastra os veiculos
    for (int i = 0; i < n; i++) {
        cout << "Cadastro do Veiculo " << i + 1 << ":\n";
        veiculos[i].cadastrarVeiculo();
    }

    // Imprime todos os veiculos cadastrados
    cout << "\n=== Veiculos Cadastrados ===\n";
    for (int i = 0; i < n; i++) {
        veiculos[i].imprimirVeiculo();
    }

    // Libera a memoria alocada dinamicamente
    delete[] veiculos;

    return 0;
}
