#include <iostream>
#include <stdio.h>
#include<stdio.h>
#include <cstdlib>
#include <iostream>
#include<math.h>
#include <string.h>

using namespace std;



int main(){

	int N, M, X = 0, Y = 0, multiN, multiM, finN, finM, Z = 0, A = 0;
	string C;
	
	while(1)
	{

		scanf("%d %d",&N, &M);
		
		if(N == 0 || M == 0)
		{

			break;

		}
		
		char matriz1[N][M];
		
		for(Y = 0; Y < N; Y++)
		{

			for(X = 0; X < N; X++)
			{

				cin >> matriz1[Y][X];

			}

		}
		
		scanf("%d %d", &multiN, &multiM);
		finN = multiN / N;
		finM = multiM / M;
		Y = 0;
		X = 0;
		
		for(X = 0; X < N; X++)
		{
			C = "";
			for(Y = 0; Y < N; Y++)
			{

				for(Z = 0; Z < finM; Z++)
				{

					C+= matriz1[X][Y];
			
				}
				

			}
			
			for(A = 0; A < finN; A++)
			{
			cout << C << endl;
			}
			

		}
		cout << endl;
		


	}



	system("pause");
	return 0;
}
