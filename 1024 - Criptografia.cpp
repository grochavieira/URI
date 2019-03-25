#include <iostream>
#include <stdio.h>
#include<stdio.h>
#include <cstdlib>
#include <iostream>
#include<math.h>
#include <string.h>

using namespace std;

int main(int argc, char *argv[])
{

	int N, A, B, C=0, aux, meta, Z, M, K;
	string X;
	scanf("%d", &N);

	for(A = 0; A<=N; A++)
	{
   
        getline(cin,X);
	    C = X.size();

	
	    for(B = 0; B< C + 1; B++)
	    {

			if(X[B] >= 65 && X[B] <= 90 || X[B] >= 97 && X[B] <= 122)
			{

				X[B]+= 3;

			}

		}
		for(B = 0; B< (C + 1) / 2; B++)
	    {
			aux = X[B];
			X[B] = X[(C - 1) - B];
			X[(C - 1) - B] = aux;

		}
		meta = C/2;
		for(Z = C; Z>=meta; Z--)
		{

			X[Z]--;

		}
		
		for(M = 0; M<C; M++)
		{

			cout << X[M];
			if(M == C - 1)
			{

                printf("\n");

			}


		}
		

	}












	
	


	system("pause");
	return 0;
}
