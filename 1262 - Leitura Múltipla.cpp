#include <iostream>
#include <stdio.h>
#include<stdio.h>
#include <cstdlib>
#include <iostream>
#include<math.h>
#include <string.h>
#include <sstream>
#include <map>


using namespace std;

int main(int argc, char *argv[])
{

	char rastro[51];
	int P, A, X, C=0, Z=0, menos=0;
	
	while(cin>>rastro)
	{
        X = strlen(rastro);
	
		cin >> P;
	
		for(A = 0; A<X; A++)
		{

			if(rastro[A] == 'W')
			{

				C++;
			


			}
			else if(rastro[A] == 'R')
			{

				Z++;
				
				
				if(Z == P)
				{

					C++;
					
					Z = 0;
					
		
				}
				else if(rastro[A + 1] == 'W')
				{

					C++;
					
					Z = 0;
				
				
				}
				else if(Z < P && A == X - 1)
				{

					C++;

				}

			}

  }
		
		printf("%d\n", C);
		C = 0;

	}

	system("pause");
	return 0;
}
