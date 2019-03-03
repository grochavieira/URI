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
    for(J = 60; J>=0; J-=5)
    {
		

		printf("I=%d J=%d\n",I, J);
		I += 3;

	}
    


	system("pause");
	return 0;
}
