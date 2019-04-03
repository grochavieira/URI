#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
  int i, j = 0, casosTeste, populacaoA, populacaoB;
  float taxaA, taxaB;
  cin >> casosTeste;

  for(i=0; i<casosTeste; i++)
  {
    cin >> populacaoA >> populacaoB >> taxaA >> taxaB;
    while(populacaoA <= populacaoB && j<=100)
    {
      populacaoA = populacaoA + ((populacaoA * taxaA)/100);
      populacaoB = populacaoB + ((populacaoB * taxaB)/100);
      j++;
    }
    if(j > 100)
    {
      cout << "Mais de 1 seculo." << endl;
    }
    else cout << j << " anos." << endl;
    j = 0;
  }
}
