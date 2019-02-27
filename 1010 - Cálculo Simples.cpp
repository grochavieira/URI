#include <cstdlib>
#include <iostream>

#include<stdio.h>

using namespace std;

int cod_1, num_1, cod_2, num_2;
float valor_1, valor_2,valor_total_1, valor_total_2, valor_totalzao;

int main()
{

	cin >> cod_1 >> num_1 >> valor_1;
	cin >> cod_2 >> num_2 >> valor_2;
	valor_total_1 = valor_1 * num_1;
	valor_total_2 = valor_2 * num_2;
	valor_totalzao = valor_total_1 + valor_total_2;
	
	
	printf("VALOR A PAGAR: R$ %0.2f\n",valor_totalzao);
	system("pause");
	return 0;
}


