#include <cstdlib>
#include <iostream>

#include<stdio.h>

using namespace std;

double R, pi, volume;


int main()
{

	cin >> R;
	pi = 3.14159;
	volume = (4/3.0)*pi*(R*R*R);
	
	printf("VOLUME = %0.3f\n", volume);
	
	
	
	system("pause");
	return 0;
}

