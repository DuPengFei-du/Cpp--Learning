#pragma once 
#include<string>
#include<iostream>
using namespace std;


size_t GetNextPrime(size_t capacity);


//���T�����ε�
template<class T>
class DFDef
{
public:
	//��ֻ��Ҫ�����Ž������صĲ�����ʵ���ǿ��Ե�
	T operator()(const T& data)
	{
		return data;
	}
};

template<class T>

//���T��string�����
class DFStr
{
public:
	size_t operator()(const string& s)
	{
		return BKDRHash(s.c_str());
	}

	//�Ǳ������ṩ�Ĵ����ַ����ķ�ʽ
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