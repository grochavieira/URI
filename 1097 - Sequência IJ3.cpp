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
    int I, J, X;
    I = 1;
    X = 7;
    for(I = 1; I<=9; I+=2)
    {

		for(J = X; J>= X - 2; J--)
		{

			printf("I=%d J=%d\n", I, J);
			
			

		}
		X+=2;
	

	}
    


	system("pause");
	return 0;
}
