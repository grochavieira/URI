#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
  int N, i;
  cin >> N;
  for(i=0; i<N; i++)
  {
    if(i<N-1) cout << "Ho ";
    else if(i+1==N) cout << "Ho!" << endl;
  }
}
