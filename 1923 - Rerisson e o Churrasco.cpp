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
#include <bits/stdc++.h>
#include<iostream>
#include<vector>
#include<queue>
#include <cstdlib>

using namespace std;
map<string, int> res;
map<int, string> contra;
map<string, int> m;
vector< vector<int> > g; // Lista de Adjacência

// Algoritmo calcula a menor distancia para alcançar todos os vertices do grafo partindo de um vertice inicial.
vector<int> bfs(int inicio)
{
	//para os 3 vetores a seguir, cada posição do vetor representa um vertice do grafo.
    vector<int> d(g.size(), -1); // Vetor de distância minima para alcançar o vertice.
    vector<int> p(g.size(), -1); // Vetor que armazena o pai de cada vertice.
    vector<bool> cor(g.size(), false); // Define se cada vertice ja foi encontrado ou não.

	queue<int> Q; // Fila que define a ordem de acesso aos vertices.

	// Inicialização
    cor[inicio] = true; // Define a cor do vértice raiz como acessado.
    d[inicio] = 0; // Define a distância da raiz para ela mesma como 0.

    Q.push(inicio); // Enfileira a raiz.

    // Enquanto a fila não estiver vazia.
    while(!Q.empty())
    {
        int u = Q.front(); // Define u como sendo o vértice na frente na fila.
        Q.pop(); // Desenfileira.
		/*cout<<"vertice atual: "<<u<<endl;*/
        // Para todo vertice adjacente à "u".
        for(int i = 0; i < g[u].size(); i++)
        {
            // Se o vertice adjacente à "u" não tiver sido encontrado.
			if(cor[g[u][i]] == false)
			{
				/*cout<<g[u][i]<<endl;//Possível movimento para esse vértice*/
                Q.push(g[u][i]); // Enfileira o vertice adjacente.
                cor[g[u][i]] = true; // Define o vertice adjacente como encontrado.
                d[g[u][i]] = d[u]+1; // Define a distancia minima para alcançar o vertice.
				res[contra[g[u][i]]] = d[g[u][i]];
                /*cout << "Distância para alcançar o vertice: " << d[g[u][i]] << endl;
                cout << "VALOR do G com U e I: " << g[u][i] << endl;
                cout << "Valor do Contra: " << contra[1] << endl;
                cout << "Valor do Contra: " << contra[g[u][i]] << endl;
                cout << "Valor do RES: " << res[contra[g[u][i]]] << endl;*/
                p[g[u][i]] = u; // Define o pai do vertice adjacente como "u".
            }
        }
        /*cout<<endl;*/
    }

    // *** OBS: O RETORNO DA FUNÇÃO PODE SER ALTERADO CONFORME A NECESSIDADE DO PROBLEMA. ***
    return d; // Retorna o vetor peso.
}

int main()
{
	int n,G;
    
    m["Rerisson"] = 0;
    contra[0] = "Rerisson";
	cin>>n>>G;
	int c = 0;
	string S,T;

	g.resize(n+1);

	/*
    vector< vector<int> > g;
	for (int i = 0; i <= n; i++){
    	g.push_back( vector<int>(m+1, 0));// Create an empty row---declaração de lista de adjacencia com vector
    }

    */

	for(int i=0;i<n;i++)
	{
		cin>>S>>T;
		if(m.find(S) == m.end())
		{
			c++;
			m[S] = c;
			contra[c] = S;
			res[S] = 501;
		} 
        if(m.find(T) == m.end())
		{
			c++;
			m[T] = c;
			contra[c] = T;
			res[T] = 501;
		}
		g[m[T]].push_back(m[S]);
		g[m[S]].push_back(m[T]);
	
	}
	int vertice = 0;
	vector<int> dist = bfs(vertice); //passa o vetor "inicio" com o número digitado

	map<string,int>::iterator it;
	int cont = 0;
	for(it=res.begin(); it!=res.end(); it++)
	{

		if(it->second <= G && it->second != 0)
		{
			cont ++;
		}
	}
	cout << cont << endl;
	for(it=res.begin(); it!=res.end(); it++)
	{
		
		if(it->second <= G && it->second != 0)
		{
			cout << it->first << endl;
		}
	}

	system("pause");

    return 0;
}
