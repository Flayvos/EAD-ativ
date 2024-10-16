#include<iostream>

using namespace std;

int main(){
	
	int n1, n2, result;
	int *p1, *p2;
	
	p1 = &n1;
	p2 = &n2;
	
	cout << "Digite o primeiro numero: ";
	cin >> n1;
	cout << "Digite o segundo numero: ";
	cin >> n2;
	
	// Calcular a soma usando os ponteiros e armazenar em 'result'
	result = (*p1)+(*p2);
	
	cout << " A Soma de " << *p1 << " + " << *p2 << " e " << result;

	return 0;
}