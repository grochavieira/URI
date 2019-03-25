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
	int x, a, b = 0, n, oculta;
	string texto;
	scanf("%d", &n);
	for(a = 0; a<=n; a++)
	{

		getline(cin, texto);
		x = texto.size();
		oculta = 0;
		
		for(b = 0; b<x; b++)
		{

			if(oculta == 0)
			{

				if(texto[b] != 32)
				{

					cout << texto[b];
					oculta = 1;

				}

			}
			else if(oculta == 1)
			{

				if(texto[b] == 32) oculta = 0;

			}
			
			if(b == x-1) cout << endl;
			


		}
	

	}
	
	system("pause");
	return 0;
}
