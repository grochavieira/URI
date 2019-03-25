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
	int i = 0,n, x, k=0;
	cin >> n;
	for(i=0; i<n; i++)
	{
        string infixa;
		cin >> infixa;
		infixa = "(" + infixa + ")";
		char posfixa, aux;
		stack<char> pilha;

		for(k=0; k<infixa.size(); k++)
		{
			aux = infixa[k];
			if(aux == '(')
			{
				pilha.push(aux);
			}
			else if(aux == ')')
			{
				while(pilha.top() != '(')
				{
					cout << pilha.top();
					pilha.pop();
				}
				pilha.pop();
			}
			else if(aux == '+' || aux == '-')
			{
				while(pilha.top() != '(')
				{
					cout << pilha.top();
					pilha.pop();
				}
				pilha.push(aux);
			}
			else if(aux == '*' || aux == '/')
			{
				while(pilha.top() != '(' && pilha.top() != '+' && pilha.top() != '-')
				{
					cout << pilha.top();
					pilha.pop();
				}
				pilha.push(aux);
			}
			else if(aux == '^')
			{
				while(pilha.top() != '(' && pilha.top() != '+' && pilha.top() != '-' && pilha.top() != '*' && pilha.top() != '/')
				{
					cout << pilha.top();
					pilha.pop();
				}
				pilha.push(aux);
			}
			else
			{
				cout << aux;
			}
			
		}
		cout << endl;
		
	}
	
	system("pause");
	return 0;
}
