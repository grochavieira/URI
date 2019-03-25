#include <iostream>
#include <stdio.h>
#include<stdio.h>
#include <cstdlib>
#include <iostream>
#include<math.h>
#include <string.h>

using namespace std;

int main(int argc, char *argv[])
{

	int N, A, B, C, aux, meta, Z, M;
	long long int K = 0;
	char X[101];
	scanf("%d", &N);

	for(A = 0; A<N; A++)
	{
   
		scanf("%s", &X);
        C = strlen(X);
       
		Z = 0;
        K = 0;
            while(true){
                        if(X[Z] == '\0') break;
                        if(X[Z] == '1') K += 2;
                        if(X[Z] == '2') K += 5;
                        if(X[Z] == '3') K += 5;
                        if(X[Z] == '4') K += 4;
                        if(X[Z] == '5') K += 5;
                        if(X[Z] == '6') K += 6;
                        if(X[Z] == '7') K += 3;
                        if(X[Z] == '8') K += 7;
                        if(X[Z] == '9') K += 6;
                        if(X[Z] == '0') K += 6;
                        Z++;
            }
		printf("%lld leds\n", K);


	}
		













	
	


	system("pause");
	return 0;
}
