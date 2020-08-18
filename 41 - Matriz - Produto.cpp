#include <iostream>
#include <locale>

using namespace std;

int main()

{
	setlocale(LC_ALL,"ptb");
	
	float matriz[4][4];

	int lin, col, nLinha;

	for (lin=0;lin<=3;lin++)
	{
		cout << "Informe os números da " << lin+1 << "a. linha da Matriz:\n";

		for (col=0;col<=3;col++)
		{
			cout << "Número da " << col+1 << "a. coluna: ";

			cin >> matriz[lin][col];
		}
	}

	cout << "Que linha da Matriz gostaria de visualizar?\n";

	cin >> nLinha;

	cout << "A linha " << nLinha << " da Matriz é composta dos seguintes elementos:\n";

	lin=nLinha-1;

	for (col=0;col<=3;col++)
	{
		cout << "Número da " << col+1 << "a. coluna: ";

		cout << matriz[lin][col] << "\n";
	}
	
}
