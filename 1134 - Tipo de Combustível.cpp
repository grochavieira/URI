#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a = 0, g = 0, d = 0;
	int n = 0;
	while(n != 4)
	{
		scanf("%d", &n);
		if(n == 1)	a++;
		if(n == 2)	g++;
		if(n == 3)	d++;
	}
	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n", a);
	printf("Gasolina: %d\n", g);
	printf("Diesel: %d\n", d);
	
	return 0;
}
