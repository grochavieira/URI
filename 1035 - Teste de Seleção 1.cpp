#include<stdio.h>
#include <cstdlib>
#include <iostream>
#include<math.h>

using namespace std;



int main()
{
	int A, B, C, D, CD, AB;
	
	cin >> A >> B >> C >> D;
	
	CD = C + D;
	AB = A + B;
    if((B > C) && (D > A) && (CD > AB) && (C >= 0) && (D >= 0) && (A%2==0))
    {
	printf("Valores aceitos\n");
	}
	else{

	printf("Valores nao aceitos\n");
		}
    
    system("pause");
    return 0;
}
