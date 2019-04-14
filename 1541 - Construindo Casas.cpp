#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main() {
  int medidaA = 1, medidaB = 1, quadradoPerfeito;
  float percentualC;
  float totalMedida;
  float totalLimite;
  while(medidaA != 0)
  {
    cin >> medidaA;
    if(medidaA != 0)
    {
    cin >> medidaB >> percentualC;
    totalMedida = medidaA * medidaB;
    //cout << endl << "**********" << endl << "Medida: " << totalMedida << endl;
    totalLimite = totalMedida * (100.0 / percentualC);
    //cout << "Percentual: " << percentualC / 100 << endl;
    //cout << "Limite: " << totalLimite << endl;
    quadradoPerfeito = sqrt(totalLimite);
    //cout << "Quadrado Perfeito: " << quadradoPerfeito << endl << endl;
    cout << quadradoPerfeito << endl;
    }
    else
    {

    }
  }
}
