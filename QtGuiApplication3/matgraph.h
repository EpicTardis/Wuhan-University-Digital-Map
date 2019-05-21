#pragma once

#define MAXV 256

#include "vertex.h"

class matgraph 
{
public:
	matgraph();
	~matgraph();
	vertex query(string);				//Ӧ��ʾδ�ҵ�
	
	int n, e;							//������������
	vertex vexs[MAXV];					//������Ϣ
	int edges[MAXV][MAXV];				//�ڽӾ�������
	int A[MAXV][MAXV], path[MAXV][MAXV];//Floyd�㷨�е�A�����path����
	int apath[MAXV];					//�������֮����̾��뾭���Ķ��㣨ע��Ϊ����
	int d;								//���apath������Чλ�ĳ���

	friend void Floyd(matgraph&);
	friend void Dispath(matgraph&, size_t, size_t);

	friend istream& operator >> (istream &, matgraph &);//�����>>����Ϊ��Ԫ����  
	friend ostream& operator << (ostream &, matgraph &);//�����<<����Ϊ��Ԫ����  
};