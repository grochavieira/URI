#include<stdio.h>
#include <cstdlib>
#include <iostream>
#include<math.h>

using namespace std;



int main()
{

	double X, Y;
	
	cin >> X >> Y;
	
	if((X == 0)&&(Y == 0))
	{

		printf("Origem\n");

	}
	else if((X > 0)&&(Y > 0))
	{

		printf("Q1\n");

	}
	else if((X < 0)&&(Y > 0))
	{

		printf("Q2\n");

	}
	else if((X < 0)&&(Y < 0))
	{

		printf("Q3\n");

	}
	else if((X > 0)&&(Y < 0))
	{

		printf("Q4\n");

	}
	else if(X == 0)
	{

		printf("Eixo Y\n");

	}
	else if(Y == 0)
	{

		printf("Eixo X\n");

	}
	
	
	
	system("pause");
	return 0;
	
	
}
