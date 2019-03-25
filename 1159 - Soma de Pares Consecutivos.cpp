#include <iostream>
#include <stdio.h>
#include<stdio.h>
#include <cstdlib>
#include <iostream>
#include<math.h>
#include <string.h>

using namespace std;



int main(){
    
	 int X, R1, R2;
	 
	 while(1)
	 {

		scanf("%d", &X);
		
		if(X == 0)
		{

			break;

		}
		else if(X%2 == 0)
		{

			R1 = X + X + 2 + X + 4 + X + 6 + X + 8;
			printf("%d\n", R1);

		}
		else if(X%2 != 0)
		{

			R2 = X + 1 + X + 3 + X + 5 + X + 7 + X + 9;
			printf("%d\n", R2);

		}

	 }
	
	



	system("pause");
	return 0;
}
