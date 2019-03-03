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
    int I, J;
    I = 1;
    for(I = 1; I<=9; I+=2)
    {
		
		for(J = 7; J>=5; J--)
		{

			printf("I=%d J=%d\n", I, J);

		}

	}
    


	system("pause");
	return 0;
}
