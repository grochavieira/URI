#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
  int T, N, i, menor = 101, indice = 0;
  cin >> N;

  for(i=1; i<=N; i++)
  {
    cin >> T;
    if(T < menor)
    {
      indice = i;
      menor = T;
    }
  }
  cout << indice << endl;
}
