#include <iostream>
#include <locale>

using namespace std;

int main()

{
	setlocale(LC_ALL,"ptb");
	
	int regressiva;
	
	cout << "Qual o valor para início da contagem regressiva? ";
	
	cin >> regressiva;
	
	do
	{
		cout << regressiva << "\n";
		
		regressiva--;
	}
	
	while(regressiva>=0);
}
