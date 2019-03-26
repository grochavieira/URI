#include <iostream>
#include <stdio.h>
using namespace std;

void contaNumero(int entrada)
{
  int i;
  for(i=1;i<=entrada;i++)
  {
    if(i == entrada)
    {
      cout << i;
    }
    else cout << i << " ";
  }
  cout << endl;
}

int main() {
  int entrada = 1;
  cin >> entrada;
  while(entrada != 0)
  {
    contaNumero(entrada);
    cin >> entrada;
  }
}
