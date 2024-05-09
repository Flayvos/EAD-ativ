#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

vector<string> palavras = {"programacao", "computador", "elefante", "aventura", "lua", "janela"};
const int maxTentativas = 6;

string selecionarPalavraAleatoria() {
    srand(time(0));
    int indice = rand() % palavras.size();
    return palavras[indice];
}

bool letraEhValida(char letra) {
    return (letra >= 'a' && letra <= 'z');
}

bool letraJaFoiTentada(const vector<char>& tentativas, char letra) {
    for (char tentativa : tentativas) {
        if (letra == tentativa) {
            return true;
        }
    }
    return false;
}

bool tentarRevelarLetra(const string& palavraSecreta, string& palavraOculta, char letra) {
    bool letraRevelada = false;
    for (int i = 0; i < palavraSecreta.length(); i++) {
        if (palavraSecreta[i] == letra) {
            palavraOculta[i] = letra;
            letraRevelada = true;
        }
    }
    return letraRevelada;
}

int main() {
    string palavraSecreta = selecionarPalavraAleatoria();
    string palavraOculta(palavraSecreta.length(), '_');
    vector<char> tentativas;
    int numTentativas = 0;

    cout << "Bem-vindo ao jogo da Forca!\n";
    cout << "A palavra secreta tem " << palavraSecreta.length() << " letras.\n";
    cout << "Voce tem " << maxTentativas << " tentativas para adivinhar a palavra.\n\n";

    while (numTentativas < maxTentativas) {
        cout << "Palavra oculta: " << palavraOculta << "\n";
        cout << "Tentativas ate agora: ";
        for (char tentativa : tentativas) {
            cout << tentativa << " ";
        }
        cout << "\n\n";

        char letra;
        cout << "Digite uma letra: ";
        cin >> letra;

        if (!letraEhValida(letra)) {
            cout << "Por favor, digite uma letra valida (a-z).\n\n";
            continue;
        }

        if (letraJaFoiTentada(tentativas, letra)) {
            cout << "Voce ja tentou essa letra. Tente outra.\n\n";
            continue;
        }

        tentativas.push_back(letra);

        if (tentarRevelarLetra(palavraSecreta, palavraOculta, letra)) {
            cout << "Letra correta!\n\n";
        } else {
            cout << "Letra incorreta. Tente novamente.\n\n";
            numTentativas++;
        }

        if (palavraOculta == palavraSecreta) {
            cout << "Parabens, voce acertou a palavra secreta: " << palavraSecreta << "\n";
            break;
        }
    }

    if (numTentativas == maxTentativas) {
        cout << "Voce excedeu o numero maximo de tentativas. A palavra secreta era: " << palavraSecreta << "\n";
    }

    return 0;
}