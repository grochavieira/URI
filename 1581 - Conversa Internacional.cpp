#include <iostream>
#include <stdio.h>
#include<stdio.h>
#include <cstdlib>
#include <iostream>
#include<math.h>
#include <string.h>
#include <sstream>
#include <map>


using namespace std;

int main(int argc, char *argv[])
	{
		int a, b, n, k;
		string x;
		scanf("%d", &n);
		for(a = 1; a<= n; a++)
		{

            map<string, int> mp;
			scanf("%d", &k);
			for(b = 1; b<= k; b++)
			{

				cin >> x;
				mp[x] ++;
				

			}
			if(mp.size() == 1)
			{

				cout << x << endl;

			}
			else cout << "ingles"<< endl;

		}
		

system("pause");
	return 0;

	}





	
