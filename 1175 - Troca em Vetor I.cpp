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
	int X[20];
	

	for(A = 19; A>=0; A--)
	{

		scanf("%d", &X[A]);
		
	}
    for(A = 0; A< 20; A++)
	{

		
		printf("N[%d] = %d\n", A, X[A]);

	}
	
	

	system("pause");
	return 0;
}
