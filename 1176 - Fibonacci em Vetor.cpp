#include <iostream>
#include <stdio.h>
#include<stdio.h>
#include <cstdlib>
#include <iostream>
#include<math.h>
#include <string.h>

using namespace std;



int main(){

	long long int n, primeiro, segundo, proximo, c;
   int i,j;
   scanf("%d", &j);
   
   for(i = 1; i<=j; i++, primeiro = 0, segundo = 1)
   {

		scanf("%lld", &n);
		n = n + 1;
		
		for(c = 0; c<n; c++)
		{

			if(c <= 1)
			{
				proximo = c;
			}
			else
			{

				proximo = primeiro + segundo;
				primeiro = segundo;
				segundo = proximo;

			}

		}
		printf("Fib(%lld) = %lld\n", n-1, proximo);

   }
  


	system("pause");
	return 0;
}
