#include <iostream>
#include <stdio.h>
#include<stdio.h>
#include <cstdlib>
#include <iostream>
#include<math.h>
#include <string.h>
#include <sstream>


using namespace std;

int main(int argc, char *argv[])
{

	int N, M, total,C, a;
	string valor;

	while(N != 0 && M != 0)
	{
  		stringstream var1;
		scanf("%d %d", &N, &M);
		total = N + M;
		var1 << total;
		valor = var1.str();
		C = valor.size();
		
		if(M == 0 && N == 0)
		{

			break;

		}
		for(a = 0; a<C; a++)
		{

			if(valor[a] != '0')
			{

				cout << valor[a];
				

			}
			if(a == C - 1)
			{

                    cout << endl;

			}


		}
		


		
	

	}
	
	
	

	



		

	system("pause");
	return 0;
}

