#include<stdio.h>
#include <cstdlib>
#include <iostream>
#include<math.h>

using namespace std;



int main()
{
	double A, B, C, Baskara, X1, X2, Delta;
	
	cin >> A >> B >> C;



	Baskara = B * B - 4 * A * C;
	
	
	
	if((Baskara >= 0) && (A > 0))
	{
  		Delta = sqrt(Baskara);
		X1 = ((B * -1) + Delta) / (2 * A);
		X2 = ((B * -1) - Delta) / (2 * A);
		printf("R1 = %.5lf\n",X1);
		printf("R2 = %.5lf\n",X2);

	}
	else
	{

		printf("Impossivel calcular\n");

	}

    system("pause");
    return 0;
}
