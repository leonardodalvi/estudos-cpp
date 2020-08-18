#include <iostream>
#include <locale>

using namespace std;

int main()

{
	setlocale(LC_ALL,"ptb");
	
	char gabarito[15], prova[15];
	
	int qtdeAlunos, aluno=1, questao, acertos=0;
	
	cout << "Informe a quantidade de alunos na turma: ";
	
	cin >> qtdeAlunos;
	
	cout << "** Vamos definir o gabarito da prova **\n";
	
	for (questao=0; questao<=14; questao++)
	{
		cout << "Informe o gabarito da " << questao+1 << "a. questão da prova: ";
		
		cin >> gabarito[questao];
		
		if(gabarito[questao]!='A' && gabarito[questao]!='B' && gabarito[questao]!='C' && gabarito[questao]!='D' && gabarito[questao]!='E')
		{
			cout << "Gabarito inválido!\n";
			
			cout << "Informe o gabarito da " << questao+1 << "a. questão da prova: ";
		
			cin >> gabarito[questao];
		}
	}
	
	cout << "** Vamos inserir as respostas dos alunos **\n";
	
	while (aluno<=qtdeAlunos)
	{
		for (questao=0; questao<=14; questao++)
		{
			cout << "Informe a resposta da " << questao+1 << "a. questão da prova do " << aluno << "o. aluno: ";
		
			cin >> prova[questao];
			
			if(prova[questao]!='A' && prova[questao]!='B' && prova[questao]!='C' && prova[questao]!='D' && prova[questao]!='E')
			{
				cout << "Resposta inválida!\n";
			
				cout << "Informe a resposta da " << questao+1 << "a. questão da prova do " << aluno << "o. aluno: ";
		
				cin >> prova[questao];
			}
		
			if (gabarito[questao]==prova[questao])
			{
				acertos++;
			}

		}
	
		cout << "O aluno acertou " << acertos << " questão(ões).\n";
		
		aluno++;
		
		acertos=0;
	}
	
}
