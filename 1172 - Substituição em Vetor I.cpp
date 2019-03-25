#include <iostream>
#include <stdio.h>
#include<stdio.h>
#include <cstdlib>
#include <iostream>
#include<math.h>
#include <string.h>

using namespace std;



int main(){

	int A, X[10];
	
	for(A = 0; A< 10; A++)
	{

		scanf("%d", &X[A]);

	}
	for(A = 0; A< 10; A++)
	{

		if(X[A] <= 0)
		{

			X[A] = 1;
			

		}

	}
    for(A = 0; A< 10; A++)
	{


		printf("X[%d] = %d\n", A, X[A]);

	}
	
	

	system("pause");
	return 0;
}
