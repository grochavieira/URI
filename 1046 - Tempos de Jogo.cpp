#include <stdio.h>
#include<stdio.h>
#include <cstdlib>
#include <iostream>
#include<math.h>
int main()

{

	int HI, HF, rt;

    scanf("%i %i", &HI, &HF);

    rt = HF - HI;

    if (rt < 0)

    {

        rt = 24 + (HF - HI);

    }

    if (HF == HI)

    {

        printf("O JOGO DUROU 24 HORA(S)\n");

    }

    else printf("O JOGO DUROU %d HORA(S)\n", rt);
    
    system("pause");
    return 0;

}
