#include<stdio.h>
#include <cstdlib>
#include <iostream>
#include<math.h>

using namespace std;



int main()
{
	float Horas, Velocidade, total2;
	float total;

	scanf("%f %f",&Horas,&Velocidade);
	
	total2 = Horas * Velocidade;
	total = total2 / 12;
	
    printf("%.3f\n",total);
    
	system("pause");
    return 0;

}
