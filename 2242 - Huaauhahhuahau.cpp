#include <iostream>
#include <stdio.h>
#include<stdio.h>
#include <cstdlib>
#include <iostream>
#include<math.h>
#include <string.h>
#include <sstream>
#include <map>

using namespace std;

int main(int argc, char *argv[])
{
	char x[60], k[60];
	int i, j = 0;
	int tamanho;
	scanf("%s", x);
    for(i=0; x[i]; i++)
    {

		if(x[i] == 'a' || x[i] == 'e' || x[i] == 'i' || x[i] == 'o' || x[i] == 'u')
		{

			k[j] = x[i];
			j++;

		}

	}
	k[j] = '\0';
	tamanho = strlen(k);
	
	for(i = 0, j = tamanho - 1; i<tamanho; i++, j--)
	{

			if(k[i] != k[j])
			{

				printf("N\n");
                system("pause");
				return 0;
			}

	}
	printf("S\n");


	system("pause");
	return 0;
}
