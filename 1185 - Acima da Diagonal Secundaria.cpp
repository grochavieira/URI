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
    int C,x,y,z,p = 11;
    scanf("%s", &T);
    
    for(x = 0; x<=11; x++)
    {

		for(y=0; y<=11; y++)
		{-

			scanf("%lf", &M[x][y]);

		}

	}
	for(z=0; z<=10; z++)
	{
        p--;
		for(C=0; C<=p; C++)
		{

			a+= M[z][C];

		}
		

	}
	
	if(T[0] == 'S')
	{

		printf("%.1lf\n", a);

	}
	if(T[0] == 'M')
	{
		a = a / 66.0;
		printf("%.1lf\n", a);

	}
    


	system("pause");
	return 0;
}
