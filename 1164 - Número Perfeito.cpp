#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
  int entrada, numero, i, j = 1, soma = 0;
  cin >> entrada;
  for(i=0; i<entrada; i++)
  {
    cin >> numero;

    while(soma < numero)
    {
      soma += j;
      j++;
    }
    
    if(soma == numero && soma != 1)
    {
      cout << numero << " eh perfeito" << endl;
    }
    else cout << numero << " nao eh perfeito" << endl;
    soma = 0;
    j = 1;
  }
}
