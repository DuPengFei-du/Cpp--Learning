#pragma once 
#include<string>
#include<iostream>
using namespace std;


size_t GetNextPrime(size_t capacity);


//如果T是整形的
template<class T>
class DFDef
{
public:
	//我只需要对括号进行重载的操作其实就是可以的
	T operator()(const T& data)
	{
		return data;
	}
};

template<class T>

//如果T是string类对象
class DFStr
{
public:
	size_t operator()(const string& s)
	{
		return BKDRHash(s.c_str());
	}

	//是别人所提供的处理字符串的方式
private:
	size_t BKDRHash(const char* str)
	{
		register size_t hash = 0;
		while (size_t ch = (size_t)* str++)
		{
			hash = hash * 131 + ch;
		}
		return hash;
	}
};