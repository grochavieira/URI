#include <cstdlib>
#include <iostream>

#include<stdio.h>

using namespace std;

int num, num_trab;
float valor_hora, salario;

int main()
{

	cin >> num;
	cin >> num_trab;
	cin >> valor_hora;

	salario = num_trab * valor_hora;

	printf("NUMBER = %i\n",num);
    printf("SALARY = U$ %.2f\n",salario);

	system("pause");
	return 0;
}
