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
    string t;

    
    while(1)
    {

		getline(cin,t);
		x = t.size();
		
		if(x > 140)
		{

			printf("MUTE\n");
			break;

		}
		else if(x <=140)
		{

            printf("TWEET\n");
            break;

		}

	}
    



    
	system("pause");
	return 0;
}
