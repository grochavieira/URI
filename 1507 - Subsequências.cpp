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

	int N, M, i, j, p, t, x, c = 0, g, aux = 0;
	string k, y, z;
	scanf("%d", &N);
	for(i = 0; i<N; i++)
	{
		cin >> k;
		x = k.size();
		
		cin >> M;
		
		for(j=0; j<M; j++)
		{
			cin >> y;
			g = y.size();
			for(p = 0, t = 0; p<x; p++)
			{
			/*	cout << "VALOR DE P: " << p << endl << endl;
				cout << "VALOR TOTAL DE Y: " << y << endl << endl;
				cout << "VALOR DE Y: " << y[t] << endl << endl;
				cout << "VALOR DE K: " << k[p] << endl << endl;*/
				if(y[t] == k[p])
				{
					c++;
					t++;
					aux = 1;
				}
				if(c == g)
				{
					p = x;
					c = 0;
					printf("Yes\n");

				}
				else if(p + 1 == x)
				{
                    printf("No\n");
                    c = 0;
				}
				
				
			}
		}
	}

	system("pause");
  	return 0;
}
