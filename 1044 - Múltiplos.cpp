#include<stdio.h>
#include <cstdlib>
#include <iostream>
#include<math.h>

using namespace std;



int main()
{

	int A, B, AB;
	
	cin >> A >> B;
	
	if((A % B == 0) || (B % A == 0))
	{

		printf("Sao Multiplos\n");

	}
	else
	{

		printf("Nao sao Multiplos\n");

	}


	



	system("pause");
	return 0;


}
