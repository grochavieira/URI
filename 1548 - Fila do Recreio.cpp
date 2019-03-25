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

  int n, m, i, j, k, l, valor, aux = 0, cont = 0;
  cin >> n;
  
  for(i = 0; i<n; i++)
  {
	cin >> m;
	list<int> fila1;
  	list<int> fila2;
  	list<int> filaComp;
	for(j = 0; j<m; j++)
	{
		cin >> valor;
		fila1.push_back(valor);
		filaComp.push_back(valor);
	}
	list<int>::iterator it;
	list<int>::iterator it2;
	for(k = 0; k<fila1.size(); k++)
	{
        for(it =filaComp.begin(); it!=filaComp.end(); it++)
		{
			if(*it>aux)
			{
				aux = *it;
			}
		}
		filaComp.remove(aux);
		fila2.push_back(aux);
		aux = 0;
		
	}
	for(it2 = fila2.begin(),it =fila1.begin(); it!=fila1.end(); it++, it2++)
	{
		if(*it == *it2)
		{
			cont++;
		}
	}
	printf("%d\n", cont);
	cont = 0;
  }

  system("pause");
  return 0;
}
