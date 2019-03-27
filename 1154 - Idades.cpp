#include <iostream>
#include <stdio.h>
using namespace std;

void calculaMediaIdade(int i, int *id)
{
  int j;
  float mediaIdade = 0;
  for(j=0;j<i-1;j++)
  {
    mediaIdade += id[j];
    if(j == i-2)
    {
      mediaIdade = mediaIdade / (i-1 * 1.0);
      cout << fixed;
      cout.precision(2);
      cout << mediaIdade << endl;
    }
  }
}

int main() {
  int idade = 1, i = 0, id[100];

  while(idade >= 0)
  {
    cin >> idade;
    id[i] = idade;
    i++;
  }
  calculaMediaIdade(i,id);
}
