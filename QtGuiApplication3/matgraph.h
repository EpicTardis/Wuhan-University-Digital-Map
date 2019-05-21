#pragma once

#define MAXV 256

#include "vertex.h"

class matgraph 
{
public:
	matgraph();
	~matgraph();
	vertex query(string);				//应提示未找到
	
	int n, e;							//顶点数，边数
	vertex vexs[MAXV];					//顶点信息
	int edges[MAXV][MAXV];				//邻接矩阵数组
	int A[MAXV][MAXV], path[MAXV][MAXV];//Floyd算法中的A数组和path数组
	int apath[MAXV];					//存放两点之间最短距离经过的顶点（注意为反序）
	int d;								//存放apath数组有效位的长度

	friend void Floyd(matgraph&);
	friend void Dispath(matgraph&, size_t, size_t);

	friend istream& operator >> (istream &, matgraph &);//运算符>>重载为友元函数  
	friend ostream& operator << (ostream &, matgraph &);//运算符<<重载为友元函数  
};