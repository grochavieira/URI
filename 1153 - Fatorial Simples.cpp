#include <iostream>
#include <stdio.h>
using namespace std;

int calculaFatorial(int inputFatorial)
{
  int i, resultadoFatorial = 1;
  for(i = inputFatorial;i >= 1; i--)
  {
    resultadoFatorial *= i;
  }
  return resultadoFatorial;
}

int main() {
  int inputFatorial, valorFatorial;
  cin >> inputFatorial;
  valorFatorial = calculaFatorial(inputFatorial);
  cout << valorFatorial << endl;
}
