#include <iostream>
#include <stdio.h>
#include<stdio.h>
#include <cstdlib>
#include <iostream>
#include<math.h>
#include <string.h>

using namespace std;



int main(){

	int N, j = 1, p = 0, q = 0, i, r, a, b, c, g, h;
	while(1)
	{

		scanf("%d", &N);
		if(N == 0) break;
		else
		{
			j = 1;
			p = 0;
			q = 0;
			int M[N][N];
			i = N;
			if(N%2==0)
			{

				r = N/2;

			}
			else if(N%2 == 1)
			{

				r = (N/2) + 1;

			}
			for(c = 1; c<=r; c++)
			{

				for(a = p; a<i; a++)
				{

					for(b = q; b<i; b++)
					{

						M[a][b] = j;

					}

				}
				j++;
				p++;
				q++;
				i--;

			}
			for(g = 0; g<N; g++)
			{

				for(h = 0; h<N; h++)
				{

					if(h==0)
					{

						printf("%3d", M[g][h]);
					}
					else
					{

                        printf(" %3d", M[g][h]);

					}

				}
				printf("\n");
				

			}
			printf("\n");

		}

	}



	system("pause");
	return 0;
}
