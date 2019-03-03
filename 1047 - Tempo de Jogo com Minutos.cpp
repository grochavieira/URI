#include <stdio.h>
#include<stdio.h>
#include <cstdlib>
#include <iostream>
#include<math.h>
int main()

{

	int HI, HF, MI, MF, mt, rt;

    scanf("%i %i %i %i", &HI, &MI, &HF, &MF);

    rt = HF - HI;
    mt = MF - MI;

    if (rt < 0)

    {

        rt = 24 + (HF - HI);

    }
    
    if (mt < 0)

    {

        mt = 60 + (MF - MI);
        rt--;

    }

    if ((HF == HI) && (MF == MI))

    {

		printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");

    }

	else{
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", rt, mt);
}
    system("pause");
    return 0;

}
