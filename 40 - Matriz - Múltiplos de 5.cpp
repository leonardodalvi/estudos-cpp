#include <iostream>
#include <locale>

using namespace std;

int main()

{
	setlocale(LC_ALL,"ptb");
	
	int matriz[3][4], lin, col, qtdeMultiplos5=0;

		for (lin=0;lin<=2;lin++)
		{
			cout << "Informe os n�meros da " << lin+1 << "a. linha da Matriz:\n";

			for (col=0;col<=3;col++)
			{
				cout << "N�mero da " << col+1 << "a. coluna: ";

				cin >> matriz[lin][col];

				if (matriz[lin][col]%5==0)
				{
					qtdeMultiplos5++;
				}
			}
		}

		cout << "Quantidade de n�meros m�ltiplos de 5 armazenados na Matriz: " << qtdeMultiplos5;
	
}
