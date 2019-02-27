#include <cstdlib>
#include <iostream>

#include<stdio.h>

using namespace std;

float A,B,MEDIA;
float notaA, notaB;

int main()
{

	cin >> A;
	cin >> B;

	notaA = A * 0.35;
	notaB = B * 0.75;

	MEDIA = (A * 3.5 + B * 7.5)/(3.5 + 7.5);

	printf("MEDIA = %0.5f\n",MEDIA);


	system("pause");
	return 0;
}
