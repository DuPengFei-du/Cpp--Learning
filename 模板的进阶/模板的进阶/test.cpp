//#include<iostream>
//using namespace std;
//
//
////假设我现在要去封装一个静态类型的数组
//
//namespace bite
//{
//	template<class T,size_t N>
//	class array
//	{
//	private:
//		T _array[N];    //那么我们要如何取确定数组的大小的呢
//		//因为毕竟，不同的人给出的数组的大小是不一样的
//		//我们可以在模板参数列表里面给出一个size_t 的N
//		//如果这样的话，那么我们在定义数组的大小的时候就可以直接就将N传进去了
//		//那么size_t 的N其实就是我们看到非模板类型的参数
//	};  
//}
//int main()
//{
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//
////假设我现在要去封装一个静态类型的数组
//
//namespace bite
//{
//	template<class T, double N>
//	class array
//	{
//	private:
//		T _array[N];    //那么我们要如何取确定数组的大小的呢
//		//因为毕竟，不同的人给出的数组的大小是不一样的
//		//我们可以在模板参数列表里面给出一个size_t 的N
//		//如果这样的话，那么我们在定义数组的大小的时候就可以直接就将N传进去了
//		//那么size_t 的N其实就是我们看到非模板类型的参数
//	};
//}
//int main()
//{
//	bite::array<int, 10.0> arr;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//template<class T>
//
////我们现在去检测两个对象是否是相等的
//bool IsEquals(const T& left, const T& right)
//{
//	return left == right;
//}
//
//int main()
//{
//	cout << IsEquals(10, 10) << endl;
//	cout << IsEquals(10, 20) << endl;
//
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//
//template<class T>
//
////我们现在去检测两个对象是否是相等的
////但是这个例子没有很好的展示出来我想要表达的东西
//bool IsEquals(const T& left, const T& right)
//{
//	return left == right;
//}
//
//int main()
//{
//	cout << IsEquals(10, 10) << endl;
//	cout << IsEquals(10, 20) << endl;
//
//	string s1("hello");
//	string s2("hello");
//
//	cout << IsEquals(s1, s2) << endl;
//
//	const char* p1 = "hello";
//	const char* p2 = "word";
//
//	cout << IsEquals(p1, p2) << endl;
//
//
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//
//template<class T>
////假设我们现在要找出两个字符串里面较大的哪一个
//
////Max是一个模板类型的函数，任意类型都是可以进行处理的，但是对于某些特殊的类型
////他处理的结果可能就是一个错误的结果
//
////比如我们现在的max要去比较char*类型的字符串，可能就会出现错误了
//T& Max(T& left, T& right)
//{
//	return left > right ? left : right;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	cout << Max(a, b) << endl;
//
//	//string类不会出现错误的原因在于
//	//string类内部已经对这些比较大小的方法进行了重载了
//	string s1("world");
//	string s2("hello");
//
//	cout << Max(s1, s2) << endl;
//
//
//	/*const char* p1 = "world";
//	const char* p2 = "hello";*/
//
//	//那么现在，我修改一下p1和p2的定义次序，我们再来看看结果
//
//	//如果是指针的话，那么就相当于是对两个指针的地址再进行比较了
//	//并没有按照我们字符串的规则去进行比较的操作
//	//是拿地址的值在进行比较的，那么就和我们想象的结果可能会有出入了
//	const char* p1 = "world";
//	const char* p2 = "hello";
//	cout << Max(p1, p2) << endl;
//
//	//我们发现，在调整了这次的顺序之后，我们的代码的结果发上了代码
//	//虽然我们都知道，hello和world相比起来，肯定是world会更大一些，但是这次代码运行的
//	//结果所显示出来的现象却是hello更大一些
//	//那么结果其实就是不对的了
//
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//
//template<class T>
////假设我们现在要找出两个字符串里面较大的哪一个
//
////Max是一个模板类型的函数，任意类型都是可以进行处理的，但是对于某些特殊的类型
////他处理的结果可能就是一个错误的结果
//
////比如我们现在的max要去比较char*类型的字符串，可能就会出现错误了
//T& Max(T& left, T& right)
//{
//	return left > right ? left : right;
//}
//
////针对Max的函数模板按照char*的方式来进行特化
//template<>
//
//const char*& Max(const char*& left, const char*& right)
//{
//	if (strcmp(left,right)>0)
//		return left;
//	return right;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	cout << Max(a, b) << endl;
//
//	//string类不会出现错误的原因在于
//	//string类内部已经对这些比较大小的方法进行了重载了
//	string s1("world");
//	string s2("hello");
//
//	cout << Max(s1, s2) << endl;
//
//
//	/*const char* p1 = "world";
//	const char* p2 = "hello";*/
//
//	//那么现在，我修改一下p1和p2的定义次序，我们再来看看结果
//
//	//如果是指针的话，那么就相当于是对两个指针的地址再进行比较了
//	//并没有按照我们字符串的规则去进行比较的操作
//	//是拿地址的值在进行比较的，那么就和我们想象的结果可能会有出入了
//	const char* p1 = "world";
//	const char* p2 = "hello";
//	cout << Max(p1, p2) << endl;
//
//	//我们发现，在调整了这次的顺序之后，我们的代码的结果发上了代码
//	//虽然我们都知道，hello和world相比起来，肯定是world会更大一些，但是这次代码运行的
//	//结果所显示出来的现象却是hello更大一些
//	//那么结果其实就是不对的了
//
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//template<class T1, class T2>
//class Data
//{
//public:
//	Data() 
//	{ 
//		cout << "Data<T1, T2>" << endl; 
//	}
//private:
//	T1 _d1;
//	T2 _d2;
//};
//
//
////全特化---就是将需要特化的模板参数列表中所有的类型都具体化
////现在我需要来指定话，也就是说，我的尖括号里面什么都不用放置了
////现在只需要将我们需要指定的类型直接放在我们的类名之后其实就是可以的了
//
////全特化的作用在于：如果再该类模板被实例化为Date<int,char>类型，则调用特化的版本
////否则的话就调用没有特化的模板
//template<>
//class Data<int, char>
//{
//public:
//	Data() 
//	{ 
//		cout << "Data<int, char>" << endl; 
//	}
//private:
//	int _d1;
//	char _d2;
//};
//void TestVector()
//{
//	Data<int, int> d1;    //和我们所特化的类型不一样，那么最终其实就会走到我们特化的模板的部分
//	Data<int, char> d2;   //和我们特化的版本一直，就会走到我们所特化的版本
//}
//
//int main()
//{
//	TestVector();
//}


//#include<iostream>
//#include<string>
//using namespace std;
//template<class T1, class T2>
//class Data
//{
//public:
//	Data() 
//	{ 
//		cout << "Data<T1, T2>" << endl; 
//	}
//private:
//	T1 _d1;
//	T2 _d2;
//};
//// 将第二个参数特化为int
//template <class T1>
//class Data<T1, int>
//{
//public:
//	Data() 
//	{ 
//		cout << "Data<T1, int>" << endl; 
//	}
//private:
//	T1 _d1;
//	int _d2;
//};
//int main()
//{
//	return 0;
//}


//两个参数偏特化为指针类型
//#include<iostream>
//#include<string>
//using namespace std;

//template<class T1, class T2>
//class Data
//{
//public:
//	Data() 
//	{ 
//		cout << "Data<T1, T2>" << endl; 
//	}
//private:
//	T1 _d1;
//	T2 _d2;
//};
//
//template <typename T1, typename T2>
//class Data <T1*, T2*>
//{
//public:
//	Data() 
//	{ 
//		cout << "Data<T1*, T2*>" << endl; 
//	}
//private:
//	T1 _d1;
//	T2 _d2;
//};
//
////两个参数偏特化为引用类型
//template <typename T1, typename T2>
//class Data <T1&, T2&>
//{
//public:
//	Data(const T1& d1, const T2& d2)
//		: _d1(d1)
//		, _d2(d2)
//	{
//	cout << "Data<T1&, T2&>" << endl;
//	}
//private:
//	const T1& _d1;
//	const T2& _d2;
//};
//void test2()
//{
//	Data<double, int> d1; // 调用特化的int版本
//	Data<int, double> d2; // 调用基础的模板
//	Data<int*, int*> d3; // 调用特化的指针版本
//	Data<int&, int&> d4(1, 2); // 调用特化的指针版本
//}
//int main()
//{
//	test2();
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
////类型萃取
////给出一个结构体
////这个类让他对应内置类型
//struct TrueType
//{
//	static bool Get()
//	{
//		return true;
//	}
//};
////给出一个结构体
////这个类让他对应自定义类型
//struct FalseType
//{
//	static bool Get()
//	{
//		return false;
//	}
//};
//
////下面的这个也是一个类模板
////这个类模板可以让他对应任意的类型
////那么既然他都可以是任意类型了，那么他其实也可以是自定义类型和内置类型
////那就让他去处理所有的自定义类型
//template<class T>
//struct TypeTrait   //这是一个类模板，只是这个类模板里面什么都没做
//	//只是去了一个别名
//{
//	typename FalseType IsPODType;
//};
//
////那么内置类型应该如何处理呢？
//template<>
//struct TypeTrait<int>
//{
//	typename TrurType IsPODType;
//
//};
//
//
//template<class T>   //那么，当我把T给出来之后，我到底怎么才能知道T到底时什么类型的
////我是不知道T到底是自定义类型还是内置类型的
//void Copy(T* dest, const T* source, size_t size)
//{
//	if ()
//	{
//		//memcpy的拷贝方式时浅拷贝的拷贝方式，针对于内置类型时一定不会出现问题的
//		//但是针对于自定义类型的话，如果还是使用memcpy的话，那么其实就是会出现错误了
//		memcpy(dest, source, sizeof(T) * size);
//	}
//	else
//	{
//		//那么，我们其实还存在有另一种拷贝的方式
//		for (int i = 0; i < size; i++)
//		{
//			dest[i] = source[i];
//		}
//	}
//	
//}
//int main()
//{
//	return 0;
//}


#include<iostream>
using namespace std;
int main()
{
	//为什么C语言中已经有了一套自己的输入输出的方式
	//C++中还要给出自己的输入输出流呢？
	//原因就在于C语言里面的输入输出在有些情况下我们使用起来其实并不是那么的方便

	int a = 0;
	//C语言的输入，首先在我需要输入的时候，我需要知道我输入的这个数据他到底是什么类型的数据
	//要给出格式控制，不用类型的数，格式控制都是不一样的
	scanf("%d", &a);
	printf("%d", a);

	//正是因为C语言中的输入输出有很多的缺陷
	//所以C++才又给出了一套自己的I/0流
	//所以重新搞出了自己的一套输入输出的方式
	//提供给用户使用

	return 0;
}