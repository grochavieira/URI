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
    int C,x,y,z,p1 = 5, p2 = 6;
    scanf("%s", &T);
    
    for(x = 0; x<=11; x++)
    {

		for(y=0; y<=11; y++)
		{

			scanf("%lf", &M[x][y]);

		}

	}
	for(z=7; z<=11; z++)
	{
        
		for(C=p1; C<=p2; C++)
		{

			a+= M[z][C];

		}
		p1--;
		p2++;

	}
	
	if(T[0] == 'S')
	{

		printf("%.1lf\n", a);

	}
	if(T[0] == 'M')
	{
		a = a / 30.0;
		printf("%.1lf\n", a);

	}
    


	system("pause");
	return 0;
}
