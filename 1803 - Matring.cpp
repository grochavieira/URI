#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include<math.h>
#include <string.h>
#include <vector>
#include <algorithm>
#include <map>
#include <stack>

#define ll long long
using namespace std;



int main(){

	string num[4], total = "";
	ll F = 0, L = 0, M = 0, MOD = 257;
	int i = 0, j = 0;
	char c;
	
	for(i = 0; i<4; i++)
	{

		cin >> num[i];
		F = F * 10 + (num[i][0] - 48);
		L = L * 10 + (num[i][num[0].size() - 1] - 48);

	}
	for(i = 1; i + 1 < num[0].size(); i++)
	{

		for(j = 0; j<4; j++)
		{

            M = M * 10 + (num[j][i] - 48);

		}
		
		c = (F * M + L) % MOD;
		total += c;
		M = 0;

	}
	
	cout << total << endl;



	system("pause");
	return 0;
}
