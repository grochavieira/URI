#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
  int i, entrada;
  cin >> entrada;

  for(i=1; i<=entrada; i++)
  {
    if(entrada%i == 0)
    {
      cout << i << endl;
    }
  }
}
