#include<stdio.h>
#include <cstdlib>
#include <iostream>
#include<math.h>

using namespace std;



int main()
{
    int s, hora, minuto, segundo;
    scanf("%d", &s);
    hora = s/365;
    s %= 365;
    minuto = s/30;
    s %= 30;
    segundo = s;
    
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",hora,minuto,segundo);  
    
    
    system("pause");
    return 0;
}
