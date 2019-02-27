#include <cstdlib>
#include <iostream>

#include<stdio.h>

using namespace std;

float A,B,C;
float MEDIA;

int main()
{

	cin >> A;
	cin >> B;
	cin >> C;

	MEDIA = (A * 2 + B * 3 + C * 5)/(2 + 3 + 5);

	printf("MEDIA = %0.1f\n",MEDIA);


	system("pause");
	return 0;
}
