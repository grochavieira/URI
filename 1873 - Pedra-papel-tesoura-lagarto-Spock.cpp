#include <iostream>
#include <stdio.h>
#include<stdio.h>
#include <cstdlib>
#include <iostream>
#include<math.h>
#include <string.h>
using namespace std;

int main(int argc, char *argv[])
{
    int n, a, b, c, x, y, num, res, CR, CS;
    string R, S;
    
    scanf("%d", &n);
    
    for(a=1; a<=n; a++)
    {

		cin >> R >> S;
		
		if(R == "tesoura" && S == "papel")
		{


            printf("rajesh\n");
		}
		else if(R == "papel" && S == "pedra")
		{


            printf("rajesh\n");
		}
		else if(R == "pedra" && S == "lagarto")
		{

            printf("rajesh\n");
		}
		else if(R == "lagarto" && S == "spock")
		{

            printf("rajesh\n");
		}
		else if(R == "spock" && S == "tesoura")
		{


            printf("rajesh\n");
		}
		else if(R == "tesoura" && S == "lagarto")
		{


            printf("rajesh\n");
		}
		else if(R == "lagarto" && S == "papel")
		{


            printf("rajesh\n");
		}
		else if(R == "papel" && S == "spock")
		{


            printf("rajesh\n");
		}
		else if(R == "spock" && S == "pedra")
		{


            printf("rajesh\n");
		}
		else if(R == "pedra" && S == "tesoura")
		{

            printf("rajesh\n");
            
		}
		











    	else if(S == "tesoura" && R == "papel")
		{


            printf("sheldon\n");
		}
		else if(S == "papel" && R == "pedra")
		{


            printf("sheldon\n");
		}
		else if(S == "pedra" && R == "lagarto")
		{


            printf("sheldon\n");
		}
		else if(S == "lagarto" && R == "spock")
		{


            printf("sheldon\n");
		}
		else if(S == "spock" && R == "tesoura")
		{


            printf("sheldon\n");
		}
		else if(S == "tesoura" && R == "lagarto")
		{


            printf("sheldon\n");
		}
		else if(S == "lagarto" && R == "papel")
		{


            printf("sheldon\n");
		}
		else if(S == "papel" && R == "spock")
		{


            printf("sheldon\n");
		}
		else if(S == "spock" && R == "pedra")
		{

		
            printf("sheldon\n");
		}
		else if(S == "pedra" && R == "tesoura")
		{

			
            printf("sheldon\n");
		}
		
		else if(S == R)
		{

			printf("empate\n");

		}
	

	}

    
    
    



    
	system("pause");
	return 0;
}
