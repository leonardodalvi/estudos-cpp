#include <iostream>
#include <locale>
#include <math.h>

using namespace std;

int main()

{
	setlocale(LC_ALL, "ptb");
	
	int Numero;
	
	cout << "Escreva um n�mero: ";
	
	cin >> Numero;
	
	cout << "O quadrado do n�mero digitado � " << pow(Numero,2) << " e o cubo do n�mero digitado � " << pow(Numero,3);
}
