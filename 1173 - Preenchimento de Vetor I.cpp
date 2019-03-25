#include <iostream>
#include <stdio.h>
#include<stdio.h>
#include <cstdlib>
#include <iostream>
#include<math.h>
#include <string.h>

using namespace std;



int main(){

	int A, X[10], N, M;
	scanf("%d", &N);
	X[0] = N;
	for(A = 1; A< 10; A++)
	{
		N += N;
		X[A] = N;
		


	}
    for(A = 0; A< 10; A++)
	{


		printf("N[%d] = %d\n", A, X[A]);

	}
	
	

	system("pause");
	return 0;
}
