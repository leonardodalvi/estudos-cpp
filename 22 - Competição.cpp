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
			cout << "Voc� est� na categoria infantil.\n";
			}

			else if(idade>=13 && idade<=17)
			{
			cout << "Voc� est� na categoria juvenil.\n";
			}

			else if(idade>=18 && idade<=49)
			{
			cout << "Voc� est� na categoria adulto.\n";
			}
		
			else if(idade>=50)
			{
			cout << "voc� est� na categoria senior.\n";
			}

			else
			{
			cout << "Voc� est� fora da faixa et�ria permitida para participa��o na competi��o.\n";
			}
		
		    cout << "Informe a sua idade: ";

		    cin >> idade;
		
	      }
		
		while(idade!=-1);
          
}
