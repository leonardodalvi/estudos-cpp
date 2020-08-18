#include <iostream>
#include <locale>
#include <math.h>

using namespace std;

int main()

{
	setlocale(LC_ALL, "ptb");
	
	int Numero;
	
	cout << "Escreva um número: ";
	
	cin >> Numero;
	
	cout << "O quadrado do número digitado é " << pow(Numero,2) << " e o cubo do número digitado é " << pow(Numero,3);
}
