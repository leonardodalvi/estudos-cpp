#include <iostream>
#include <locale>

using namespace std;

int main()

{
	setlocale(LC_ALL,"ptb");
	
	int maximo, contador, par=0, impar=0;
	
	cout << "Informe um n�mero limite para a contagem: ";
	
	cin >> maximo;
	
	for (contador=1;contador<=maximo;contador++)
	{
		cout << contador << "\n";
		
		if (contador%2==0)
		{
			par++;
		}
		
		else
		{
			impar++;
		}
	}
	
	cout << "Foram exibidos " << par << " n�meros pares e " << impar << " n�meros �mpares.";
}
