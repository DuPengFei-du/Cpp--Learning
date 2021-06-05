#define _CRT_SECURE_NO_WARNINGS 1



//#include<iostream>
//using namespace std;
//int globalVar = 1;
//static int staticGlobalVar = 1;
//void Test()
//{
//	static int staticVar = 1;
//	int localVar = 1;
//	int num1[10] = { 1, 2, 3, 4 };
//	char char2[] = "abcd";
//	char* pChar3 = "abcd";
//	int* ptr1 = (int*)malloc(sizeof(int) * 4);
//	int* ptr2 = (int*)calloc(4, sizeof(int));
//	int* ptr3 = (int*)realloc(ptr2, sizeof(int) * 4);
//	free(ptr1);
//	free(ptr3);
//}
////选项 : A.栈 B.堆 C.数据段 D.代码段
////	globalVar在哪里？___C _ staticGlobalVar在哪里？___C_
////	staticVar在哪里？__ C__ localVar在哪里？__A __
////	num1 在哪里？__A__
////	char2在哪里？__A__ * char2在哪里？A___
////	pChar3在哪里？___A_ * pChar3在哪里？D____
////	ptr1在哪里？___A_ * ptr1在哪里？_B___
////	2. 填空题：
////	sizeof(num1) = __40__;
////sizeof(char2) = ____5; strlen(char2) = ___4_;
////sizeof(pChar3) = ____4; strlen(pChar3) = ___4_;
////sizeof(ptr1) = ____4;


////new和delete针对内置类型
//#include<iostream>
//using namespace std;
//int main()
//{
//	//申请单个元素的空间
//	int* p1 = new int;  //要new出来什么类型的空间，直接将这种类型跟在new的后面就可以了
//	//new出来的空间利用指针来进行接收
//	//new后面跟上的都是类型的名称
//	//使用这种方法的好处就在于不需要进行强制类型转化
//	//也不需要用户去计算需要开辟多大内存空间的空间(malloc的缺陷)
//
//	int* p2 = new int(10);
//	//并且用new申请单个空间的话，还可以为这段空间进行初始化的操作
//	//现在就是申请了一块整形的空间，然后让这个整形的空间的值为10
//	//也就是说使用new可以初始化成任意你希望它初始化成为的值
//	//但是在C语言里面是不行的，C语言里面只能初始化成0(calloc函数的功能)
//	//new可以将空间初始化成为任意的值
//
//	//申请连续的空间
//	int* p3 = new int[10];  //就是开辟了一段10个整形的连续空间
//	//并且在用new来申请连续空间的时候，可以同时对其进行初始化的操作，比如
//	int* p4 = new int[4]{ 1,2,3,4 };   //这是完全可以通过编译的
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Test
//{
//public:
//	//构造函数
//	Test()
//	{
//		cout << "Test()" << this << endl;   //打印当前构造的是哪个对象
//	}
//
//	//析构函数
//	~Test()
//	{
//		cout << "~Test()" << this << endl;   //打印当前构造的是哪个对象
//	}
//private:
//	int _t;
//};
//
//void TestNewDelete()
//{
//	Test* pt1 = new Test;   //new申请出来的空间不需要进行判空，大多数情况下都是可以保证申请空间成功的
//	delete pt1;
//
//	Test* pt2 = new Test[10];   //创建了10个对象，就会调用10此构造函数
//	delete[] pt2;
//
//}
//
//int main()
//{
//	//用new来申请自定义类型的空间
//	TestNewDelete();
//	return 0;
//}


//#include<iostream>
//#include <crtdbg.h>
//using namespace std;
//void TestFunc()
//{
//	int* p1 = (int*)malloc(sizeof(int));
//	delete p1;
//
//	int* p2 = (int*)malloc(sizeof(int));
//	delete[] p2;
//
//	int* p3 = new int;
//	free(p3);
//
//	int* p4 = new int;
//	delete[] p4;
//
//	int* p5 = new int[10];
//	free(p5);
//
//	int* p6 = new int[10];
//	delete p6;
//	//如果把这句delete去掉，就会出现下面的这种报错信息
//}
//
//int main()
//{
//	TestFunc();
//	_CrtDumpMemoryLeaks();   //用于检测内存是否发生泄漏的方法
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Test
//{
//public:
//	Test()
//	{
//		_ptr = new int[10];
//	}
//
//	~Test()
//	{
//		delete[] _ptr;
//		_ptr = nullptr;
//	}
//
//private:
//	int* _ptr;
//};
//
//void TestFunc()
//{
//	//崩溃
//	//代码崩溃的原因在于，使用malloc进行申请空间的时候，malloc是没有调用构造函数的
//	//但是下面的delete是会去调用析构函数的，那么这时候就没有对象明确的指向，调用析构函数的话
//	//是一定会崩溃的
//	//所以类中ptr的this指针是存在的，但是this指针所指向的内容是随机值，所以不能对其进行释放
//	//一释放就会发生崩溃的情况
//	//p1因为没有调用构造函数，所以p1指向的并不是一个对象，而delete会将p1所指向的空间当成对象释放
//	//但是现在根本没有对象，所以代码会崩溃
//	//因为_ptr指针并没有被初始化，所以代码会崩溃
//	Test* p1 = (Test*)malloc(sizeof(Test));
//	delete p1;
//
//	//崩溃
//	//道理和上面的是差不多的，同样的delete[]也是会去调用析构函数的
//	//但是你使用malloc的话，对象其实是没有的，因为malloc不会去调用构造函数的
//	//没有这个对象还非要去释放的话，那么是一定会发生崩溃的
//	Test* p2 = (Test*)malloc(sizeof(Test));
//	delete[] p2;
//
//	//内存泄漏
//	//原因在于用new去申请空间的话，是会去调用构造函数的，那么this指针实际上就是相当于有了
//	//明确的指向了，但是在释放对象的资源的时候，使用了free
//	//free是不会去调用析构函数的，所以对象的资源其实是没有被释放掉的
//	//所以是会造成内存泄漏的
//	//p3是指向对象的空间，并且这个对面里面其实是有资源的
//	//free并没有把对象里面的孔吉纳释放掉，所以说会造成内存泄漏的问题
//	Test* p3 = new Test;
//	//p3的空间是在栈上的，p3所指向的内容他的空间是在堆上的
//	free(p3);
//	_CrtDumpMemoryLeaks();
//	//这个方法可以用来检测内存是否泄露了
//	//但是缺点在于，他不会告诉我们，在代码中的哪个位置内存泄漏了
//
//	//崩溃
//	Test* p4 = new Test;
//	delete[] p4;
//
//	//崩溃
//	Test* p5 = new Test[10];
//	free(p5);
//
//	//崩溃+内存泄漏
//	Test* p6 = new Test[10];
//	delete p6;
//}
////涉及到[]的位置都发生崩溃了
//int main()
//{
//	TestFunc();
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Test
//{
//public:
//	Test()
//	{
//		cout << "Test():" << this << endl;
//	}
//
//	// 	~Test()
//	// 	{
//	// 		cout << "~Test():" << this << endl;
//	// 	}
//
//private:
//	int _data;
//};
//
//int main()
//{
//	Test* pt = new Test;
//	//new会先去申请空间，会去调用operator new的方法
//	//然后去调用构造函数(这也就和前面说的构造函数不负责来开辟空间呼应上了)
//	//只负责把对象初始化好，不负责去开辟空间
//	delete pt;
//
//	Test* pt = new Test[10];
//	delete[] pt;
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Test
//{
//public:
//	Test()
//	{
//		cout << "Test():" << this << endl;
//	}
//
//	// 	~Test()
//	// 	{
//	// 		cout << "~Test():" << this << endl;
//	// 	}
//
//private:
//	int _data;
//};
//
//int main()
//{
//
//	Test* pt = new Test[10];
//	delete[] pt;
//
//	return 0;
//}


//struct ListNode
//{
//	ListNode* _next;
//	ListNode* _prev;
//	int _data;
//	void* operator new(size_t n)
//	{
//		void* p = nullptr;
//		p = allocator<ListNode>().allocate(1);
//		cout << "memory pool allocate" << endl;
//		return p;
//	}
//	void operator delete(void* p)
//	{
//		allocator<ListNode>().deallocate((ListNode*)p, 1);
//		cout << "memory pool deallocate" << endl;
//	}
//};
//class List
//{
//public:
//	List()
//	{
//		_head = new ListNode;
//		_head->_next = _head;
//		_head->_prev = _head;
//	}
//	~List()
//	{
//		ListNode* cur = _head->_next;
//		while (cur != _head)
//		{
//			ListNode* next = cur->_next;
//			delete cur;
//			cur = next;
//		}
//		delete _head;
//		_head = nullptr;
//	}
//private:
//	ListNode* _head;
//};
//int main()
//{
//	List l;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Test
//{
//public:
//	Test(int t = 20)
//		: _t(t)
//	{
//		cout << "Test():" << this << endl;
//	}
//	~Test()
//	{
//		cout << "~Test():" << this << endl;
//	}
//private:
//	int _t;
//};
//int main()
//{
//	//注意:pt指向的空间并不是一个test类型的对象
//	//因为malloc不会是不会调用构造函数的
//	//所以没有创建出来对象
//	//如果想要把pt指向的空间变成Test类型的对象的话
//	//只需要在该空间上执行构造函数完成初始化的操作
//	//那么想要完成这种操作的话，就需要使用定位new了
//	Test* pt = (Test*)malloc(sizeof(Test));
//
//	new(pt) Test;
//	//这样操作完成之后才算一个真正的对象
//
//	//当然，如果构造函数有参数的话，你也可以把构造函数的参数带上
//	//就像下面这个样子
//	//new(pt) Test（100);
//
//	//既然已经是一个对象了，用完之后记得释放掉
//	delete pt;
//
//	return 0;
//}


////以前有同学被面试官问道过，如何实现一个通用的加法函数
////有的人给出了下面的答案
////他是想利用函数重载来实现一个通用的加法函数
////下面的代码看上去是可以实现通用的功能的
////但是仔细考虑的话，还是存在有很多问题的

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//double Add(double x, double y)
//{
//	return x + y;
//}
//
//short Add(short x, short y)
//{
//	return x + y;
//}
//
//float Add(float x, float y)
//{
//	return x + y;
//}
//
//int main()
//{
//	Add(1, 2);
//
//	Add(1.0, 2.0);
//
//	return 0;
//}


////函数模板
////用户给一个葫芦，编译器画瓢
//#include<iostream>
//using namespace std;
//int Add(int x, int y)
//{
//	return x + y;
//}
//T Add(T x, T y)
//{
//	return x + y;
//}
////这个时候T到底代表的是什么类型，我们其实是不知道的
////而且，这个时候如果直接去编译的话，代码是一定会报错的
////因为，现在T到底是个什么东西，编译器他其实是并不知道的
////所以肯定是会报错的
////所以我们现在要告诉编译器，到底是一个什么东西
//int main()
//{
//	return 0;
//}


////函数模板
////用户给一个葫芦，编译器画瓢
//#include<stdio.h>
//template<typename T>    //模板参数列表
//T Add(T x, T y)         //参数列表
//{
//	return x + y;
//}
////所以我们现在要告诉编译器，到底是一个什么东西
//int main()
//{
//	Add(1.0, 2.0);
//	Add(1, 2);
//	return 0;
//}


////函数模板
////用户给一个葫芦，编译器画瓢
//#include<iostream>
//using namespace std;
//template<typename T>
//T Add(T x, T y)
//{
//	return x + y;
//}
//
//template<typename T, U>
//T Add(T x, U y)
//{
//	return x + y;
//}
//int main()
//{
//	Add(1.0, 2.0);
//	Add(1, 2);
//	//上面给出的情况，两个参数的类型都是一摸一样的，那么现在
//	//加入说我给出两个参数的类型是不一样的情况，那么，还可以处理吗
//	Add(1, 2.0);
//	//这个时候，我们去进行编译，就会发现编译出错了
//	//出错的原因就在于，我们所给出的两个参数的类型是不一样的
//	//那么，我们现在就需要一个新的模板了
//	//给出上面U那个模板还是会报错的
//	//错误的原因在于，如果模板里面有多个参数，每个参数的前面
//	//都是要加上typename的
//	return 0;
//}


////函数模板
////用户给一个葫芦，编译器画瓢
//#include<iostream>
//using namespace std;
//template<typename T>
//T Add(T x, T y)
//{
//	return x + y;
//}
//
//template<typename T, typename U>
//T Add(T x, U y)
//{
//	return x + y;
//}
//int main()
//{
//	Add(1.0, 2.0);
//	Add(1, 2);
//	//上面给出的情况，两个参数的类型都是一摸一样的，那么现在
//	//加入说我给出两个参数的类型是不一样的情况，那么，还可以处理吗
//	Add(1, 2.0);
//	//这个时候，我们去进行编译，就会发现编译出错了
//	//出错的原因就在于，我们所给出的两个参数的类型是不一样的
//	//那么，我们现在就需要一个新的模板了
//	//给出上面U那个模板还是会报错的
//	//错误的原因在于，如果模板里面有多个参数，每个参数的前面
//	//都是要加上typename的
//	return 0;
//}


//#include<iostream>
//using namespace std;
//template <typename T>
//T Add(T x, T y)
//{
//	return x + y;
//}
//int main()
//{
//	cout << Add(1, 2) << endl;
//	cout << Add(1.0, 2.0) << endl;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//template <typename T>
//T Add(T x, T y)
//{
//	return x + y;
//}
///*
//在编译器中，我们通过调试代码，发现Add(1,2)和Add(1.0,2.0)都调用了
//我们所给出的函数模板
//但是其实呢，这种说法是错误的，是不可以调用函数模板的
//因为函数模板不是真正的函数
//只是编译器生成代码的工具
//看起来是执行了函数代码
//其实并不是这样的(你看到的东西，其实并不一定是真实存在的)
//那如果想要搞清楚的话，就要知道这件事情背后，到底做了什么事情
//*/
//int main()
//{
//	cout << Add(1, 2) << endl;
//	cout << Add(1.0, 2.0) << endl;
//	return 0;
//}


//template<class T>
//T Add(const T& left, const T& right)
//{
//	return left + right;
//}
//int main()
//{
//	int a1 = 10, a2 = 20;
//	double d1 = 10.0, d2 = 20.0;
//	Add(a1, a2);
//	Add(d1, d2);
//	/*
//	该语句不能通过编译，因为在编译期间，当编译器看到该实例化时，需要推演其实参类型
//	通过实参a1将T推演为int，通过实参d1将T推演为double类型，但模板参数列表中只有一个T，
//	编译器无法确定此处到底该将T确定为int 或者 double类型而报错
//	注意：在模板中，编译器一般不会进行类型转换操作，因为一旦转化出问题，编译器就需要背黑锅
//	Add(a1, d1);
//	*/
//	// 此时有两种处理方式：1. 用户自己来强制转化 2. 使用显式实例化
//	Add(a1, (int)d1);
//	return 0;
//}


//int main(void)
//{
//	int a = 10;
//	double b = 20.0;
//	// 显式实例化
//	Add<int>(a, b);
//	return 0;
//}


//#include<iostream>
//using namespace std;
//template<typename T>
////注意，在模板中，一般情况下传递的参数都是引用
////如果不想通过形参是修改实参的化，那么
////传递const引用就可以了
////为什么要使用引用传递的，因为T有可能是自定义类型，如果自定义类型
////还使用值传递的话，就效率没有那么高了
////所以一般情况下就使用const的引用来进行参数的传递
//T Add(const T& left, const T& right)
//{
//	return left + right;
//}
//int Add(const int& left, const int& right)
//{
//	return left + right;
//}
//int main()
//{
//	Add(1, 2); //通过代码的调试，发现这一句进入了int的那一段代码
//	// 与非模板函数匹配，编译器不需要特化
//	//会优先去调用普通类型的函数，如果普通类型的函数
//	//参数不匹配的话，才回去调用模板参数
//	//如果想要使用模板的话，那么我们只需要对代码进行显示实例化就可以了
//	Add<int>(1, 2);    // 调用编译器特化的Add版本
//	//如果进行了显示实例化，编译器就会根据模板来生成一份int类型的Add函数
//	//模板生成的int函数是不会和普通的函数所引起冲突的，因为他们两个的函数名称其实是并不一样的
//	//同时，二者也并不属于函数重载，因为两个函数的名称其实是并不相同的
//	return 0;
//}


//// 专门处理int的加法函数
//int Add(int left, int right)
//{
//	return left + right;
//}
//// 通用加法函数
//template<class T1, class T2>
//T1 Add(T1 left, T2 right)
//{
//	return left + right;
//}
//void Test()
//{
//	Add(1, 2); // 与非函数模板类型完全匹配，不需要函数模板实例化
//	Add(1, 2.0); // 模板函数可以生成更加匹配的版本，编译器根据实参生成更加匹配的Add函数
//}


//template<typename T>
//T Add(const T& x, const T& y)
//{
//	return x + y;
//}
//
//int Add(const int& x, const int& y)
//{
//	return x + y;
//}
//
//int main()
//{
//	Add(1, 2);  //优先调用普通的Add函数，因为普通的Add函数是完全满足条件的
//
//	Add(1, 2.0);
//	//这种情况下，会首先去寻找Add(int,double)这样的普通函数
//	//找到了的话，就去调用这样子的函数，如果没有找到的话
//	//就去找是否含有两个参数类型不同的函数模板，如果有的话，就生成一个类型更加相匹配的函数
//	//如果么有找到的话，就去看是否可以通过隐式类型转换之后相匹配的函数，如果有，则调用
//	//如果没有的话，就报错
//	//double类型其实是可以隐式类型转换成int类型的
//	return 0;
//}


//template<typename T>
//T Add(const T& x, const T& y)
//{
//	return x + y;
//}
//
//template<typename T, typename U>
//U Add(const T& x, const U& y)
//{
//	return x + y;
//}
//
//
//int Add(const int& x, const int& y)
//{
//	return x + y;
//}
//
//int main()
//{
//	Add(1, 2);  //优先调用普通的Add函数，因为普通的Add函数是完全满足条件的
//
//	Add(1, 2.0);
//
//	return 0;
//}


////为了让顺序表中可以存储任意类型的元素
//template<class T>
////上面的这句话，就说明了T是代表了一种类型的
//class SeqList
//{
//public:
//	SeqList(int capacity = 10)
//	{
//		capacity = capacity < 10 ? 10 : capacity;
//		array = new T[capacity];
//		_capacity = capacity;
//		_size = 0;
//	}
//
//	void PushBack(const T& data);   //可以把他放在类外进行定义
//
//	~SeqList()
//	{
//		if (array)
//		{
//			delete[] array;
//			array = NULL;
//			_capacity = 0;
//			_size = 0;
//		}
//	}
//private:
//	//int* array;
//	//在这个时候，我们把int换成T之后，就可以存储任意类型的数据了
//	T* array;
//	size_t _size;
//	size_t _capacity;
//};
//
//
////如果再类外进行定义的话，其实现在T是没有被识别的
////如果想要T被识别的话，需要再给出一边模板
////当热，还要再函数名称的前面给出类的名字
//template<class T>
//
//void SeqList<T>::PushBack(const T& data)
//{
//	//要进行元素插入的时候首先需要检测一下是否需要扩容
//	_CheckCapacity();
//
//	array[_size] = data;
//
//	size++;
//}
//int main()
//{
//	return 0;
//}


