#include <iostream>
#include <locale>

using namespace std;

int main()

{
	setlocale(LC_ALL,"ptb");
	
	int idade;
	
	cout << "Escreva a sua idade: ";
	
	cin >> idade;
	
	if (idade>=7 && idade<=12)
		{
			cout << "Voc� est� na categoria infantil.";
		}

	else if (idade>=13 && idade<=17)
		{
			cout << "Voc� est� na categoria juvenil.";
		}

	else if (idade>=18 && idade<=49)
		{
			cout << "Voc� est� na categoria adulto.";
		}
		
	else if (idade>=50)
		{
			cout << "voc� est� na categoria senior.";
		}

	else
		{
			cout << "Voc� � muito novo para participar da competi��o.";
		}
}
