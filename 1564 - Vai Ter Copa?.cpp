#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
  int N;
  while(scanf("%d",&N) != EOF)
  {
    if(N == 0) cout << "vai ter copa!" << endl;
    else cout << "vai ter duas!" << endl;
  }
}
