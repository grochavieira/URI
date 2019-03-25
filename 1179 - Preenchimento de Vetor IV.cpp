#include <iostream>
#include <stdio.h>
#include<stdio.h>
#include <cstdlib>
#include <iostream>
#include<math.h>
#include <string.h>

using namespace std;



int main(){

	int A, B, C, P = 0, I = 0;
	int par[15], impar[15], X;
	
	for(A = 0; A<15; A++)
	{

		scanf("%d", &X);
		
		if(X%2 == 0)
		{

			for(B = 1; B<2; B++)
			{

				par[P] = X;
				P++;
				if(P == 5)
				{

					for(B = 0; B<5; B++)
					{

						printf("par[%d] = %d\n", B, par[B]);
						P = 0;
						par[B] = 0;

					}

				}
			}

		}
		else if(X%2 != 0)
		{

            for(C = 1; C<2; C++)
			{

				impar[I] = X;
				I++;
				
				if(I == 5)
				{

					for(C = 0; C<5; C++)
					{

						printf("impar[%d] = %d\n", C, impar[C]);
						I = 0;
						impar[C] = 0;

					}

				}
				
			}

		}

	}
	
	for(B = 0; B<4; B++)
	{

		if(impar[B] != 0)
		{

            printf("impar[%d] = %d\n", B, impar[B]);

		}
	}

    for(B = 0; B<4; B++)
    {
		if(par[B] != 0)
		{

			printf("par[%d] = %d\n", B, par[B]);

		}


	}




	system("pause");
	return 0;
}
