#include <iostream>
#include <cmath>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int N = 0, R = 0;
	int P = 0, X = 0;
	scanf("%d.%d", &N, &X); 
	
	printf("NOTAS:\n");
	P = N / 100;
	N = N % 100;
	printf("%d nota(s) de R$ 100.00\n", P);
	P = N / 50;
	N = N % 50;
	printf("%d nota(s) de R$ 50.00\n", P);
	P = N / 20;
	N = N % 20;
	printf("%d nota(s) de R$ 20.00\n", P);
	P = N / 10;
	N = N % 10;
	printf("%d nota(s) de R$ 10.00\n", P);
	P = N / 5;
	N = N % 5;
	printf("%d nota(s) de R$ 5.00\n", P);
	P = N / 2;
	N = N % 2;
	printf("%d nota(s) de R$ 2.00\n", P);
	
	printf("MOEDAS:\n");
	P = N / 1;
	N = N % 1;;
	printf("%d moeda(s) de R$ 1.00\n", P);
	P = X / 50;
	X = X % 50;
	printf("%d moeda(s) de R$ 0.50\n", P);
	P = X / 25;
	X = X % 25;
	printf("%d moeda(s) de R$ 0.25\n", P);
	P = X / 10;
	X = X % 10;
	printf("%d moeda(s) de R$ 0.10\n", P);
	P = X / 5;
	X = X % 5;
	printf("%d moeda(s) de R$ 0.05\n", P);
	P = X / 1;
	X = X % 1;
	printf("%d moeda(s) de R$ 0.01\n", P);
	
	
	
	
	system("pause");
	return 0;
	
}
