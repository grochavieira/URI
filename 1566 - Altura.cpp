#include <iostream>
#include <list>
#include <stdio.h>
#include <cstdlib>
#include <math.h>
#include <string.h>
#include <vector>
#include <algorithm>
#include <map>
#include <stack>
using namespace std;

struct myclass
{
	bool operator() (int i, int j) {return (i<j);}
}myobject;

int main() {
  int n=0, m=0, i=0, j=0, k=0, l=0, valor, aux = 0;
  cin >> n;
  for(i = 0; i<n; i++)
  {
 	vector<int> fila1;
	scanf("%d", &m);
	for(j = 0; j<m; j++)
	{
		scanf("%d", &valor);
		fila1.push_back(valor);
	}
	sort(fila1.begin(), fila1.end(), myobject);
	for(k = 0; k<fila1.size(); k++)
	{
		if(k+1 == fila1.size())
		{
		    cout << fila1[k] << endl;
		}
		else
		{
            cout << fila1[k] << " ";
		}
	}
	j = k = l = 0;
  }
  system("pause");
  return 0;
}
