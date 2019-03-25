#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int X, Y;
	scanf("%d", &X);
	scanf("%d", &Y);
	if(X>Y){
    int aux = X;
    X = Y;
    Y = aux;
}
	for(int i = X+1; i<Y; i++)
	{	
		if(i%5 == 2 || i%5 == 3)
		{
			printf("%d\n", i);
		}
	}
	system("pause");
	return 0;
}
