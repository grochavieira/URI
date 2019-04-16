#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
  int L, V, maior = 0;
  
  while(scanf("%d",&L) != EOF)
  {
    for(int i = 0; i<L; i++)
    {
      cin >> V;
      if(V > maior)
      {
        maior = V;
      }
    }
    if(maior < 10)
    {
      cout << "1" << endl;
    }
    else if(maior >= 10 && maior < 20)
    {
      cout << "2" << endl;
    }
    else if(maior >= 20) cout << "3" << endl;
    maior = 0;
  }
}
