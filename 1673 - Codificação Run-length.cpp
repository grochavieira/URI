#include <iostream>
#include <list>
#include <map>
#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include<math.h>
#include <string.h>
#include <vector>
#include <algorithm>
#include <map>
#include <stack>

using namespace std;

int main() {

  	int n, m, i, j, k, l, valor, aux = 0, c = 0, cont2 = 0, lei1 = 0,cont = 0, final=0, tam = 0, mud = 0,conta = 1;
	vector <string> cod;
	string texto;
	while(getline(cin,texto))
	{
		tam = texto.size();
		
		for(i=0; i<tam; i++)
		{
			if(texto[mud] == texto[i])
			{
				c++;
				if((c>1 && texto[mud] != texto[i+1])|| (c>1 && i+1 == tam))
				{
					while(conta > 0)
					{
						conta = c - 9;
						if(conta <= 0) cout << c << texto[i-1];
						else if (conta > 0) cout << "9" << texto[i-1];
						c = c - 9;
						if(conta == 1) conta = -10;
					}
					if(conta == -10)
					{
						i--;
						mud = i+1;
					}
					else mud = i + 1;
					conta = 1;
					c = 0;
					
				}
				else if(texto[i] == '1' && i+1 == tam) cout << "1111";
				else if(texto[i] != '1' && i+1 == tam) cout << "1" << texto[i] << "1";
			}
			else
			{
				string aux1 = "";
				for(j = i; j<tam; j++)
				{
					if(texto[mud] != texto[j])
					{
						aux1[cont] = texto[mud];
						mud++;
						cont++;
						if(j + 1 == tam)
						{
							aux1[cont] = texto[mud];
							cont++;
						}
					}
					else
					{
						j = tam;
					}
				}
				for(k=0; k<cont; k++)
				{
					if(k == 0) cout << "1";
					if(aux1[k] == '1') cout << "1";
					cout << aux1[k];
					if(k + 1 == cont) cout << "1";
					
				}
				i = i+(k-1);
				mud = i;
				cont = 0;
			}
		}
		cout << endl;
		conta = 1;
		c = 0;
		mud = 0;

	}
	system("pause");
  	return 0;
}
