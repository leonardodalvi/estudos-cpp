#include <iostream>
#include <locale>

using namespace std;

int main()

{
	setlocale(LC_ALL,"ptb");
	
	int pedido, nItens;
	
	char continua='S';
	
	float valorTotal;
	
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
	
	while(continua=='S')
	{
	switch(pedido)
	{
		case 100:

			valorTotal+=nItens*5.50;

		break;
		
		case 101:

            valorTotal+=nItens*4.50;

        break;

        case 102:

            valorTotal+=nItens*7.00;

        break;

        case 103:

            valorTotal+=nItens*8.00;

        break;

        case 104:

            valorTotal+=nItens*8.50;

        break;

        default:
      
            cout << "Pedido inv�lido!!!";

    }
    
    cout << "Mais algum pedido? (S/N)";
    
    cin >> continua;
    
    if(continua=='S')
    {
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
	}

    }
	
	cout << "O valor total do seu pedido � R$ " << valorTotal;
}
