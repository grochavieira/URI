#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int X, Y, Total = 0;
	scanf("%d", &X);
	scanf("%d", &Y);
	if(X>Y){
    int aux = X;
    X = Y;
    Y = aux;
}
	for(int i = X; i<=Y; i++)
	{	
		if(i%13 != 0)
		{
			Total = Total + i;
		}
	}
	printf("%d\n", Total);
	system("pause");
	return 0;
}
