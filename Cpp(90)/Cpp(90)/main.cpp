#define _CRT_SECURE_NO_WARNINGS 1




#include<iostream>
using namespace std;
//以前有同学被面试官问道过，如何实现一个通用的加法函数
//有的人给出了下面的答案
//他是想利用函数重载来实现一个通用的加法函数
//下面的代码看上去是可以实现通用的功能的
//但是仔细考虑的话，还是存在有很多问题的

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


//函数模板
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
//注意，在模板中，一般情况下传递的参数都是引用
//如果不想通过形参是修改实参的化，那么
//传递const引用就可以了
//为什么要使用引用传递的，因为T有可能是自定义类型，如果自定义类型
//还使用值传递的话，就效率没有那么高了
//所以一般情况下就使用const的引用来进行参数的传递
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
	Add(1, 2); //通过代码的调试，发现这一句进入了int的那一段代码
	// 与非模板函数匹配，编译器不需要特化
	//会优先去调用普通类型的函数，如果普通类型的函数
	//参数不匹配的话，才回去调用模板参数
	//如果想要使用模板的话，那么我们只需要对代码进行显示实例化就可以了
	Add<int>(1, 2);    // 调用编译器特化的Add版本
	//如果进行了显示实例化，编译器就会根据模板来生成一份int类型的Add函数
	//模板生成的int函数是不会和普通的函数所引起冲突的，因为他们两个的函数名称其实是并不一样的
	//同时，二者也并不属于函数重载，因为两个函数的名称其实是并不相同的
	return 0;
}


// 专门处理int的加法函数
int Add(int left, int right)
{
	return left + right;
}
// 通用加法函数
template<class T1, class T2>
T1 Add(T1 left, T2 right)
{
	return left + right;
}
void Test()
{
	Add(1, 2); // 与非函数模板类型完全匹配，不需要函数模板实例化
	Add(1, 2.0); // 模板函数可以生成更加匹配的版本，编译器根据实参生成更加匹配的Add函数
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
	//两个求出来的结果是一摸一样的

	cout << s1.capacity() << endl;

	if (s1.empty())
		cout << "空字符串" << endl;
	else
		cout << "不是空字符串" << endl;

	s1.clear();

	if (s1.empty())
		cout << "空字符串" << endl;
	else
		cout << "不是空字符串" << endl;
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

	//多出来的5个字符用!进行填充
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

	//多出来的5个字符用!进行填充
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

	//多出来的5个字符用!进行填充
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

	//如果s1中的字母不是大写，那么我们就把他改成大写
	for (size_t i = 0; i < s1.size(); i++)
	{
		if (s1[i] >= 'a' && s1[i] <= 'z')
		{
			s1[i] -= 32;
		}
	}
	//使用迭代器进行打印的操作
	//迭代器，将其看成一个指针来使用
	string::iterator it = s1.begin();
	while (it != s1.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;

	//除了使用迭代器的方式进行打印，我们还可以使用基于范围的for循环来进行打印的操作
	//string本身就是一个范围确定的序列
	//所以可以支持范围for
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

	// 引用函数返回值，返回值是一个临时变量，为右值
	int&& rRet = Add(10, 20);

	//上面三个引用所接收的值都是右值，为什么是右值，是因为其可以被ra，rb，rRet三个引用所引用

	int a = 4;

	int&& rc = a;
	//如果这么写代码的话，代码其实就是会报错的
	//报错的原因是无法将左值绑定到右值引用
	//从这可以看出，a其实是一个左值
	//以及右值引用只可以引用右值，是不可以引用左值的

	return 0;
}


#include<iostream>
using namespace std;
int g_a = 10;
// 函数的返回值结果为引用
int& GetG_A()
{
	return g_a;
}
int main()
{
	int a = 10;
	int b = 20;
	// a和b都是左值，b既可以在=的左侧，也可在右侧，
	// 说明：左值既可放在=的左侧，也可放在=的右侧
	a = b;
	b = a;
	const int c = 30;

	// 编译失败，c为const常量，只读不允许被修改
	//c = a;

	// 因为可以对c取地址，因此c严格来说不算是左值
	cout << &c << endl;

	// 编译失败：因为b+1的结果是一个临时变量，没有具体名称，也不能取地址，因此为右值
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
	//构造
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

	//字符串相加:将两个字符串进行拼接
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
	//构造
	String(const char* str = "")
	{
		if (nullptr == str)
		{
			str = "";
		}
		_str = new char[strlen(str) + 1];
		strcpy(_str, str);
	}

	//移动构造
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

	//移动赋值---原理也是资源的转移
	String& operator=(const String&& s)
	{
		if (this != &s)
		{
			//将两个对象中的资源直接进行交换其实就可以了
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

	//字符串相加:将两个字符串进行拼接
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
	//构造
	String(const char* str = "")
	{
		if (nullptr == str)
		{
			str = "";
		}
		_str = new char[strlen(str) + 1];
		strcpy(_str, str);
	}

	//移动构造
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

	//移动赋值---原理也是资源的转移
	String& operator=(const String&& s)
	{
		if (this != &s)
		{
			//将两个对象中的资源直接进行交换其实就可以了
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

	//字符串相加:将两个字符串进行拼接
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
	// 默认按照小于比较，排出来结果是升序
	std::sort(array, array + sizeof(array) / sizeof(array[0]));
	// 如果需要降序，需要改变元素的比较规则
	std::sort(array, array + sizeof(array) / sizeof(array[0]), greater<int>());   //greater相当于是一个类模板的比较器
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
	Goods gds[] = { { "苹果", 2.1 }, { "相交", 3 }, { "橙子", 2.2 }, {"菠萝", 1.5} };
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
	Goods gds[] = { { "苹果", 2.1 }, { "相交", 3 }, { "橙子", 2.2 }, {"菠萝", 1.5} };
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

	//相当于是定义了一个没有名字的函数
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
	//相当于是定义了一个没有名字的函数
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
	//相当于是定义了一个没有名字的函数
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
	//相当于是定义了一个没有名字的函数
	auto f1 = [a]() mutable {a = 100;  cout << &a << " " << a << endl; };

	f1();

	//[]里面什么都不写的话，相当于是没有进行捕获的
	//这个时候如果你还想去使用a的话，其实就是无法使用的
	//那么这个时候要怎么办呢
	//其实可以直接给[]中防止一个等号
	//而且这个时候我们呢不仅可以去打印a，同时也是可以去打印b的
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
	//相当于是定义了一个没有名字的函数
	auto f1 = [a]() mutable {a = 100;  cout << &a << " " << a << endl; };

	f1();

	//[]里面什么都不写的话，相当于是没有进行捕获的
	//这个时候如果你还想去使用a的话，其实就是无法使用的
	//那么这个时候要怎么办呢
	//其实可以直接给[]中防止一个等号
	//而且这个时候我们呢不仅可以去打印a，同时也是可以去打印b的
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
	//相当于是定义了一个没有名字的函数
	auto f1 = [a]() mutable {a = 100;  cout << &a << " " << a << endl; };

	f1();

	//[]里面什么都不写的话，相当于是没有进行捕获的
	//这个时候如果你还想去使用a的话，其实就是无法使用的
	//那么这个时候要怎么办呢
	//其实可以直接给[]中防止一个等号
	//而且这个时候我们呢不仅可以去打印a，同时也是可以去打印b的
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
	// 此处先不解释原因，等lambda表达式底层实现原理看完后，大家就清楚了
	//f1 = f2; // 编译失败--->提示找不到operator=()
	// 允许使用一个lambda表达式拷贝构造一个新的副本
	auto f3(f2);
	f3();
	// 可以将lambda表达式赋值给相同类型的函数指针
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
	// 函数对象
	double rate = 0.49;
	//定义了一个Rate的变量
	Rate r1(rate);
	r1(10000, 2);

	// lambda表达式将来其实是会转换成一个类的
	auto r2 = [rate](double monty, int year)->double {return monty * rate * year; };
	r2(10000, 2);
	return 0;
}


#include<iostream>
#include<thread>
using namespace std;
void ThreadFunc(int param)
{
	cout << "Thread1:" << param << endl;   //打印一下参数
}
class TF
{
public:

	//看有没有打印，如果有打印的话，那么就说明线程执行了
	//如果没有打印的话，那么就说明线程其实是没有执行的
	void operator()(int param)
	{
		cout << "TF:" << param << endl;
	}
};
int main()
{
	//仅仅只是创建了一个对象
	//并没有给该对象关联具体的线程
	std::thread t1;
	cout << t1.get_id() << endl;

	//使用线程库创建线程的三种方式

	//函数指针
	thread t4(ThreadFunc, 100);
	//这个时候线程其实就已经起来了

	//还可以通过仿函数的方式来给出

	//先创建一个对象然后把200给他传进去
	thread t2(TF(),200);

	//通过lambda表达式
	//逗号后面给出的参数
	thread t3([](int param) {cout << "lambda:" << param << endl; }, 300);

	//那么，线程如何去结束呢
	t4.join();
	t2.join();
	t3.join();


	return 0;
}