#include <iostream>
#include <stdio.h>
#include<stdio.h>
#include <cstdlib>
#include <iostream>
#include<math.h>
#include <string.h>
using namespace std;

int main(int argc, char *argv[])
{
    int n, a, b, c, x, y, num, res;
    string let;
    scanf("%d", &n);
    
    for(a = 1; a<=n; a++)
    
    {

		cin >> let;
		cin >> num;
		x = let.size();
		
		for(y = 0; y<x; y++)
		{

			let[y] -= num;
			
			if(let[y] < 65)
			{

				res = 65 - let[y];
				let[y] = 91;
				let[y] -= res;

			}
			cout << let[y];

		}
		cout << endl;

	}
    
    



    
	system("pause");
	return 0;
}
