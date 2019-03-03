#include <iostream>
#include <stdio.h>
#include<stdio.h>
#include <cstdlib>
#include <iostream>
#include<math.h>
#include <string.h>

using namespace std;



int main(){
    
	int X, Y;
	
	while(1)
	{

		scanf("%d %d", &X, &Y);
		
		if(X > 0 && Y > 0)
		{

			printf("primeiro\n");

		}
		else if(X > 0 && Y < 0)
		{

            printf("quarto\n");

		}
		else if(X < 0 && Y < 0)
		{

            printf("terceiro\n");

		}
		else if(X < 0 && Y > 0)
		{

            printf("segundo\n");

		}
		else if(X == 0 || Y == 0)
		{

			break;

		}

	}
	
	
	



	system("pause");
	return 0;
}
