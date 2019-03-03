#include <iostream>
#include <stdio.h>
#include<stdio.h>
#include <cstdlib>
#include <iostream>
#include<math.h>


using namespace std;

int main(int argc, char *argv[])
{
	int A, N, X;

	cin >> N;

	for(A = 1; A <=10000 ; A++)
	{

		if(A%N == 2)
		{

			printf("%d\n", A);

		}

	}

	system("pause");
	return 0;
}
