#include<iostream>
using namespace std;

int main() {
    int n;

    // Solicitando o tamanho dos vetores
    cout << "Informe o tamanho dos vetores: ";
    cin >> n;

    // Alocando dinamicamente os tres vetores V1, V2 e V3
    int *V1 = new int[n];
    int *V2 = new int[n];
    int *V3 = new int[n];

    // Declarando os ponteiros pt1, pt2 e pt3
    int *pt1 = V1;
    int *pt2 = V2;
    int *pt3 = V3;

    // Preenchendo os vetores V1 e V2 com valores informados pelo usuario
    cout << "Preencha o vetor V1:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "V1[" << i << "]: ";
        cin >> pt1[i];  // Acessando V1 atraves do ponteiro pt1
    }

    cout << "Preencha o vetor V2:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "V2[" << i << "]: ";
        cin >> pt2[i];  // Acessando V2 atraves do ponteiro pt2
    }

    // Calculando a soma dos vetores V1 e V2, armazenando em V3
    for (int i = 0; i < n; i++) {
        pt3[i] = pt1[i] + pt2[i];  // Acessando V1 e V2 via pt1 e pt2 e armazenando em V3 via pt3
    }

    // Exibindo os valores do vetor V3
    cout << "Soma dos vetores V1 e V2 (V3):" << endl;
    for (int i = 0; i < n; i++) {
        cout << "V3[" << i << "] = " << pt3[i] << endl;
    }

    // Desalocando a memoria dos vetores
    delete[] V1;
    delete[] V2;
    delete[] V3;

    return 0;
}
