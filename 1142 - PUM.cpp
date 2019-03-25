#include <iostream>
#include <stdio.h>
#include<stdio.h>
#include <cstdlib>
#include <iostream>
#include<math.h>
#include <string.h>

using namespace std;



int main(){
    
	 int N, a,b,c=1,d=4;
    scanf("%d", &N);
    for(a=1;a<=N;a++)
    {
        for(b=c;b<=d;b++)
        {
            if(b%4==0)
                printf("PUM\n");
            else
                printf ("%d ",b);
        }
        c+=4; d+=4;
    }

	
	
	



	system("pause");
	return 0;
}
