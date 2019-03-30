#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
  int i;
  float j = 1.0;
  float soma = 0;
  for(i=1; i<=39; i=i+2)
  {
    soma += (i/j)*1.0;
    j = j + j;
  }
  printf("%.2f\n", soma);
}
