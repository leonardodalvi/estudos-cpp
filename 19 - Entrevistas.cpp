#include <iostream>
#include <locale>

using namespace std;

int main()

{
	setlocale(LC_ALL,"ptb");
	
	int idade, somaIdade=0, mediaIdade, qtde_entrevistados=0;
	
	float peso, somaPeso=0.0, mediaPeso;
	
	cout << "Informe o peso do entrevistado: ";
	
	cin >> peso;
	
	while (peso!=0)
	{
		cout << "Informe a idade do entrevistado: ";
		
		cin >> idade;
		
		qtde_entrevistados++;
		
		somaPeso+=peso;
		
		somaIdade+=idade;
		
		cout << "Informe o peso do entrevistado: ";
		
		cin >> peso;
	}
	
	if(qtde_entrevistados>0)
	{
		mediaIdade=somaIdade/qtde_entrevistados;
		
		mediaPeso=somaPeso/qtde_entrevistados;
		
		cout << "Foram entrevistadas " << qtde_entrevistados << " pessoas. A média das idades é de " << mediaIdade << " anos e a média dos pesos é de " << mediaPeso << " kg.";
	}
}
