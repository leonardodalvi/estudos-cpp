#include <iostream>
#include <locale>

using namespace std;

int main()

{
	setlocale(LC_ALL,"ptb");
	
	int num, cont, fatorial=1;
	
	cout << "Informe o número para cálculo do fatorial: ";
	
	cin >> num;
	
	for (cont=1;cont<=num;cont++)
	{
		fatorial*=cont;
	}
	
	cout << "O fatorial de " << num << " é: " << fatorial;
	
}
