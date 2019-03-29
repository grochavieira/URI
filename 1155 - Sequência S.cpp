#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
  int i;
  float j = 1.0;
  float soma = 0;
  for(i=1; i<=100; i++)
  {
    soma += j/i;
  }
  cout.precision(3);
  cout << soma << endl;
}
