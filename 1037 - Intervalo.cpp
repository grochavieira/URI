#include<stdio.h>
#include <cstdlib>
#include <iostream>
#include<math.h>

using namespace std;



int main()
{
	double A;
	
	cin >> A;
	
	if((A >= 0) && (A <= 25.0000))
	{
		printf("Intervalo [0,25]\n");
	}
	else if((A > 25.0000) && (A <= 50.0000))
	{
        printf("Intervalo (25,50]\n");
	}
	else if((A > 50.0000) && (A <= 75.0000))
	{
        printf("Intervalo (50,75]\n");
	}
	else if((A > 75.0000) && (A <= 100.0000))
	{
        printf("Intervalo (75,100]\n");
	}
	else
	{
        printf("Fora de intervalo\n");
	}




	

    system("pause");
    return 0;
}
