#include <iostream>
#include <locale>
#include <math.h>

using namespace std;

int main()

{
	setlocale(LC_ALL, "ptb");
	
	int Num, quadNum;
	
	cout << "Informe um n�mero qualquer: ";
	
	cin >> Num;
	
	quadNum = pow(Num,2);
	
	cout << "O quadrado deste n�mero � " << quadNum << ". ";
	
	if (quadNum>25)
	{
		cout << "Este n�mero � maior do que 25!";
	}
}
