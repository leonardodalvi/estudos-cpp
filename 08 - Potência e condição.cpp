#include <iostream>
#include <locale>
#include <math.h>

using namespace std;

int main()

{
	setlocale(LC_ALL, "ptb");
	
	int Num, quadNum;
	
	cout << "Informe um número qualquer: ";
	
	cin >> Num;
	
	quadNum = pow(Num,2);
	
	cout << "O quadrado deste número é " << quadNum << ". ";
	
	if (quadNum>25)
	{
		cout << "Este número é maior do que 25!";
	}
}
