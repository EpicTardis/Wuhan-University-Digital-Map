#pragma once

#include <string>

#define INF 32767

using namespace std;

class vertex
{
public:
	vertex();
	vertex(const string& str) :name(str) {}
	vertex(size_t sz, const string& str1, const string str2,const string& str3)
		:id(sz), name(str1), ifm(str2),type(str3) {}
	~vertex();

	size_t id;		//���
	string name;	//�ص�����
	string ifm;		//information���ص���
	string type;	//����
	int x;			//�ص�����
	int y;

	friend istream& operator >> (istream &, vertex &);//�����>>����Ϊ��Ԫ����  
	friend ostream& operator << (ostream &, vertex &);//�����<<����Ϊ��Ԫ����  
};
