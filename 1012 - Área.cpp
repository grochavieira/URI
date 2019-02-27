#include <cstdlib>
#include <iostream>

#include<stdio.h>

using namespace std;

double A, B, C, pi;
double triangulo, quadrado, trapezio, circulo, retangulo;


int main()
{

	cin >> A >> B >> C;
	pi = 3.14159;
	
	triangulo = (A * C)/2;
	circulo = pi * (C * C);
	trapezio =((A + B) * C)/2;
	quadrado = B * B;
	retangulo = A * B;
	
	
	printf("TRIANGULO: %0.3f\n",triangulo);
	printf("CIRCULO: %0.3f\n",circulo);
	printf("TRAPEZIO: %0.3f\n",trapezio);
	printf("QUADRADO: %0.3f\n",quadrado);
	printf("RETANGULO: %0.3f\n",retangulo);
	
	
	system("pause");
	return 0;
}
