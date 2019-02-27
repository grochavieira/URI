#include <cstdlib>
#include <iostream>

#include<stdio.h>

using namespace std;

string nome;
double sal_fixo, total_vendas, total;

int main()
{

	cin >> nome;
	cin >> sal_fixo;
	cin >> total_vendas;

	total = sal_fixo + total_vendas * 0.15;

    printf("TOTAL = R$ %.2f\n",total);

	system("pause");
	return 0;
}
