#include <iostream>
#include <stdio.h>
#include<stdio.h>
#include <cstdlib>
#include <iostream>
#include<math.h>


using namespace std;

int main(int argc, char *argv[])
{
	int A, B, C = 0, X;
	
	for(A = 1; A <=100; A++)
	{

		scanf("%d", &B);
		
		if(B > C)
		{

			C = B;
			X = A;

		}

	}
	
 	printf("%d\n", C);
 	printf("%d\n", X);

	system("pause");
	return 0;
}
