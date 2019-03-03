#include<stdio.h>
#include <cstdlib>
#include <iostream>
#include<math.h>

using namespace std;



int main()
{
	int A, B;
	
	cin >> A >> B;
	
	if(A == 1)
	{

		printf("Total: R$ %.2f\n", B * 4.00);

	}
	else if(A == 2)
	{

        printf("Total: R$ %.2f\n", B * 4.50);

	}
	else if(A == 3)
	{

        printf("Total: R$ %.2f\n", B * 5.00);

	}
	else if(A == 4)
	{

        printf("Total: R$ %.2f\n", B * 2.00);

	}
	else if(A == 5)
	{

        printf("Total: R$ %.2f\n", B * 1.50);

	}
	
	
	
	system("pause");
	return 0;
	
	
}
