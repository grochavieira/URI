#include <iostream>
#include <stdio.h>
#include<stdio.h>
#include <cstdlib>
#include <iostream>
#include<math.h>
#include <string.h>

using namespace std;



int main(){

	int X, N, a,b=0;
    scanf("%d %d", &X, &N);
    while(N<=0)
        scanf("%d", &N);
    for(a=1; a<=N; a++)
    {
        b+=X;
        X++;
    }
    printf("%d\n",b);




	system("pause");
	return 0;
}
