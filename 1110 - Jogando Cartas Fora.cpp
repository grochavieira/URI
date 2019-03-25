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

int main(int argc, char *argv[])
{
	int n, i=0, j=0, k=0, uCard;

	
	while(scanf("%d", &n) != EOF)
	{
		list<int> lista1;
		list<int> lixo;
		
		if(n >= 2)
		{
			for(i=1; i<=n; i++)
			{
				lista1.push_front(i);

			}
			for(i=1; i<=n; i++)
			{
				if(lista1.size() > 1)
				{
				lixo.push_back(lista1.back());
				lista1.pop_back();
				uCard = lista1.back();
				lista1.pop_back();
				lista1.push_front(uCard);
				}
			}
			printf("Discarded cards: ");
			for(i=1; i<n; i++)
			{
				if(n  > i + 1)
				{
					cout << lixo.front() << ", ";
					lixo.pop_front();
				}
				else
				{
					cout << lixo.front() << endl;
					cout << "Remaining card: "<< lista1.front() << endl;
				}
			}
		}
	}
	system("pause");
	return 0;
}
