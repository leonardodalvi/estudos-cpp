#include <iostream>
#include <locale>

using namespace std;

int main()

{
	setlocale(LC_ALL,"ptb");
	
	float med1, med2, med3;
	
	cout << "Informe as medidas do tri�ngulo:\n";
	
	cout << "Medida 1: ";
	
	cin >> med1;
	
	cout << "Medida 2: ";
	
	cin >> med2;
	
	cout << "Medida 3: ";
	
	cin >> med3;
	
	if (med1==med2 && med2==med3 && med1==med3)
	{
		cout << "Este tri�ngulo � equil�tero.";
	}
	
	else if (med1!=med2 && med2!=med3 && med1!=med3)
	{
		cout << "Este tri�ngulo � is�sceles.";
	}
	
	else
	{
		cout << "Este tri�ngulo � escaleno.";
	}
}
