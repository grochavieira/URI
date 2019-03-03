#include <iostream>
#include <stdio.h>
#include<stdio.h>
#include <cstdlib>
#include <iostream>
#include<math.h>


using namespace std;

int main(int argc, char *argv[])
{
	int A, N;
	float A1, A2, A3, X;

	scanf("%d", &N);
	

	for(A = 1; A <=N ; A++)
	{

		scanf("%f %f %f", &A1, &A2, &A3);

		X = (A1 * 2 + A2 * 3 + A3 * 5) / 10;
		
		printf("%.1f\n",X);

	}

	system("pause");
	return 0;
}
