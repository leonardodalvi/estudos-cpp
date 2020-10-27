//Solicita do usuário 2 variáveis (anoAtual) e (anoNasc) e calcula a variável idade (idade)

#include <iostream>

#include <locale>

using namespace std;

int main()

{
	setlocale(LC_ALL,"ptb");
	
	int anoAtual, anoNasc, idade;
	
	cout <<"Ano atual: ";
	
	cin >> anoAtual;
	
	cout <<"Ano de Nascimento: ";
	
	cin >> anoNasc;
	
	idade=anoAtual-anoNasc;
	
	cout <<"Você tem ou fará " << idade << " anos.";
}