#include <iostream>
#include <stdio.h>
using namespace std;

int verificaNumeroPrimo(int numero)
{
  int j, cont = 0;
  for(j=1; j<=numero; j++)
  {
    if(numero%j == 0)
    {
      cont++;
    }
  }
  if(cont > 2)
  {
    return 1;
  }
  return 0;
}

int main() {
  int casoTeste, numero, i, j, cont = 0;
  cin >> casoTeste;

  for(i=0; i<casoTeste; i++)
  {
    cin >> numero;

    if(verificaNumeroPrimo(numero) == 1)
    {
      cout << numero << " nao eh primo" << endl;
    }
    else cout << numero << " eh primo" << endl;
  }
}
