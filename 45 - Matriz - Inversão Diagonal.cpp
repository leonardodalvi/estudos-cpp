#include <iostream>
#include <locale>

using namespace std;

int main()

{
	setlocale(LC_ALL,"ptb");
	
	int M1[2][2], M2[2][2], lin, col, aux;

		for (lin=0;lin<=1;lin++)
		{
			cout << "Informe os números da " << lin+1 << "a. linha da 1a. Matriz:\n";

			for (col=0;col<=1;col++)
			{
				cout << "Número da " << col+1 << "a. coluna: ";

				cin >> M1[lin][col];
			}
		}

		for (lin=0;lin<=1;lin++)
		{
			cout << "Informe os números da " << lin+1 << "a. linha da 2a. Matriz:\n";

			for (col=0;col<=1;col++)
			{
				cout << "Número da " << col+1 << "a. coluna: ";

				cin >> M2[lin][col];
			}
		}

		for (lin=0;lin<=1;lin++)
		{
			for (col=0;col<=1;col++)
			{
				
				if (lin==col)
				{
					aux=M1[lin][col];
					M1[lin][col]=M2[lin][col];
					M2[lin][col]=aux;
				}
				
			}
		}

		cout << "Novo valores das Matrizes:\n";

		for (lin=0;lin<=1;lin++)
		{
			cout << "Números da " << lin+1 << "a. linha da 1a. Matriz:\n";

			for (col=0;col<=1;col++)
			{
				cout << "Número da " << col+1 << "a. coluna: ";

				cout << M1[lin][col] << "\n";
			}
		}

		for (lin=0;lin<=1;lin++)
		{
			cout << "Números da " << lin+1 << "a. linha da 2a. Matriz:\n";

			for (col=0;col<=1;col++)
			{
				cout << "Número da " << col+1 << "a. coluna: ";

				cout << M2[lin][col] << "\n";
			}
		}
	
}
