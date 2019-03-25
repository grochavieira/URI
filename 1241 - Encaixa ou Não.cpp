#include <iostream>
#include <stdio.h>
#include<stdio.h>
#include <cstdlib>
#include <iostream>
#include<math.h>
#include <string.h>
using namespace std;

int main(int argc, char *argv[])
{
    int n, x, y, i, za, zb, c, d, e=0;
	string a, b;
    scanf("%d", &n);
    
    for(i=0; i<n; i++)
    {

  		cin >> a >> b;
    	za = a.size();
    	zb = b.size();

		if(za < zb)
		{

			printf("nao encaixa\n");

		}
		else if(a == b)
		{

            printf("encaixa\n");

		}
		else
		{
    	for(c = 0, d=za - zb; c<zb; c++, d++)
    	{
           
			if(a[d] == b[c])
			{
				
				e++;
   				if(e == zb)
				{

					printf("encaixa\n");
					e = 0;


				}
				

			}
			else
			{

			 printf("nao encaixa\n");
			 c = za;
			 d = zb;

			}

		}
		}


	}
    
	system("pause");
	return 0;
}
