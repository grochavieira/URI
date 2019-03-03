#include <iostream>
#include <stdio.h>
#include<stdio.h>
#include <cstdlib>
#include <iostream>
#include<math.h>
#include <string.h>

using namespace std;



int main(){
    
    int A,N, X, Y, AX = 0, AY = 0;
    int A2;
	int A3;
    
	scanf("%d", &N);
    
    for(A = 1; A<=N; A++)
    {

		scanf("%d %d", &X, &Y);
		
		if(X == Y || X == Y - 1 || X == Y - 1)
		{

			printf("0\n");

		}
		
		else if(X < Y)
		{

			for(A2 = X + 1; A2<Y; A2++)
			{

				if(A2%2!=0)
				{

					AX += A2;

				}

			}
			
			printf("%d\n", AX);
			AX = AX - AX;

		}
		else if(Y < X)
		{

			for(A3 = Y + 1; A3 < X; A3++)
			{

				if(A3%2!=0)
				{

					AY += A3;

				}



			}
			
            printf("%d\n", AY);
            AY = AY - AY;

		}

	}




	system("pause");
	return 0;
}
