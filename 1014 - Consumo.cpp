#include<stdio.h>
#include <cstdlib>
#include <iostream>
#include<math.h>

using namespace std;

int X;
float Y, Total;

int main()
{

	cin >> X >> Y;
	
	Total = X / Y;

    printf("%0.3f km/l\n",Total);
    
	system("pause");
    return 0;

}
