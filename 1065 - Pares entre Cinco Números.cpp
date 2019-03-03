#include <iostream>
#include <stdio.h>
#include<stdio.h>
#include <cstdlib>
#include <iostream>
#include<math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int A, B, C = 0;
	
	for(A = 1; A<=5; A++)
	{
		
		scanf("%ld", &B);
		if(B%2 == 0) C++;	
				
	}




	
	
	printf("%d valores pares\n", C);

	system("pause");
	return 0;
}
