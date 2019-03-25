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

struct myclass {
  bool operator() (int i,int j) { return (i<j);}
} myobject;

int main() {

 	int n, m, i, j, k, l, valor, aux = 0,aux2 = 0,var1=0, var2=0, cond=0, termo1 = 0, termo2 = 0;

	while(scanf("%d", &n) != EOF)
	{
		vector<int> ord;
		for(i = 0; i<n; i++)
		{
			scanf("%d %d", &var1, &var2);
			for(j = var1; j<=var2; j++)
			{
				ord.push_back(j);
			}
		}	
		sort (ord.begin(), ord.end(), myobject);
		scanf("%d", &valor);
		for(i = 0; i<ord.size(); i++)
		{
			
				if(ord[i] == valor)
				{
					if(cond == 0)termo1 = i;
					cond++;	
				}
		
		}
		if(cond != 0)
		{
			cond -= 1;
			aux2 = termo1 + cond;
			printf("%d found from %d to %d\n", valor, termo1, aux2);
		}
		else printf("%d not found\n", valor);
		cond = 0;
	}
	system("pause");
  	return 0;
}
