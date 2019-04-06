#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
int main() {
  int poder, casos, i;
  string thor = "Thor", heroi;
  cin >> casos;

  for(i=0; i<casos; i++)
  {
    cin >> heroi >> poder;
    if(heroi.compare(thor) == 0) 
    {
      cout << "Y" << endl;
    }
    else cout << "N" << endl;
  }
}
