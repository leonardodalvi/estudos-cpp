#include <iostream>
#include <locale>

using namespace std;

int main()

{
	setlocale(LC_ALL,"ptb");
	
	float med1, med2, med3;
	
	cout << "Informe as medidas do triângulo:\n";
	
	cout << "Medida 1: ";
	
	cin >> med1;
	
	cout << "Medida 2: ";
	
	cin >> med2;
	
	cout << "Medida 3: ";
	
	cin >> med3;
	
	if (med1==med2 && med2==med3 && med1==med3)
	{
		cout << "Este triângulo é equilátero.";
	}
	
	else if (med1!=med2 && med2!=med3 && med1!=med3)
	{
		cout << "Este triângulo é isósceles.";
	}
	
	else
	{
		cout << "Este triângulo é escaleno.";
	}
}
