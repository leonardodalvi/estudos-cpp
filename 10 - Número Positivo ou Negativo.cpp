#include <iostream>
#include <locale>

using namespace std;

int main()

{
	setlocale(LC_ALL, "ptb");
	
	int num;
	
	cout << "Informe um n�mero qualquer: ";
	
	cin >> num;
	
	if(num>0)
	{
		cout << "Este n�mero � positivo!";
	}
	else
	{
		cout << "Este n�mero � negativo!";
	}
}
