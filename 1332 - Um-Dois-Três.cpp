#include <iostream>
#include <stdio.h>
#include<stdio.h>
#include <cstdlib>
#include <iostream>
#include<math.h>
#include <string.h>
using namespace std;

using namespace std;

int main(int argc, char *argv[])
{

	int n, a, s;
	string palavra;

	scanf("%d", &n);

	for(a=0; a<=n; a++)
	{

		getline(cin, palavra);
		s = palavra.size();

		if(s == 3)
		{

			if((palavra[0] == 'o' && palavra[1] == 'n') || (palavra[0] == 'o' && palavra[2] == 'e') || (palavra[1] == 'n' && palavra[2] == 'e'))
			{

				printf("%d\n", 1);

			}
			else
			{

				printf("%d\n", 2);

			}



		}
		else if(s == 5)
		{

			printf("%d\n", 3);

		}


	}

	system("pause");
	return 0;
}
