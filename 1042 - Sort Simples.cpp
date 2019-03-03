#include<stdio.h>
#include <cstdlib>
#include <iostream>
#include<math.h>

using namespace std;



int main()
{

	int A, B, C;
	
	cin >> A >> B >> C;
	
	if((A > B) && (A > C) && (B > C))
	{

		printf("%i\n",C);
		printf("%i\n",B);
		printf("%i\n\n",A);
		
		printf("%i\n",A);
		printf("%i\n",B);
		printf("%i\n",C);

	}
	
	else if((A > B) && (A > C) && (C > B))
	{

		printf("%i\n",B);
		printf("%i\n",C);
		printf("%i\n\n",A);

		printf("%i\n",A);
		printf("%i\n",B);
		printf("%i\n",C);

	}
	
	else if((B > A) && (B > C) && (A > C))
	{

		printf("%i\n",C);
		printf("%i\n",A);
		printf("%i\n\n",B);

		printf("%i\n",A);
		printf("%i\n",B);
		printf("%i\n",C);

	}
	
	else if((B > A) && (B > C) && (C > A))
	{

		printf("%i\n",A);
		printf("%i\n",C);
		printf("%i\n\n",B);

		printf("%i\n",A);
		printf("%i\n",B);
		printf("%i\n",C);

	}
	
	else if((C > A) && (C > B) && (B > A))
	{

		printf("%i\n",A);
		printf("%i\n",B);
		printf("%i\n\n",C);

		printf("%i\n",A);
		printf("%i\n",B);
		printf("%i\n",C);

	}
	
	else if((C > A) && (C > B) && (A > B))
	{

		printf("%i\n",B);
		printf("%i\n",A);
		printf("%i\n\n",C);

		printf("%i\n",A);
		printf("%i\n",B);
		printf("%i\n",C);

	}
	
	
	
	system("pause");
	return 0;
	
	
}
