#include <iostream>
#include <locale>

using namespace std;

int main()

{
	setlocale(LC_ALL,"ptb");
	
	int num, cont, fatorial=1;
	
	cout << "Informe o n�mero para c�lculo do fatorial: ";
	
	cin >> num;
	
	for (cont=1;cont<=num;cont++)
	{
		fatorial*=cont;
	}
	
	cout << "O fatorial de " << num << " �: " << fatorial;
	
}
