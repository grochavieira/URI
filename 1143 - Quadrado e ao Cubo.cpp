#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;


int main() {
  
  int entrada, aux1, aux2, aux3, i;

  cin >> entrada;

  for(i=1; i<=entrada; i++)
  {
    aux1 = i;
    aux2 = aux1 * i;
    aux3 = aux2 * i;

    cout << aux1 << " " << aux2 << " " << aux3 << endl;


  }

}
