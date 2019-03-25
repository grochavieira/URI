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

int main(int argc, char *argv[])
{
	int tam, i, j, c = 0, final = 0;
	float total = 0;
	string compo, aux;
	map<string,float> mapa;
	mapa["W"] = 1;
	mapa["H"] = 0.5;
	mapa["Q"] = 0.25;
	mapa["E"] = 0.125;
	mapa["S"] = 0.0625;
	mapa["T"] = 0.03125;
	mapa["X"] = 0.015625;
	
	while(compo != "*")
	{
		
		getline(cin,compo);
	
		if(compo != "*")
		{
			tam = compo.size();

			for(int i=0; i<tam; i++)
			{
				if(i + 1 != tam)
				{
					if(compo[i] == 47)
					{
                        
						for(j=i+1; final != 1; j++)
						{
							aux = compo[j];
							total += mapa[aux];
							if(compo[j + 1] == 47)
							{
								if(total == 1)
								{
									c++;
								}
								
								final = 1;
								total = 0;
							}
						}
						final = 0;
					}
				}
			}
			
			printf("%d\n", c);
			c = 0;
  }

	}

	
	system("pause");
	return 0;
}
