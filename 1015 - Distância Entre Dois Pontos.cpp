#include<stdio.h>
#include <cstdlib>
#include <iostream>
#include<math.h>

using namespace std;



int main()
{
	float x1, y1, p1, x2, y2, p2, total;

	scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
	
	p1 = x2 - x1;
	p2 = y2 - y1;
	
	total = sqrt((p1*p1) + (p2*p2));
	

    printf("%.4f\n",total);
    
	system("pause");
    return 0;

}
