#include <iostream>

#include <locale>

using namespace std;

int main()

{
	setlocale(LC_ALL, "ptb");
	
	int numeroDias, numeroAnos;
	
	cout << "Digite o n�mero de dias vividos: ";
	
	cin >> numeroDias;
	
	numeroAnos=numeroDias/365;
	
	cout << "Voc� j� viveu " << numeroAnos << " anos.";
}
