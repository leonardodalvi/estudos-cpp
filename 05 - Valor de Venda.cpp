#include <iostream>
#include <locale>

using namespace std;

int main()

{
	setlocale(LC_ALL, "ptb");
	
	float valorCompra, valorVenda;
	
	cout << "Digite o valor de compra do produto: ";
	
	cin >> valorCompra;
	
	valorVenda=valorCompra*1.2;
	
	cout << "Você pode vender o produto por R$ " << valorVenda;
}
