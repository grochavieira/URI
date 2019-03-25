#include <iostream>
#include <stdio.h>
#include<stdio.h>
#include <cstdlib>
#include <iostream>
#include<math.h>
#include <string.h>

using namespace std;



int main(){

	int A;
	double N[100], X;

	scanf("%lf", &X);

	for(A = 0; A<100; A++)
	{
		N[A] = X;
		printf("N[%d] = %.4lf\n", A, N[A]);
		X = X / 2;

	}


