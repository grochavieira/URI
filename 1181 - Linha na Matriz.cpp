#include <iostream>
#include <stdio.h>
#include<stdio.h>
#include <cstdlib>
#include <iostream>
#include<math.h>
#include <string.h>

using namespace std;



int main(){

	 double a=0.0, M[12][12];
    char T[2];
    int L,x,y;
    scanf("%d", &L);
    scanf("%s", &T);
    
    for(x = 0; x<=11; x++)
    {

		for(y=0; y<=11; y++)
		{

			scanf("%lf", &M[x][y]);
			
			if(x == L)
			{

				a+= M[x][y];

			}

		}

	}
	
	if(T[0] == 'S')
	{

		printf("%.1lf\n", a);

	}
	if(T[0] == 'M')
	{
		a = a / 12.0;
		printf("%.1lf\n", a);

	}
    


	system("pause");
	return 0;
}
