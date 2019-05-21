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

	size_t id;		//编号
	string name;	//地点名字
	string ifm;		//information，地点简介
	string type;	//类型
	int x;			//地点坐标
	int y;

	friend istream& operator >> (istream &, vertex &);//运算符>>重载为友元函数  
	friend ostream& operator << (ostream &, vertex &);//运算符<<重载为友元函数  
};
