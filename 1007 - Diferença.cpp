#include <cstdlib>
#include <iostream>

#include<stdio.h>

using namespace std;

int A,B,C,D;
int DIFERENCA;

int main()
{

	cin >> A;
	cin >> B;
	cin >> C;
    cin >> D;

	DIFERENCA = (A * B - C * D);

	printf("DIFERENCA = %i\n",DIFERENCA);


	system("pause");
	return 0;
}

