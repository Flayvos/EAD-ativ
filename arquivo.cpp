#include <iostream>
#include <fstream>  
#include <string>   
using namespace std;

// Funcao para exibir o menu
void exibirMenu() {
    cout << "\n===== MENU =====" << endl;
    cout << "1. ABRIR" << endl;
    cout << "2. NOVO" << endl;
    cout << "3. FECHAR" << endl;
    cout << "Escolha uma opcao: ";
}

// Funcao para abrir e ler um arquivo txt
void abrirArquivo() {
    string nomeArquivo, linha;
    
    cout << "Digite o nome do arquivo para abrir (com extensao .txt): ";
    cin >> nomeArquivo;

    ifstream arquivo(nomeArquivo); 
    
    if (arquivo.is_open()) {
        cout << "\nConteudo do arquivo " << nomeArquivo << ":\n";
        while (getline(arquivo, linha)) {
            cout << linha << endl; 
        }
        arquivo.close(); 
    } else {
        cout << "Erro: Nao foi possivel abrir o arquivo." << endl;
    }
}

// Funcao para criar e gravar em um novo arquivo txt
void novoArquivo() {
    string nomeArquivo, texto;

    cout << "Digite o nome do novo arquivo (com extensao .txt): ";
    cin >> nomeArquivo;

    ofstream arquivo(nomeArquivo); 
    
    cout << "Digite o texto que deseja gravar no arquivo (digite 'FIM' para finalizar):\n";
    cin.ignore(); 
    while (true) {
        getline(cin, texto);
        if (texto == "FIM") break;
        arquivo << texto << endl; 
    }

    arquivo.close(); 
    cout << "Arquivo " << nomeArquivo << " criado e gravado com sucesso." << endl;
}

// Funcao principal com o menu interativo
int main() {
    int opcao;

    do {
        exibirMenu();
        cin >> opcao;

        switch (opcao) {
            case 1:
                abrirArquivo();
                break;
            case 2:
                novoArquivo(); 
                break;
            case 3:
                cout << "Saindo do sistema..." << endl;
                break;
            default:
                cout << "Opcao invalida. Tente novamente." << endl;
        }
    } while (opcao != 3);

    return 0;
}
