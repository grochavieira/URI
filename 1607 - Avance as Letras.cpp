#include <iostream>
#include <stdio.h>
#include<stdio.h>
#include <cstdlib>
#include <iostream>
#include<math.h>
#include <string.h>
using namespace std;

using namespace std;

int main(int argc, char *argv[])
{

	int t, a, Asize, Bsize, b, res, cont = 0;
	string A, B;
	scanf("%d", &t);
	
	
	for(a = 1; a<=t; a++)
	{
	
	cin >> A >> B;
	Asize = A.size();
	Bsize = B.size();
	
	if(A == B)
	{

		printf("%d\n", 0);

	}
 	else
	{

		for(b = 0; b<Asize; b++)
		{

			res = A[b] - B[b];
			
			if(res < 0)
			{

				res = res * -1;
				cont += res;

			}
			else if(res > 0)
			{

				res = 26 - res;
				cont += res;

			}
			
			

		}

		cout << cont << endl;
		cont = 0;

	}
}
	



		

	system("pause");
	return 0;
}

