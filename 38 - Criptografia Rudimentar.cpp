#include <iostream>
#include <locale>

using namespace std;

int main()

{
	setlocale(LC_ALL,"ptb");
	
	char vetor1[20], vetor2[20];

	int ind;

	cout << "Vetor 1:\n";
		
	for(ind=0;ind<=19;ind++)
	{
		cout << "Escreva o " << ind+1 << "o. elemento: ";

		cin >> vetor1[ind];

		vetor2[19-ind]=vetor1[ind];
	}

	cout << "Vetor 2:\n";
	

	for(ind=0;ind<=19;ind++)
	{
		cout << "O " << ind+1 << "o. elemento �: " << vetor2[ind] << "\n";
	}
}
