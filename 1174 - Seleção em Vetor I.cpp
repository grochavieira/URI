#include <iostream>
#include <stdio.h>
#include<stdio.h>
#include <cstdlib>
#include <iostream>
#include<math.h>
#include <string.h>

using namespace std;



int main(){

	int A;
	float X[100];
	

	for(A = 0; A< 100; A++)
	{

		scanf("%f", &X[A]);
		
	}
    for(A = 0; A< 100; A++)
	{

		if(X[A] <= 10)
		{
			printf("A[%d] = %.1f\n", A, X[A]);
		}

	}
	
	

	system("pause");
	return 0;
}
