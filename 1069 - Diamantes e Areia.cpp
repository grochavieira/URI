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
	int n, i = 0, j = 0, k = 0, valor = 0, stop = 0;
	char diamante[1001];
	cin >> n;
	
	for(j = 0; j < n; j++)
	{
		scanf("%s", &diamante);
		valor = 0;
		for(i = 0; diamante[i] != '\0'; i++)
		{
			if(diamante[i] == '<')
			{
				for(k = i; diamante[k] != '\0'; k++)
				{
					if(stop == 0)
					{
						if(diamante[k] == '>')
						{
							valor = valor + 1;
							diamante[k] = '!';
							stop = 1;
						}
					}
					
				}
				stop = 0;
			}
			
			
		}
		printf("%d\n", valor);
		
		
	}

	

    system("pause");
	return 0;

}
