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

	for(A = 1; A <=10 ; A++)
	{

		X = A * N;
		
		printf("%d x %d = %d\n",A, N, X);

	}

	system("pause");
	return 0;
}
