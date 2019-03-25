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
	int n, x1, x2, m, b, a;
	char texto1[55], texto2[55];
	scanf("%d", &n);
	
	for(a = 1; a<=n; a++)
	{

		scanf("%s %s", &texto1, &texto2);
		x1 = strlen(texto1);
		x2 = strlen(texto2);
		if(x1 > x2) m = x1;
		else
		{ m = x2;}
		
		for(b = 0; b<m; b++)
		{

			if(b < x1)printf("%c", texto1[b]);
			if(b < x2)printf("%c", texto2[b]);

		}
		cout << endl;


	}
	

	
	system("pause");
	return 0;
}
