#include <iostream>
#include <stdio.h>
#include<stdio.h>
#include <cstdlib>
#include <iostream>
#include<math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	double A, B, C = 0;
	
	for(A = 1; A<=6; A++)
	{
		
		scanf("%lf", &B);
		if(B > 0) C++;
				
	}
	
	printf("%.0lf valores positivos\n", C);
	

	

	
	
	
	
	system("pause");
	return 0;
}
