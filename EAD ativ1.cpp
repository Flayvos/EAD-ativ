#include <iostream>
using namespace std;

#define numLadosRetangulo 4
#define fatorConversao 0.01

int main(){
	float b,h,p;
	
	
	cout << "Digite o comprimento do retangulo (cm): ";
	cin >> b;
	
	
	if(b <= 0){
		cout<< "O comprimento deve ser um valor positivo. Encerrando o programa.";
		return 0;
	}
	
	
	cout << "Digite a largura do retangulo (cm): ";
	cin >> h;
	
	
	if(h <= 0){
		cout<< "A largura deve ser um valor positivo. Encerrando o programa.";
		return 0;
	}
	
	
	p=2*(b+h);
	
	
	cout << "O perimetro do retangulo em metros e: "<< p * fatorConversao << "m\n";	
	
	
	return 0;	
	
}
