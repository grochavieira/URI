#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
  int i, j = 0, entrada, X, Y, soma = 0;
  cin >> entrada;

  for(i=0; i<entrada; i++)
  {
    cin >> X >> Y;

    while(j < Y)
    {
      if(X % 2 == 1 || X % 2 == -1)
      {
        soma += X;
        j++;
      }
      X++;
    }
    cout << soma << endl;
    j = 0;
    soma = 0;
  }
}
