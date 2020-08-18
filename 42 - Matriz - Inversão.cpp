#include <iostream>
#include <locale>

using namespace std;

int main()

{
	setlocale(LC_ALL,"ptb");
	
	int matriz1[4][4], matriz2[4][4], lin, col;

		for (lin=0;lin<=3;lin++)
		{
			cout << "Informe os números da " << lin+1 << "a. linha da 1a. Matriz:\n";

			for (col=0;col<=3;col++)
			{
				cout << "Número da " << col+1 << "a. coluna: ";

				cin >> matriz1[lin][col];
			}
		}

		for (lin=0;lin<=3;lin++)
		{
			for (col=0;col<=3;col++)
			{
				matriz2[lin][col]=matriz1[col][lin];
			}
		}

		cout << "Valores da 2a. Matriz:\n";

		for (lin=0;lin<=3;lin++)
		{
			cout << "Números da " << lin+1 << "a. linha da 2a. Matriz:\n";

			for (col=0;col<=3;col++)
			{
				cout << "Número da " << col+1 << "a. coluna: ";

				cout << matriz2[lin][col] << "\n";
			}
		}
	
}
