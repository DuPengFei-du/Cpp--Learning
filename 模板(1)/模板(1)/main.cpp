#define _CRT_SECURE_NO_WARNINGS 1


//以前有同学被面试官问道过，如何实现一个通用的假发函数
//有的人给出了下面的答案
//他是想利用函数重载来实现一个通用的加法函数

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
	Add(1,2);

	Add(1.0, 2.0);

	return 0;
}


//函数模板
//用户给一个葫芦，编译器画瓢
#include<stdio.h>
int Add(int x, int y)
{
	return x + y;
}
T Add(T x, T y)
{
	return x + y;
}
//这个时候T到底代表的是什么类型，我们其实是不知道的
//而且，这个时候如果直接去编译的话，代码是一定会报错的
//因为，现在T到底是个什么东西，编译器他其实是并不知道的
//所以肯定是会报错的
//所以我们现在要告诉编译器，到底是一个什么东西
int main()
{
	return 0;
}


//函数模板
//用户给一个葫芦，编译器画瓢
#include<stdio.h>
template<typename T>
T Add(T x, T y)
{
	return x + y;
}
//所以我们现在要告诉编译器，到底是一个什么东西
int main()
{
	Add(1.0, 2.0);
	Add(1, 2);
	return 0;
}


//函数模板
//用户给一个葫芦，编译器画瓢
#include<stdio.h>
template<typename T>
T Add(T x, T y)
{
	return x + y;
}

template<typename T,U>
T Add(T x, U y)
{
	return x + y;
}
int main()
{
	Add(1.0, 2.0);
	Add(1, 2);
	//上面给出的情况，两个参数的类型都是一摸一样的，那么现在
	//加入说我给出两个参数的类型是不一样的情况，那么，还可以处理吗
	Add(1, 2.0);
	//这个时候，我们去进行编译，就会发现编译出错了
	//出错的原因就在于，我们所给出的两个参数的类型是不一样的
	//那么，我们现在就需要一个新的模板了
	//给出上面U那个模板还是会报错的
	//错误的原因在于，如果模板里面有多个参数，每个参数的前面
	//都是要加上typename的
	return 0;
}


//函数模板
//用户给一个葫芦，编译器画瓢
#include<stdio.h>
template<typename T>
T Add(T x, T y)
{
	return x + y;
}

template<typename T, typename U>
T Add(T x, U y)
{
	return x + y;
}
int main()
{
	Add(1.0, 2.0);
	Add(1, 2);
	//上面给出的情况，两个参数的类型都是一摸一样的，那么现在
	//加入说我给出两个参数的类型是不一样的情况，那么，还可以处理吗
	Add(1, 2.0);
	//这个时候，我们去进行编译，就会发现编译出错了
	//出错的原因就在于，我们所给出的两个参数的类型是不一样的
	//那么，我们现在就需要一个新的模板了
	//给出上面U那个模板还是会报错的
	//错误的原因在于，如果模板里面有多个参数，每个参数的前面
	//都是要加上typename的
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
template <typename T>
T Add(T x, T y)
{
	return x + y;
}
/*
在编译器中，我们通过调试代码，发现Add(1,2)和Add(1.0,2.0)都调用了
我们所给出的函数模板
但是其实呢，这种说法是错误的，是不可以调用函数模板的
因为函数模板不是真正的函数
只是编译器生成代码的工具
看起来是执行了函数代码
其实并不是这样的(你看到的东西，其实并不一定是真实存在的)
那如果想要搞清楚的话，就要知道这件事情背后，到底做了什么事情
*/
int main()
{
	cout << Add(1, 2) << endl;
	cout << Add(1.0, 2.0) << endl;
	return 0;
}


template<class T>
T Add(const T& left, const T& right)
{
	return left + right;
}
int main()
{
	int a1 = 10, a2 = 20;
	double d1 = 10.0, d2 = 20.0;
	Add(a1, a2);
	Add(d1, d2);
	/*
	该语句不能通过编译，因为在编译期间，当编译器看到该实例化时，需要推演其实参类型
	通过实参a1将T推演为int，通过实参d1将T推演为double类型，但模板参数列表中只有一个T，
	编译器无法确定此处到底该将T确定为int 或者 double类型而报错
	注意：在模板中，编译器一般不会进行类型转换操作，因为一旦转化出问题，编译器就需要背黑锅
	Add(a1, d1);
	*/
	// 此时有两种处理方式：1. 用户自己来强制转化 2. 使用显式实例化
	Add(a1, (int)d1);
	return 0;
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


template<class T1, class T2, ..., class Tn>
class 类模板名
{
	// 类内成员定义
};


// 动态顺序表
// 注意：Vector不是具体的类，是编译器根据被实例化的类型生成具体类的模具
template<class T>
class Vector
{
public:
	Vector(size_t capacity = 10)
		: _pData(new T[capacity])
		, _size(0)
		, _capacity(capacity)
	{}
	// 使用析构函数演示：在类中声明，在类外定义。
	~Vector();
	void PushBack(const T& data)；
		void PopBack()；
		// ...
		size_t Size() { return _size; }
	T& operator[](size_t pos)
	{
		assert(pos < _size);
		return _pData[pos];
	}
private:
	T* _pData;
	size_t _size;
	size_t _capacity;
};
// 注意：类模板中函数放在类外进行定义时，需要加模板参数列表
template <class T>
Vector<T>::~Vector()
{
	if (_pData)
		delete[] _pData;
	_size = _capacity = 0;
}


template<typename T>
T Add(const T &x,const T &y)
{
	return x + y;
}

int Add(const int& x, const int& y)
{
	return x + y;
}

int main()
{
	Add(1, 2);  //优先调用普通的Add函数，因为普通的Add函数是完全满足条件的

	Add(1, 2.0);   
	//这种情况下，会首先去寻找Add(int,double)这样的普通函数
	//找到了的话，就去调用这样子的函数，如果没有找到的话
	//就去找是否含有两个参数类型不同的函数模板，如果有的话，就生成一个类型更加相匹配的函数
	//如果么有找到的话，就去看是否可以通过隐式类型转换之后相匹配的函数，如果有，则调用
	//如果没有的话，就报错

	return 0;
}


template<typename T>
T Add(const T& x, const T& y)
{
	return x + y;
}

template<typename T,typename U>
U Add(const T& x, const U& y)
{
	return x + y;
}


int Add(const int& x, const int& y)
{
	return x + y;
}

int main()
{
	Add(1, 2);  //优先调用普通的Add函数，因为普通的Add函数是完全满足条件的

	Add(1, 2.0);

	return 0;
}


//为了让顺序表中可以存储任意类型的元素
template<class T>
//上面的这句话，就说明了T是代表了一种类型的
class SeqList
{
public:
	SeqList(int capacity = 10)
	{
		capacity = capacity < 10 ? 10 : capacity;
		array = new T[capacity];
		_capacity = capacity;
		_size = 0;
	}

	void PushBack(const T& data);   //可以把他放在类外进行定义
	
	~SeqList()
	{
		if (array)
		{
			delete[] array;
			array = NULL;
			_capacity = 0;
			_size = 0;
		}
	}
private:
	//int* array;
	//在这个时候，我们把int换成T之后，就可以存储任意类型的数据了
	T* array;
	size_t _size;
	size_t _capacity;
};


//如果再类外进行定义的话，其实现在T是没有被识别的
//如果想要T被识别的话，需要再给出一边模板
//当热，还要再函数名称的前面给出类的名字
template<class T>

void SeqList<T>::PushBack(const T& data)
{
	//要进行元素插入的时候首先需要检测一下是否需要扩容
	_CheckCapacity();

	array[_size] = data;

	size++;
}
int main()
{
	return 0;
}