#include <iostream>
#include <stdio.h>
#include<stdio.h>
#include <cstdlib>
#include <iostream>
#include<math.h>
#include <string.h>

using namespace std;



int main(){

	int A, T, B;
	int X[1000];
	
	scanf("%d", &T);

	for(A = 0; A<1000; A+=0)
	{
		for(B = 0; B<T; B++)
		{
		X[A] = B;
		if(A < 1000)
		{
        printf("N[%d] = %d\n", A, X[A]);
		}
        A++;
		}
		
	}
   
	
	

	system("pause");
	return 0;
}
