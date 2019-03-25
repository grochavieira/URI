#include <iostream>
#include <list>
#include <map>
#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include  <math.h>
#include <string.h>
#include <vector>
#include <algorithm>
#include <map>
#include <stack>


using namespace std;

int main() {

  	int n, m, i, j, k, l, valor, aux = 0, c = 0;
  	string var;
	

	while(scanf("%d", &n) != EOF)
	{
    vector<string> num, aux2;
		for(i = 0; i<n; i++)
		{
   		  cin >> var;
   			num.push_back(var);
   			
		}
		
    sort(num.begin(), num.end());
		
		for(j = 0; j<n-1; j++)
		{
			for(k=0; k<num[0].size(); k++)
			{
				if(num[j][k] == num[j+1][k])
				{
						c += 1;
				}
				else k = num[0].size();
			}
		}
		printf("%d\n", c);
		aux = 0;
		c = 0;
	}
	system("pause");
  	return 0;
}


