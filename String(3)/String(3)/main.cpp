#define _CRT_SECURE_NO_WARNINGS 1



#include<iostream>
#include<string>
#include<assert.h>
using namespace std;
namespace bite
{
	//string����ʵ�൱���Ƕ�̬���͵��ַ�˳���
	class string
	{
		friend ostream& operator<<(ostream& _cout, const bite::string& s);
	public:
		//��string��ĵ�����
		typedef char* iterator;
	public:
		//���캯��
		string(const char* str = "")
		{
			if (str == nullptr)
			{
				str = "";
			}
			_size = strlen(str);
			//��׼����string��������û����\0�Ŀռ��
			_capacity = _size < 15 ? 15 : strlen(str);
			//+1����ΪҪ���\0�Ŀռ��
			_str = new char[_capacity + 1];
			strcpy(_str, str);
		}

		string(const string& s, size_t pos, size_t n = npos)
		{
			size_t len = s.size();
			if (pos > len)
				pos = len;
			if (n > len - pos)
				n = len - pos;
			_str = new char[n + 1];
			strncpy(_str, s.c_str() + pos, n);
			_size = n;
			_capacity = n;
			_str[_size] = '\0';
		}

		//����
		~string()
		{
			if (_str)
			{
				delete[] _str;
				_str = nullptr;
				_capacity = 0;
				_size = 0;
			}
		}

		string(const string& s)
			:_str(nullptr)
		{
			string strTemp(s._str);
			this->swap(strTemp);
		}

		//string& operator=(string s)
		//{
		//	//��һ���ǲ����Լ����Լ���ֵ
		//	//������Լ����Լ���ֵ�Ļ�����ʵ��ûʲô��Ҫ��
		//	swap(_str, s._str);
		//	return *this;
		//}

		string& operator=(const string& s)
		{
			//һ���������ж�һ���ǲ����Լ����Լ����з�ָ�Ĳ���
			if (this != &s)
			{
				string strTemp(s._str);
				this->swap(strTemp);
			}
			return *this;
		}


		///////////////////////////////////////////
		size_t size()const
		{
			return _size;
		}

		size_t capacity()const
		{
			return _capacity;
		}

		bool empty()const
		{
			return 0 == _size;
		}

		void reserve(size_t newCapacity)
		{
			size_t oldCapacity = capacity();
			if (newCapacity > oldCapacity)
			{
				//ֻ�д��ڵ�ʱ��Ż�ȥ�������ݵĲ����������С��
				//�ͺ��Դ˴ε����ݲ���
				char* temp = new char[newCapacity + 1];
				strncpy(temp, _str, _size);
				delete[] _str;
				_str = temp;
				_capacity = newCapacity;
			}
		}

		void resize(size_t newsize, char ch)
		{
			/*
			size_t oldsize = size();
			if (newsize <= oldsize)
			{
				_size = newsize;
				_str[_size] = '\0';
			}
			else if (newsize < capacity())
			{
				//ֱ�����
				memset(_str+_size, ch, newsize - oldsize);
				_size = newsize;
				_str[_size] = '\0';
			}
			else
			{
				//��ȥ���ٿռ�
				reserve(newsize);
				memset(_str + _size, ch, newsize - oldsize);
				_size = newsize;
				_str[_size] = '\0';
			}
			*/
			//������������ִ�����Ҫ�����ȥ���ۣ�����д������ʵ��һЩ����
			//��ô����ʵ�������и�����һ��д���ģ�������ʾ

			size_t oldsize = size();
			if (newsize > oldsize)
			{
				if (newsize > capacity())
				{
					reserve(newsize);
				}
				memset(_str + _size, ch, newsize - oldsize);
			}
			_size = newsize;
			_str[_size] = '\0';
		}

		void resize(size_t newsize)
		{
			//��������ķ���
			//������Ŀռ���0�������
			resize(newsize, 0);
		}

		void clear()
		{
			_size = 0;
			*_str = '\0';
		}

		iterator begin()
		{
			return _str;
		}

		iterator end()
		{
			return _str + _size;
		}

		//�±����ò�����
		char& operator[](size_t index)
		{
			assert(index < _size);
			return _str[index];
		}

		const char& operator[](size_t index)const
		{
			assert(index < _size);
			return _str[index];
		}

		void swap(string& s)
		{
			std::swap(_str, s._str);
			std::swap(_size, s._size);
			std::swap(_capacity, s._capacity);
		}

		void push_back(char ch)
		{
			if (_size == _capacity)
			{
				reserve(_size * 2);   //���ݵ�ԭ��������2��
			}
			_str[_size++] = ch;
			_str[_size] = '\0';
		}

		string& operator+=(const char* s)
		{
			////���ȼ���Ҫ������������ַ���ƴ����һ����Ҫ�����ڴ�ռ�
			//size_t leftsize = _size;
			//size_t rightsize = strlen(s);
			//char* temp = new char[leftsize + rightsize + 1];
			//strcpy(temp, _str);
			//strcpy(temp + leftsize, s);
			//delete[] _str;
			//_str = temp;
			//_size = leftsize + rightsize;
			//_capacity = _size;
			//return *this;

			//���������������ַ����������Ļ�������ʹ�����������д��
			int len = strlen(s);
			reserve(_capacity + len);
			strcpy(_str + _size, s);
			_size += len;
			return* this;
		}

		//�������

		//����һ��C���Ը�ʽ���ַ���
		const char* c_str()const
		{
			return _str;
		}

		size_t find(char ch, size_t pos)const
		{
			for (size_t i = pos; i < _size; i++)
			{
				if (_str[i] == ch)
				{
					return i;
				}
			}
			return npos;
		}

		size_t rfind(char ch, size_t pos = npos)
		{
			for (int i = pos != npos ? pos : _size - 1; i >= 0; --i)
			{
				if (_str[i] == ch)
					return i;
			}
			return npos;
		}

		//��pos��λ�ÿ�ʼ��ȡn���ַ�����һ���µ��ַ������з��ز���
		string substr(size_t pos = 0, size_t n = npos)const
		{
			//��֤��Խ��
			if (pos > _size)
				pos = _size;
			if (n == _size - pos)
				n = _size - pos;
			return string(*this, pos, n);
		}

	private:
		char* _str;
		size_t _capacity;   //����û�н�\0�Ŀռ�����ȥ�ģ������ڵײ㿪�ٿռ����ҪԤ����\0��λ��
		size_t _size;

		static size_t npos;
	};

	ostream& operator<<(ostream& _cout, const bite::string& s)
	{
		for (size_t i = 0; i < s.size(); ++i)
		{
			if (s[i] == '\0')
				cout << ' ';
			else
				cout << s[i];
		}
		return _cout;
	}

	size_t string::npos = -1;
}



void TestBiteString1()
{
	bite::string s1("hello");
	bite::string s2(s1);

	for (auto e : s1)
		cout << e << " ";
	cout << endl;

	/*for (auto e : s2)
		cout << e << " ";
	cout << endl;*/

	//���ߣ���s2�Ļ������Ի�һ�ִ�ӡ�ķ�ʽ

	//�����������iterator�ķ������ε��Ļ�����ô��ʵ���ڷ�Χ��forѭ��Ҳ�Ͳ�������
	//ԭ�����ڶ����Զ������ͣ����ڷ�Χ��forѭ��ʵ������ת��Ϊ
	//begin��end������һϵ�еĲ�����
	//��������Ļ��ڷ�Χ��forѭ���������iterator�ķ���ʵ���Ͼ���ͬһ�ַ���
	auto it = s2.begin();
	while (it != s2.end())
	{
		cout << *it << " ";
		++it;
	}
}
void TestBiteString2()
{
	bite::string s1("hello");
	s1.push_back(' ');
	s1.push_back('w');
	s1.push_back('o');
	s1.push_back('r');
	s1.push_back('l');
	s1.push_back('d');

	cout << s1 << endl;


	s1.resize(10, '!');
	cout << s1.size() << endl;
	cout << s1.capacity() << endl;
	cout << s1 << endl;

	s1.resize(20, '$');
	cout << s1.size() << endl;
	cout << s1.capacity() << endl;
	cout << s1 << endl;

	s1.resize(6);
	cout << s1.size() << endl;
	cout << s1.capacity() << endl;
	cout << s1 << endl;

	s1.clear();
	if (s1.empty())
		cout << "���ַ���" << endl;
	else
		cout << "�ǿ��ַ���" << endl;
}

void TestBiteString3()
{
	bite::string s("2020,12,17.cpp");
	bite::string fix = s.substr(s.rfind('.') + 1);
	cout << fix;
}

int main()
{
	//TestBiteString1();

	//TestBiteString2();

	TestBiteString3();

	return 0;
}