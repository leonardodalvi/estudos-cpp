#include <iostream>
#include <locale>

using namespace std;

int main()

{
	setlocale(LC_ALL,"ptb");
	
	int pedido, nItens;
	
	char *nomeItem;
	
	float valorTotal;
	
	bool invalido=false;
	
	cout << "*** Card�pio ***\n";
	cout << "100 � Hamb�rguer � R$5,50\n";
	cout << "101 � Cachorro-quente � R$4,50\n";
	cout << "102 � Milkshake � R$7,00\n";
	cout << "103 � Pizza brotinho � R$8,00\n";
	cout << "104 � Cheeseburguer � R$8,50\n";
	cout << "\n";
	cout << "Informe seu pedido: ";
	
	cin >> pedido;
	
	cout << "Informe a quantidade: ";
	
	cin >> nItens;
	
	switch(pedido)
	{
		case 100:

			nomeItem="Hamb�rguer(es)";
			valorTotal=nItens*5.50;

		break;
		
		case 101:

            nomeItem="Cachorro-quente(s)";
            valorTotal=nItens*4.50;

        break;

        case 102:

            nomeItem="Milkshake(s)";
            valorTotal=nItens*7.00;

        break;

        case 103:

            nomeItem="Pizza(s) brotinhos(s)";
            valorTotal=nItens*8.00;

        break;

        case 104:

            nomeItem="Cheeseburguer(es)";
            valorTotal=nItens*8.50;

        break;

        default:

            invalido=true;
      
            cout << "Pedido inv�lido!!!";

    }

    if (!invalido)
    {

        cout << "Voc� pediu: " << nItens << " " << nomeItem << " cujo valor total � R$ " << valorTotal;
	
	}
}
