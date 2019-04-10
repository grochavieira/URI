#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
  int N, i = 0;
  cin >> N;
  string frase = "LIFE IS NOT A PROBLEM TO BE SOLVED";

  for(i=0; i<N; i++)
  {
    cout << frase[i];
  }
  cout << endl;
}
