#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
  int i, grenais = 0, vitInter = 0, vitGremio = 0, empate = 0, resp = 1, pontInter, pontGremio;

  while(resp == 1)
  {
    grenais++;
    
    cin >> pontInter >> pontGremio;

    if(pontInter > pontGremio)
    {
      vitInter++;
    }
    else if(pontGremio > pontInter)
    {
      vitGremio++;
    }
    else empate++;

    cout << "Novo grenal (1-sim 2-nao)" << endl;
    cin >> resp;
  }
  cout << grenais << " grenais" << endl;
  cout << "Inter:" << vitInter << endl;
  cout << "Gremio:" << vitGremio << endl;
  cout << "Empates:" << empate << endl;
  if(vitInter > vitGremio)
  {
    cout << "Inter venceu mais" << endl;
  }
  else if(vitInter < vitGremio)
  {
    cout << "Gremio venceu mais" << endl;
  }
  else if(vitInter == vitGremio)
  {
    cout << "Nao houve vencedor" << endl;
  }

}
