#include <iostream>
#include <locale>

using namespace std;

int main()

{
	setlocale(LC_ALL,"ptb");
	
	int num, contador, res=0;
	
	for(contador=1;contador<=10;contador++)
	{
		cout << "Informe o " << contador << "o. n�mero: ";
		
		cin >> num;
		
		if(num%3==0)
		{
			res++;
		}
	}
	
	cout << "Foram informados " << res << " n�meros m�ltiplos de 3.";
}
