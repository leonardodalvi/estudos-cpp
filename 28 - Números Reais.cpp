#include <iostream>
#include <locale>

using namespace std;

int main()

{
	setlocale(LC_ALL,"ptb");
	
	int contador;
	
	float num, res=0;
	
	for(contador=1;contador<=15;contador++)
	{
		cout << "Informe o " << contador << "o. n�mero: ";
		
		cin >> num;
		
		if(num>res)
		{
			res=num;
		}
	}
	
	cout << "O maior n�mero informado � " << res << ".";
}
