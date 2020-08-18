#include <iostream>
#include <locale>

using namespace std;

int main()

{
	setlocale(LC_ALL,"ptb");
	
	int idade;

		cout << "Informe a sua idade: ";

		cin >> idade;

		do
          {
			if(idade>=7 && idade<=12)
			{
			cout << "Você está na categoria infantil.\n";
			}

			else if(idade>=13 && idade<=17)
			{
			cout << "Você está na categoria juvenil.\n";
			}

			else if(idade>=18 && idade<=49)
			{
			cout << "Você está na categoria adulto.\n";
			}
		
			else if(idade>=50)
			{
			cout << "você está na categoria senior.\n";
			}

			else
			{
			cout << "Você está fora da faixa etária permitida para participação na competição.\n";
			}
		
		    cout << "Informe a sua idade: ";

		    cin >> idade;
		
	      }
		
		while(idade!=-1);
          
}
