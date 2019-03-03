#include <iostream>
#include <stdio.h>
#include<stdio.h>
#include <cstdlib>
#include <iostream>
#include<math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int A, B, X;
	
	scanf("%d", &X);
	
	B = X + 12;
	A = X + 1;
	for(X = A; X <= B; X+= 1)
	{
		
	
	
		if(X%2 != 0)printf("%d\n",X);
		
				
	}

	system("pause");
	return 0;
}
