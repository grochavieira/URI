#include <stdio.h>
#include<stdio.h>
#include <cstdlib>
#include <iostream>
#include<math.h>
#include <cctype>

int main()

{

	float S, NS, RG;
	int P;
	char Por;
	Por = '%';

    scanf("%f", &S);
    
    if((S >= 0) && (S <= 400))
    {

		P = 15;
		RG = S * 15/100;
		NS = S + RG;
		
		printf("Novo salario: %.2f\n", NS);
		printf("Reajuste ganho: %.2f\n", RG);
		printf("Em percentual: %i %c\n", P, Por);

	}
	else if((S >= 400.01) && (S <= 800))
    {

		P = 12;
		RG = S * P/100;
		NS = S + RG;

		printf("Novo salario: %.2f\n", NS);
		printf("Reajuste ganho: %.2f\n", RG);
		printf("Em percentual: %i %c\n", P, Por);

	}
	else if((S >= 800.01) && (S <= 1200))
    {

		P = 10;
		RG = S * P/100;
		NS = S + RG;

		printf("Novo salario: %.2f\n", NS);
		printf("Reajuste ganho: %.2f\n", RG);
		printf("Em percentual: %i %c\n", P, Por);

	}
	else if((S >= 1200.01) && (S <= 2000))
    {

		P = 7;
		RG = S * P/100;
		NS = S + RG;

		printf("Novo salario: %.2f\n", NS);
		printf("Reajuste ganho: %.2f\n", RG);
		printf("Em percentual: %i %c\n", P, Por);

	}
	else if(S > 2000)
    {

		P = 4;
		RG = S * P/100;
		NS = S + RG;

		printf("Novo salario: %.2f\n", NS);
		printf("Reajuste ganho: %.2f\n", RG);
		printf("Em percentual: %i %c\n", P, Por);

	}



    
    
    

    system("pause");
    return 0;

}
