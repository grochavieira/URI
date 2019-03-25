#include <iostream>
#include <stdio.h>
#include<stdio.h>
#include <cstdlib>
#include <iostream>
#include<math.h>
#include <string.h>

using namespace std;



int main(){

	int A, N, W, Z, valor;

	scanf("%d", &N);

	int X[N];

	for(A = 0; A<N; A++)
	{

		scanf("%d", &X[A]);
		W = X[0];

	}
	
	for(A = 0; A<N; A++)
	{

		if(W > X[A])
		{

			valor = X[A];
			Z = A;
			W = X[A];

		}

	}
	printf("Menor valor: %d\n", valor);
	printf("Posicao: %d\n", Z);




	system("pause");
	return 0;
}
