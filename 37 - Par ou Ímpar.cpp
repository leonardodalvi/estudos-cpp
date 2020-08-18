#include <iostream>
#include <locale>

using namespace std;

int main()

{
	setlocale(LC_ALL,"ptb");
	
	int jogadorA[10], jogadorB[10], ind, Avenceu=0, Bvenceu=0;

	for(ind=0;ind<=9;ind++)
	{
		
		cout << "Jogador A escolhe um número: ";

		cin >> jogadorA[ind];

		cout << "Jogador B escolhe um número: ";

		cin >> jogadorB[ind];

		if((jogadorA[ind]+jogadorB[ind])==0)
		{
			cout << "Esta rodada não teve vencedor!\n";
		}
		else
		{
			if((jogadorA[ind]+jogadorB[ind])%2==0)
			{
				cout << "Jogador A venceu esta rodada!\n";

				Avenceu++;
			}

			else
			{
				cout << "Jogador B venceu esta rodada!\n";

				Bvenceu++;
			}

		}
	}

	if(Avenceu>Bvenceu)
	{
		cout << "Jogador A venceu " << Avenceu << " rodadas e é o vencedor do jogo!";
	}
	else if(Avenceu<Bvenceu)
	{
		cout << "Jogador B venceu " << Bvenceu << " rodadas e é o vencedor do jogo!";
	}
	else
	{
		cout << "Este jogo empatou!";
	}
}
