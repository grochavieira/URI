#include <iostream>
#include <list>
#include <map>
#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include<math.h>
#include <string.h>
#include <vector>
#include <algorithm>
#include <map>
#include <stack>

using namespace std;

int main() {

  string fruta, fruta2;
  int qtd;
  float valor;

  float Total, aux;

  int aux2, n, m, p, i=0, j=0, k=0, x=0, y=0;

  cin >> n;

  for(i = 0; i<n; i++)
  {
    map<string,float> mapa1;
  	map<string,int> mapa2;
    cin >> m;

    for(j = 0; j<m; j++)
    {
      cin >> fruta >> valor;
      mapa1[fruta] = valor;
    }

    cin >> p;

    for(k=0; k<p; k++)
    {
      cin >> fruta2 >> qtd;
      mapa2[fruta2] = qtd;
    }


    map<string, float>::iterator it;
    map<string, int>::iterator it2;
    for(it = mapa1.begin(); it!=mapa1.end();it++)
    {
      for(it2 = mapa2.begin(); it2!=mapa2.end();it2++)
      {
        if(it->first == it2->first)
        {

			Total +=(it->second * it2->second);

		}
      }

    }
    printf("R$ %.2f\n", Total);
    Total = 0;
  }

  system("pause");
  return 0;
}
