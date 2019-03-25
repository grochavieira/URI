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

  	int n, m, i, j, k, l, tam=0, valor, aux = 0,aux2 = 0, cont = 0, cont2 = 0, final=0;

	while(m!=0)
	{
			stack<int> A;
		  	scanf("%d", &m);
		  	valor = 1;
		  	if(m != 0)
			{
			while(valor!=0)
			{

				for(j = 0; j<m; j++)
				{
					scanf("%d", &valor);
					if(valor == 0) break;
					A.push(valor);
				}
				if(valor != 0)
				{
					stack<int> B;
					stack<int> estacao;
					aux = tam = A.size();
					while(A.size() != 0)
					{
						if(A.top() == tam)
						{
							B.push(A.top());
							A.pop();
							tam--;
						}
						else
						{
							estacao.push(A.top());
							A.pop();
						}
						if(estacao.size() != 0)
						{
							aux2 = estacao.size();
							for(k=0;k<aux2;k++)
							{
								if(estacao.top() == tam)
								{
									B.push(estacao.top());
									estacao.pop();
									tam--;
								}
							}
						}
					}
					if(B.size() == aux) printf("Yes\n");
					else printf("No\n");
				}
				else
				{
					printf("\n");
				}

			}
			}

		}
		system("pause");
  		return 0;
	}
