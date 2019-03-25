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
    int x, y, a=0, b=1, c=0;
    scanf("%d", &x);
    for(y = 1; y <x; y++)
    {

		if(y%2==1)
		{

			printf("%d ", c);
			c = a + b;
			a = c;

		}
		else if(y == 2)
		{

			printf("%d ", c);

		}
		else if(y%2==0)
		{

			printf("%d ", c);
			c = a + b;
			b = c;

		}


	}
	printf("%d\n", c);
    
	system("pause");
	return 0;
}
