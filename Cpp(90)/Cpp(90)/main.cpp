#define _CRT_SECURE_NO_WARNINGS 1




#include<iostream>
using namespace std;
//��ǰ��ͬѧ�����Թ��ʵ��������ʵ��һ��ͨ�õļӷ�����
//�е��˸���������Ĵ�
//���������ú���������ʵ��һ��ͨ�õļӷ�����
//����Ĵ��뿴��ȥ�ǿ���ʵ��ͨ�õĹ��ܵ�
//������ϸ���ǵĻ������Ǵ����кܶ������

int Add(int x, int y)
{
	return x + y;
}

double Add(double x, double y)
{
	return x + y;
}

short Add(short x, short y)
{
	return x + y;
}

float Add(float x, float y)
{
	return x + y;
}

int main()
{
	Add(1, 2);

	Add(1.0, 2.0);

	return 0;
}


#include<iostream>
using namespace std;
int Add(int x, int y)
{
	return x + y;
}
double Add(double x, double y)
{
	return x + y;
}
int main()
{
	Add(1, 2);
	
	Add(1.0, 2.0);

	return 0;
}


//����ģ��
#include<iostream>
using namespace std;
int Add(int x, int y)
{
	return x + y;
}
template<typename T>
T Add(T x, T y)
{
	return x + y;
}
int main()
{
	return 0;
}


#include<iostream>
using namespace std;
double Add(double x, double y)
{
	return x + y;
}
template<typename T>
T Add(T x, T y)
{
	return x + y;
}
template<typename T1, typename T2>
T1 Add(T1 x, T2 y)
{
	return x + y;
}
int main()
{
	Add(1, 2);

	return 0;
}


#include<iostream>
using namespace std;
template <typename T>
T Add(T x, T y)
{
	return x + y;
}
int main()
{
	cout << Add(1, 2) << endl;
	cout << Add(1.0, 2.0) << endl;
	return 0;
}


#include<iostream>
using namespace std;
template<class T>
T Add(T x, T y)
{
	return x + y;
}
int main()
{
	cout << Add(1, 2) << endl;
}


#include<iostream>
using namespace std;
template<typename T>
//ע�⣬��ģ���У�һ������´��ݵĲ�����������
//�������ͨ���β����޸�ʵ�εĻ�����ô
//����const���þͿ�����
//ΪʲôҪʹ�����ô��ݵģ���ΪT�п������Զ������ͣ�����Զ�������
//��ʹ��ֵ���ݵĻ�����Ч��û����ô����
//����һ������¾�ʹ��const�����������в����Ĵ���
T Add(const T& left, const T& right)
{
	return left + right;
}
int Add(const int& left, const int& right)
{
	return left + right;
}
int main()
{
	Add(1, 2); //ͨ������ĵ��ԣ�������һ�������int����һ�δ���
	// ���ģ�庯��ƥ�䣬����������Ҫ�ػ�
	//������ȥ������ͨ���͵ĺ����������ͨ���͵ĺ���
	//������ƥ��Ļ����Ż�ȥ����ģ�����
	//�����Ҫʹ��ģ��Ļ�����ô����ֻ��Ҫ�Դ��������ʾʵ�����Ϳ�����
	Add<int>(1, 2);    // ���ñ������ػ���Add�汾
	//�����������ʾʵ�������������ͻ����ģ��������һ��int���͵�Add����
	//ģ�����ɵ�int�����ǲ������ͨ�ĺ����������ͻ�ģ���Ϊ���������ĺ���������ʵ�ǲ���һ����
	//ͬʱ������Ҳ�������ں������أ���Ϊ����������������ʵ�ǲ�����ͬ��
	return 0;
}


// ר�Ŵ���int�ļӷ�����
int Add(int left, int right)
{
	return left + right;
}
// ͨ�üӷ�����
template<class T1, class T2>
T1 Add(T1 left, T2 right)
{
	return left + right;
}
void Test()
{
	Add(1, 2); // ��Ǻ���ģ��������ȫƥ�䣬����Ҫ����ģ��ʵ����
	Add(1, 2.0); // ģ�庯���������ɸ���ƥ��İ汾������������ʵ�����ɸ���ƥ���Add����
}


#include<iostream>
#include<string>
using namespace std;

void TestString()
{
	string s1;

	string s2("hello");

	string s3(10, 'c');

	string s4(s2);

	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;
	cout << s4 << endl;

	cout << s2.size() << endl;
	cout << s2.length() << endl;

	cout << s2.capacity() << endl;


}

int main()
{
	TestString();

	return 0;
}


#include<iostream>
#include<string>
using namespace std;
void TestString2()
{
	string s1("little bit,huge dream!!!");

	cout << s1.size() << endl;
	cout << s1.length() << endl;
	//����������Ľ����һ��һ����

	cout << s1.capacity() << endl;

	if (s1.empty())
		cout << "���ַ���" << endl;
	else
		cout << "���ǿ��ַ���" << endl;

	s1.clear();

	if (s1.empty())
		cout << "���ַ���" << endl;
	else
		cout << "���ǿ��ַ���" << endl;
}
int main()
{
	TestString2();

	return 0;
}


#include<iostream>
#include<string>
using namespace std;
void TestString3()
{
	string s("hello");
	cout << s << endl;
	cout << s.size() << endl;
	cout << s.capacity() << endl;

	s.reserve(20);
	cout << s << endl;
	cout << s.size() << endl;
	cout << s.capacity() << endl;

	s.reserve(10);
	cout << s << endl;
	cout << s.size() << endl;
	cout << s.capacity() << endl;
}

int main()
{
	TestString3();

	return 0;
}


#include<iostream>
#include<string>
using namespace std;

void TestString3()
{
	string s("hello");
	cout << s << endl;
	cout << s.size() << endl;
	cout << s.capacity() << endl;

	s.reserve(20);
	cout << s << endl;
	cout << s.size() << endl;
	cout << s.capacity() << endl;

	s.reserve(40);
	cout << s << endl;
	cout << s.size() << endl;
	cout << s.capacity() << endl;

	s.reserve(50);
	cout << s << endl;
	cout << s.size() << endl;
	cout << s.capacity() << endl;

	s.reserve(40);
	cout << s << endl;
	cout << s.size() << endl;
	cout << s.capacity() << endl;

	s.reserve(20);
	cout << s << endl;
	cout << s.size() << endl;
	cout << s.capacity() << endl;

	s.reserve(10);
	cout << s << endl;
	cout << s.size() << endl;
	cout << s.capacity() << endl;
}

int main()
{
	TestString3();

	return 0;
}


#include<iostream>
using namespace std;
void TestString4()
{
	string s("hello");
	cout << s.size() << endl;
	cout << s.capacity() << endl;

	//�������5���ַ���!�������
	s.resize(10, '!');

	cout << s.size() << endl;
	cout << s.capacity() << endl;
}
int main()
{
	TestString4();

	return 0;
}


#include<iostream>
#include<string>
using namespace std;
void TestString4()
{
	string s("hello");
	cout << s.size() << endl;
	cout << s.capacity() << endl;

	//�������5���ַ���!�������
	s.resize(10, '!');

	cout << s.size() << endl;
	cout << s.capacity() << endl;

	s.resize(20, '$');

	cout << s.size() << endl;
	cout << s.capacity() << endl;

	s.resize(40, '&');

	cout << s.size() << endl;
	cout << s.capacity() << endl;
}
int main()
{
	TestString4();

	return 0;
}


#include<iostream>
#include<string>
using namespace std;
void TestString4()
{
	string s("hello");
	cout << s.size() << endl;
	cout << s.capacity() << endl;

	//�������5���ַ���!�������
	s.resize(10, '!');

	cout << s.size() << endl;
	cout << s.capacity() << endl;

	s.resize(20, '$');

	cout << s.size() << endl;
	cout << s.capacity() << endl;

	s.resize(40, '&');

	cout << s.size() << endl;
	cout << s.capacity() << endl;

	s.resize(30);

	cout << s.size() << endl;
	cout << s.capacity() << endl;

	s.resize(20);

	cout << s.size() << endl;
	cout << s.capacity() << endl;

	s.resize(10);

	cout << s.size() << endl;
	cout << s.capacity() << endl;
}
int main()
{
	TestString4();

	return 0;
}


#include<iostream>
#include<string>
using namespace std;
void TestString5()
{
	string s1("hello");
	cout << s1[0] << endl;
	s1[0] = 'H';
	cout << s1 << endl;

	//���s1�е���ĸ���Ǵ�д����ô���ǾͰ����ĳɴ�д
	for (size_t i = 0; i < s1.size(); i++)
	{
		if (s1[i] >= 'a' && s1[i] <= 'z')
		{
			s1[i] -= 32;
		}
	}
	//ʹ�õ��������д�ӡ�Ĳ���
	//�����������俴��һ��ָ����ʹ��
	string::iterator it = s1.begin();
	while (it != s1.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;

	//����ʹ�õ������ķ�ʽ���д�ӡ�����ǻ�����ʹ�û��ڷ�Χ��forѭ�������д�ӡ�Ĳ���
	//string�������һ����Χȷ��������
	//���Կ���֧�ַ�Χfor
	for (auto c : s1)
	{
		cout << c << endl;
	}
}
int main()
{
	TestString5();

	return 0;
}


#include<iostream>
#include<string>
using namespace std;
void TestString7()
{
	string s;

	s.push_back('I');

	s.append(" ");

	string ss("Love");

	s.append(ss);

	s += " ";

	s += "China";

	cout << s << endl;
}
int main()
{
	TestString7();

	return 0;
}


#include<iostream>
#include<string>
using namespace std;
void TestString7()
{
	string s;

	s.push_back('I');

	s.append(" ");

	string ss("Love");

	s.append(ss);

	s += " ";

	s += "China";

	s += " ";
	s.push_back('!');

	cout << s << endl;

	s.insert(s.find('!') - 1, ":)");

	cout << s << endl;
}
int main()
{
	TestString7();

	return 0;
}


#include<iostream>
using namespace std;

int Add(int a, int b)
{
	return a + b;
}
int main()
{
	const int&& ra = 10;

	int&& rb = 2 + 3;

	// ���ú�������ֵ������ֵ��һ����ʱ������Ϊ��ֵ
	int&& rRet = Add(10, 20);

	//�����������������յ�ֵ������ֵ��Ϊʲô����ֵ������Ϊ����Ա�ra��rb��rRet��������������

	int a = 4;

	int&& rc = a;
	//�����ôд����Ļ���������ʵ���ǻᱨ���
	//�����ԭ�����޷�����ֵ�󶨵���ֵ����
	//������Կ�����a��ʵ��һ����ֵ
	//�Լ���ֵ����ֻ����������ֵ���ǲ�����������ֵ��

	return 0;
}


#include<iostream>
using namespace std;
int g_a = 10;
// �����ķ���ֵ���Ϊ����
int& GetG_A()
{
	return g_a;
}
int main()
{
	int a = 10;
	int b = 20;
	// a��b������ֵ��b�ȿ�����=����࣬Ҳ�����Ҳ࣬
	// ˵������ֵ�ȿɷ���=����࣬Ҳ�ɷ���=���Ҳ�
	a = b;
	b = a;
	const int c = 30;

	// ����ʧ�ܣ�cΪconst������ֻ���������޸�
	//c = a;

	// ��Ϊ���Զ�cȡ��ַ�����c�ϸ���˵��������ֵ
	cout << &c << endl;

	// ����ʧ�ܣ���Ϊb+1�Ľ����һ����ʱ������û�о������ƣ�Ҳ����ȡ��ַ�����Ϊ��ֵ
	//b + 1 = 20;

	GetG_A() = 100;
	return 0;
}


#include<iostream>
#include<string>
using namespace std;
class String
{
public:
	//����
	String(const char* str = "")
	{
		if (nullptr == str)
		{
			str = "";
		}
		_str = new char[strlen(str) + 1];
		strcpy(_str, str);
	}

	String(const String& s)
		:_str(new char[strlen(s._str) + 1])
	{
		strcpy(_str,s._str);
	}

	String& operator=(const String& s)
	{
		if (this != &s)
		{
			/*delete[] _str;
			_str = new char[strlen(s._str) + 1];
			strcpy(_str, s._str);*/

			char *temp= new char[strlen(s._str) + 1];
			strcpy(temp, s._str);
			delete[] _str;
			_str = temp;
		}
		return *this;
	}

	~String()
	{
		if (_str)
		{
			delete[] _str;
			_str = nullptr;
		}
	}

	//�ַ������:�������ַ�������ƴ��
	String operator+(const String& s)
	{
		int len = strlen(_str);
		char* temp = new char[len + strlen(s._str) + 1];
		strcpy(temp, _str);
		strcpy(temp + len, s._str);
		String strRet(temp);
		return strRet;
	}

private:
	char* _str;
};

void TestString()
{
	String s1("hello");

	String s2(s1);

	String s3;

	s3 = s2;

	String s4("world");

	s3 = s1 + " " + s4;

}
int main()
{
	TestString();
	return 0;
}


#include<iostream>
#include<string>
using namespace std;
class String
{
public:
	//����
	String(const char* str = "")
	{
		if (nullptr == str)
		{
			str = "";
		}
		_str = new char[strlen(str) + 1];
		strcpy(_str, str);
	}

	//�ƶ�����
	String(String&& s)
		:_str(s._str)
	{
		s._str = nullptr;
	}

	String(const String& s)
		:_str(new char[strlen(s._str) + 1])
	{
		strcpy(_str,s._str);
	}

	String& operator=(const String& s)
	{
		if (this != &s)
		{
			/*delete[] _str;
			_str = new char[strlen(s._str) + 1];
			strcpy(_str, s._str);*/

			char *temp= new char[strlen(s._str) + 1];
			strcpy(temp, s._str);
			delete[] _str;
			_str = temp;
		}
		return *this;
	}

	//�ƶ���ֵ---ԭ��Ҳ����Դ��ת��
	String& operator=(const String&& s)
	{
		if (this != &s)
		{
			//�����������е���Դֱ�ӽ��н�����ʵ�Ϳ�����
			swap(_str, s._str);
		}
		return *this;
	}

	~String()
	{
		if (_str)
		{
			delete[] _str;
			_str = nullptr;
		}
	}

	//�ַ������:�������ַ�������ƴ��
	String operator+(const String& s)
	{
		int len = strlen(_str);
		char* temp = new char[len + strlen(s._str) + 1];
		strcpy(temp, _str);
		strcpy(temp + len, s._str);
		String strRet(temp);
		return strRet;
	}

	void swap(char* left, char* right)
	{
		char temp = *left;
		*left = *right;
		*right = temp;
	}

private:
	char* _str;
};

void TestString()
{
	String s1("hello");

	String s2(s1);

	String s3;

	s3 = s2;

	String s4("world");

	s3 = s1 + " " + s4;

}
int main()
{
	TestString();
	return 0;
}


#include<iostream>
#include<string>
class String
{
public:
	//����
	String(const char* str = "")
	{
		if (nullptr == str)
		{
			str = "";
		}
		_str = new char[strlen(str) + 1];
		strcpy(_str, str);
	}

	//�ƶ�����
	String(String&& s)
		:_str(s._str)
	{
		s._str = nullptr;
	}

	String(const String& s)
		:_str(new char[strlen(s._str) + 1])
	{
		strcpy(_str,s._str);
	}

	String& operator=(const String& s)
	{
		if (this != &s)
		{
			/*delete[] _str;
			_str = new char[strlen(s._str) + 1];
			strcpy(_str, s._str);*/

			char *temp= new char[strlen(s._str) + 1];
			strcpy(temp, s._str);
			delete[] _str;
			_str = temp;
		}
		return *this;
	}

	//�ƶ���ֵ---ԭ��Ҳ����Դ��ת��
	String& operator=(const String&& s)
	{
		if (this != &s)
		{
			//�����������е���Դֱ�ӽ��н�����ʵ�Ϳ�����
			swap(_str, s._str);
		}
		return *this;
	}

	~String()
	{
		if (_str)
		{
			delete[] _str;
			_str = nullptr;
		}
	}

	//�ַ������:�������ַ�������ƴ��
	String operator+(const String& s)
	{
		int len = strlen(_str);
		char* temp = new char[len + strlen(s._str) + 1];
		strcpy(temp, _str);
		strcpy(temp + len, s._str);
		String strRet(temp);
		return strRet;
	}

	void swap(char* left, char* right)
	{
		char temp = *left;
		*left = *right;
		*right = temp;
	}

private:
	char* _str;
};
class Person
{
public:
	Person(const char* name, char* sex, int age)
		: _name(name)
		, _sex(sex)
		, _age(age)
	{

	}
	Person(const Person& p)
		: _name(p._name)
		, _sex(p._sex)
		, _age(p._age)
	{

	}

#if 0
	Person(Person && p)
		: _name(p._name)
		, _sex(p._sex)
		, _age(p._age)
	{}
		Person(Person && p)
		: _name(move(p._name))
		, _sex(move(p._sex))
		, _age(p._age)
	{}
#endif
private:
	String _name;
	String _sex;
	int _age;
};
Person GetTempPerson()
{
	Person p("pre", "male", 18);
	return p;
}
int main()
{
	Person p(GetTempPerson());
	return 0;
}


#include<iostream>
#include<string>
using namespace std;
void Fun(int& x) 
{ 
	cout << "lvalue ref" << endl;
}
void Fun(int&& x) 
{ 
	cout << "rvalue ref" << endl;
}
void Fun(const int& x)
{  
	cout << "const lvalue ref" << endl; 
}
void Fun(const int&& x) 
{ 
	cout << "const rvalue ref" << endl;
}
template<typename T>
void PerfectForward(T&& t) 
{ 
	Fun(std::forward<T>(t));
}
int main()
{
	PerfectForward(10); // rvalue ref
	int a;
	PerfectForward(a); // lvalue ref
	PerfectForward(std::move(a)); // rvalue ref
	const int b = 8;
	PerfectForward(b); // const lvalue ref
	PerfectForward(std::move(b)); // const rvalue ref
	return 0;
}


#include<iostream>
#include <algorithm>
#include <functional>
int main()
{
	int array[] = { 4,1,8,5,3,7,0,9,2,6 };
	// Ĭ�ϰ���С�ڱȽϣ��ų������������
	std::sort(array, array + sizeof(array) / sizeof(array[0]));
	// �����Ҫ������Ҫ�ı�Ԫ�صıȽϹ���
	std::sort(array, array + sizeof(array) / sizeof(array[0]), greater<int>());   //greater�൱����һ����ģ��ıȽ���
	return 0;
}


struct Goods
{
	string _name;
	double _price;
};
struct Compare
{
	bool operator()(const Goods& gl, const Goods& gr)
	{
		return gl._price <= gr._price;
	}
};
int main()
{
	Goods gds[] = { { "ƻ��", 2.1 }, { "�ཻ", 3 }, { "����", 2.2 }, {"����", 1.5} };
	sort(gds, gds + sizeof(gds) / sizeof(gds[0]), Compare());
	return 0;
}


#include<iostream>
#include <algorithm>
using namespace std;
struct Goods
{
	string _name;
	double _price;
};
int main()
{
	Goods gds[] = { { "ƻ��", 2.1 }, { "�ཻ", 3 }, { "����", 2.2 }, {"����", 1.5} };
	sort(gds, gds + sizeof(gds) / sizeof(gds[0]), [](const Goods& l, const Goods& r)
		->bool
		{
			return l._price < r._price;
		});
	return 0;
}


#include<iostream>
using namespace std;
int main()
{
	int a = 10, b = 20, c = 30;

	//�൱���Ƕ�����һ��û�����ֵĺ���
	auto f = [a]() {cout << a << endl; };

	f();
	return 0;
}


#include<iostream>
using namespace std;
int main()
{
	int a = 10, b = 20, c = 30;

	cout << &a << endl;
	//�൱���Ƕ�����һ��û�����ֵĺ���
	auto f = [a]() {cout << &a << " " << a << endl; };

	f();
	return 0;
}


#include<iostream>
using namespace std;
int main()
{
	int a = 10, b = 20, c = 30;

	cout << &a << endl;
	//�൱���Ƕ�����һ��û�����ֵĺ���
	auto f = [a]() mutable {a = 100;  cout << &a << " " << a << endl; };

	f();
	return 0;
}


#include<iostream>
using namespace std;
int main()
{
	int a = 10, b = 20, c = 30;

	cout << &a << endl;
	//�൱���Ƕ�����һ��û�����ֵĺ���
	auto f1 = [a]() mutable {a = 100;  cout << &a << " " << a << endl; };

	f1();

	//[]����ʲô����д�Ļ����൱����û�н��в����
	//���ʱ������㻹��ȥʹ��a�Ļ�����ʵ�����޷�ʹ�õ�
	//��ô���ʱ��Ҫ��ô����
	//��ʵ����ֱ�Ӹ�[]�з�ֹһ���Ⱥ�
	//�������ʱ�������ز�������ȥ��ӡa��ͬʱҲ�ǿ���ȥ��ӡb��
	auto f2 = [=]() mutable {a = 100;  cout << &a << " " << a << &b << " " << b << endl; };

	f2();

	return 0;
}


#include<iostream>
using namespace std;
int main()
{
	int a = 10, b = 20, c = 30;

	cout << &a << endl;
	//�൱���Ƕ�����һ��û�����ֵĺ���
	auto f1 = [a]() mutable {a = 100;  cout << &a << " " << a << endl; };

	f1();

	//[]����ʲô����д�Ļ����൱����û�н��в����
	//���ʱ������㻹��ȥʹ��a�Ļ�����ʵ�����޷�ʹ�õ�
	//��ô���ʱ��Ҫ��ô����
	//��ʵ����ֱ�Ӹ�[]�з�ֹһ���Ⱥ�
	//�������ʱ�������ز�������ȥ��ӡa��ͬʱҲ�ǿ���ȥ��ӡb��
	auto f2 = [=]() mutable {a = 100;  cout << &a << " " << a << &b << " " << b << endl; };

	f2();

	auto f3 = [=,a]() mutable {a = 100;  cout << &a << " " << a << &b << " " << b << endl; };

	f3();

	return 0;
}


#include<iostream>
using namespace std;
int main()
{
	int a = 10, b = 20, c = 30;

	cout << &a << endl;
	//�൱���Ƕ�����һ��û�����ֵĺ���
	auto f1 = [a]() mutable {a = 100;  cout << &a << " " << a << endl; };

	f1();

	//[]����ʲô����д�Ļ����൱����û�н��в����
	//���ʱ������㻹��ȥʹ��a�Ļ�����ʵ�����޷�ʹ�õ�
	//��ô���ʱ��Ҫ��ô����
	//��ʵ����ֱ�Ӹ�[]�з�ֹһ���Ⱥ�
	//�������ʱ�������ز�������ȥ��ӡa��ͬʱҲ�ǿ���ȥ��ӡb��
	auto f2 = [=]() mutable {a = 100;  cout << &a << " " << a << &b << " " << b << endl; };

	f2();

	//auto f3 = [=, a]() mutable {a = 100;  cout << &a << " " << a << &b << " " << b << endl; };

	//f3();

	auto f4 = [&a, b]() mutable {a = 100;  cout << &a << " " << a <<  endl; };

	f4();

	return 0;
}


#include<iostream>
using namespace std;
void (*PF)();
int main()
{
	auto f1 = [] {cout << "hello world" << endl; };
	auto f2 = [] {cout << "hello world" << endl; };
	// �˴��Ȳ�����ԭ�򣬵�lambda���ʽ�ײ�ʵ��ԭ����󣬴�Ҿ������
	//f1 = f2; // ����ʧ��--->��ʾ�Ҳ���operator=()
	// ����ʹ��һ��lambda���ʽ��������һ���µĸ���
	auto f3(f2);
	f3();
	// ���Խ�lambda���ʽ��ֵ����ͬ���͵ĺ���ָ��
	PF = f2;
	PF();
	return 0;
}


class Rate
{
public:
	Rate(double rate) : _rate(rate)
	{}
	double operator()(double money, int year)
	{
		return money * _rate * year;
	}
private:
	double _rate;
};
int main()
{
	// ��������
	double rate = 0.49;
	//������һ��Rate�ı���
	Rate r1(rate);
	r1(10000, 2);

	// lambda���ʽ������ʵ�ǻ�ת����һ�����
	auto r2 = [rate](double monty, int year)->double {return monty * rate * year; };
	r2(10000, 2);
	return 0;
}


#include<iostream>
#include<thread>
using namespace std;
void ThreadFunc(int param)
{
	cout << "Thread1:" << param << endl;   //��ӡһ�²���
}
class TF
{
public:

	//����û�д�ӡ������д�ӡ�Ļ�����ô��˵���߳�ִ����
	//���û�д�ӡ�Ļ�����ô��˵���߳���ʵ��û��ִ�е�
	void operator()(int param)
	{
		cout << "TF:" << param << endl;
	}
};
int main()
{
	//����ֻ�Ǵ�����һ������
	//��û�и��ö������������߳�
	std::thread t1;
	cout << t1.get_id() << endl;

	//ʹ���߳̿ⴴ���̵߳����ַ�ʽ

	//����ָ��
	thread t4(ThreadFunc, 100);
	//���ʱ���߳���ʵ���Ѿ�������

	//������ͨ���º����ķ�ʽ������

	//�ȴ���һ������Ȼ���200��������ȥ
	thread t2(TF(),200);

	//ͨ��lambda���ʽ
	//���ź�������Ĳ���
	thread t3([](int param) {cout << "lambda:" << param << endl; }, 300);

	//��ô���߳����ȥ������
	t4.join();
	t2.join();
	t3.join();


	return 0;
}