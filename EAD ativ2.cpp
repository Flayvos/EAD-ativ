#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3,op;

    do {
        cout << "Menu:\n";
        cout << "1 - Verificar triangulo\n";
        cout << "2 - Sair\n";
        cout << "Selecione uma opcao: ";
        cin >> op;
        switch(op) {
            case 1:
                cout << "Digite o comprimento do lado 1: ";
                cin >> n1;
                cout << "Digite o comprimento do lado 2: ";
                cin >> n2;
                cout << "Digite o comprimento do lado 3: ";
                cin >> n3;

                if(n1 == n2 && n2 == n3) {
                    cout << "Triangulo Equilatero.\n\n";
                } else if(n1 == n2 || n1 == n3 || n2 == n3) {
                    cout << "Triangulo Isosceles.\n\n";
                } else {
                    cout << "Triangulo Escaleno.\n\n";
                }
                break;
			case 2:
                cout << "Encerrando programa...\n";
                break;
            default:
                cout << "Opcao invalida. Tente novamente.\n\n";
        }

    } while(op != 2);

    return 0;
}