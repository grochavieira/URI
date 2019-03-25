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

int main(int argc, char *argv[])
{
	int t, j=0, k=0, l=0, m=0, n=0, D, B, I, bolos, ind, qtd, total = 0, c=0, c2 = 0, aux, aux2;
	
	
	
	scanf("%d", &t);
	
	for(j = 0; j<t; j++)
	{
		scanf("%d %d %d", &D, &I, &B);
		aux2 = D;
		vector <int> valor;
		for(k=0; k<I; k++)
		{
			scanf("%d", &aux);
			valor.push_back(aux);
		}
		
		for(l=0; l<B; l++)
		{
			scanf("%d",&bolos);
			for(m=1; m<=bolos; m++)
			{
				scanf(" %d %d", &ind, &qtd);
				total = total + (qtd * valor[ind]);
				if(m == bolos)
				{
					D = D - total;
                    while(D >= 0)
                    {
						c++;
						D = D - total;
						
					}
					total = 0;
					D = aux2;
					if(c2 < c)
					{
						c2 = c;

					}
					c = 0;
				}
				
			}
		}
		printf("%d\n", c2);
		c2 = 0;
	}

	system("pause");
	return 0;
}
