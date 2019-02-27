#include<stdio.h>
#include <cstdlib>
#include <iostream>
#include<math.h>

using namespace std;



int main()
{
    int s, hora, minuto, segundo;
    scanf("%d", &s);
    hora = s/3600;
    s %= 3600;
    minuto = s/60;
    s %= 60;
    segundo = s;
    
    printf("%d:%d:%d\n",hora,minuto,segundo);  
    system("pause");
    return 0;
}
