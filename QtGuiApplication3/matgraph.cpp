#include<iostream>

#include "matgraph.h"

using namespace std;

matgraph::matgraph()
{
	memset(edges, 0, sizeof(edges));
}

matgraph::~matgraph()
{

}

vertex matgraph::query(string str)
{
	for (const auto&c : vexs)
	{
		if (str == c.name)
			return c;
	}
	return(vertex(""));
	//未找到时，返回一个空顶点，并给出提示
}

void Floyd(matgraph &g) {
	
	int i, j, k;
	for (i = 0; i<g.n; i++)
		for (j = 0; j < g.n; j++)
		{
			g.A[i][j] = g.edges[i][j];
			if (i != j && g.edges[i][j] < INF)
				g.path[i][j] = i;
			else
				g.path[i][j] = -1;
		}
	for (k = 0; k < g.n; k++)
	{
		for (i = 0; i<g.n; i++)
			for (j = 0; j < g.n; j++)
				if (g.A[i][j] > g.A[i][k] + g.A[k][j])
				{
					g.A[i][j] = g.A[i][k] + g.A[k][j];
					g.path[i][j] = g.path[k][j];
				}
	}
}

void Dispath(matgraph &g,size_t i,size_t j)
{
	int k, s;
	if (g.A[i][j] != INF && i != j)
		{
			k = g.path[i][j];
			g.d = 0; g.apath[g.d] = j;
			while (k != -1 && k != i)
			{
				g.d++; g.apath[g.d] = k;
				k = g.path[i][k];
			}
			g.d++; g.apath[g.d] = i;
		}
}

istream& operator >> (istream &is, matgraph &m)
{
	is >> m.n >> m.e;
	for (int s = 0; s < m.n; s++)
		is >> m.vexs[s];
	for (int i = 0; i < m.n; i++)
		for (int j = 0; j < m.n; j++)
		{
			is >> m.edges[i][j];
		}
	return is;
}

ostream& operator << (ostream &os, matgraph &m)
{
	os << m.n << " " << m.e << " ";
	for (int s = 0; s < m.n; s++)
		os << m.vexs[s] << " ";
	for (int i = 0; i < m.n; i++)
		for (int j = 0; j < m.n; j++)
		{
			os << m.edges[i][j] << " ";
		}
	return os;
}