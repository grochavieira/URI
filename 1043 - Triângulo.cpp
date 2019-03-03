#include<stdio.h>
#include <cstdlib>
#include <iostream>
#include<math.h>

using namespace std;



int main()
{

	float A, B, C, Perimetro, Area;
	float BC1, BC2, AC1, AC2, AB1, AB2;
	
	cin >> A >> B >> C;
	
	BC1 = (B - C);
	BC2 = sqrt(BC1 * BC1);
	
	AC1 = (A - C);
	AC2 = sqrt(AC1 * AC1);
	
	AB1 = (A - B);
	AB2 = sqrt(AB1 * AB1);


	if((BC2 < A) && (A < B + C))
	{

		Perimetro = A + B + C;
        printf("Perimetro = %.1f\n", Perimetro);

	}
	else if((AC2 < B) && (B < A + C))
	{

		Perimetro = A + B + C;
        printf("Perimetro = %.1f\n", Perimetro);

	}
	else if((AB2 < C) && (C < A + B))
	{

		Perimetro = A + B + C;
        printf("Perimetro = %.1f\n", Perimetro);

	}
	else
	{

		Area = ((A + B) * C) / 2;
		printf("Area = %.1f\n", Area);

	}



	system("pause");
	return 0;


}
