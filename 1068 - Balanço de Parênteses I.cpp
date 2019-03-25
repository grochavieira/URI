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
	char exp[1001];
	int x, i = 0, y;

	while(scanf("%s", &exp) != EOF)
	{
        y = 0;
		x = 0;
		for(i = 0; exp[i] != NULL; i++)
		{
			if(exp[i] == '(')
			{
				x++;
			}
			else if(exp[i] == ')')
			{
				y++;
			}
			if(x < y)
			{
				x--;
			}
		}
		
		if(x == y)
		{
			printf("correct\n");
		}
		else
		{
			printf("incorrect\n");
		}
	}

    system("pause");
	return 0;

}
