#include <cstdlib>
#include <iostream>

#include<stdio.h>

using namespace std;

double pi, raio, area;

int main()
{
    pi = 3.14159;
    cin >> raio;
    area = pi*(raio*raio);

    printf("A=%.4f\n",area);

	system ("pause");
	return 0;
}

