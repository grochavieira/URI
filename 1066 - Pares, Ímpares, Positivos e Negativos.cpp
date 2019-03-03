#include <iostream>
#include <stdio.h>
#include<stdio.h>
#include <cstdlib>
#include <iostream>
#include<math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int A, B, Par = 0, Impar = 0, Pos = 0, Neg = 0;
	
	for(A = 1; A<=5; A++)
	{
		
		scanf("%ld", &B);
		
		if(B%2 == 0) Par++;	
		if(B%2 != 0) Impar++;
		if(B > 0) Pos++;
		if(B < 0) Neg++;
				
	}




	
	
	printf("%d valor(es) par(es)\n", Par);
	printf("%d valor(es) impar(es)\n", Impar);
	printf("%d valor(es) positivo(s)\n", Pos);
	printf("%d valor(es) negativo(s)\n", Neg);

	system("pause");
	return 0;
}
