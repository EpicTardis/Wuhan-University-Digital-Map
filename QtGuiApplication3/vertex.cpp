#include<iostream>

#include"vertex.h"

vertex::vertex()
{
	
}

vertex::~vertex()
{

}

istream& operator >> (istream &is, vertex &s)
{
	is >> s.id >> s.name >> s.ifm >> s.type >> s.x >> s.y;
	return is;
}

ostream& operator << (ostream &os, vertex &s)
{
	os << s.id << s.name << s.ifm << s.type << s.x << s.y;
	return os;
}