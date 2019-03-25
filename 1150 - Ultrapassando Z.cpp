#include <iostream>
#include <stdio.h>
#include<stdio.h>
#include <cstdlib>
#include <iostream>
#include<math.h>
#include <string.h>

using namespace std;



int main(){

	 int X, Z, A, B=0, C=0;

	 scanf("%d", &X);
	 
	 do{

		scanf("%d", &Z);

	}
	while(X>=Z);
	
	for(A=X; B <= Z; A++)
	{

		B+=A;
		C++;

	}
	printf("%d\n", C);




	system("pause");
	return 0;
}
