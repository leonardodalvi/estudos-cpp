#include <iostream>
#include <locale>

using namespace std;

int main()

{

  setlocale(LC_ALL,"ptb");
  
  int num, contador, res;

  contador=0;

  cout << "Voc� deseja ver a tabuada de que n�mero? ";

  cin >> num;

  do

  {

    res = num * contador;

    cout << num << " x " << contador << " = " << res << "\n";

    contador++;

  } while (contador<=10);

}
