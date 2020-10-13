////new和delete针对内置类型
//#include<iostream>
//using namespace std;
//int main()
//{
//	//申请单个元素的空间
//	int* p1 = new int;  //要new出来什么类型的空间，直接将这种类型跟在new的后面就可以了
//	//new后面跟上的都是类型的名称
//	//使用这种方法的好处就在于不需要进行强制类型转化
//	//也不需要用户去计算需要开辟多大内存空间的空间
//
//	int* p2 = new int(10);
//	//并且用new申请单个空间的话，还可以为这段空间进行初始化的操作
//	//现在就是申请了一块整形的空间，然后让这个整形的空间的值为10
//	//也就是说使用new可以初始化成任意你希望它初始化成为的值
//	//但是在C语言里面是不行的，C语言里面只能初始化成0
//
//	//申请连续的空间
//	int* p3 = new int[10];  //就是开辟了一段10个整形的连续空间
//	//并且在用new来申请连续空间的时候，可以同时对其进行初始化的操作，比如
//	int* p4 = new int[4]{ 1,2,3,4 };   //这是完全可以通过编译的
//	return 0;
//}


////new和delete针对内置类型
//#include<iostream>
//using namespace std;
//int main()
//{
//	//申请单个元素的空间
//	int* p1 = new int;  //要new出来什么类型的空间，直接将这种类型跟在new的后面就可以了
//	//new后面跟上的都是类型的名称
//	//使用这种方法的好处就在于不需要进行强制类型转化
//	//也不需要用户去计算需要开辟多大内存空间的空间
//
//	int* p2 = new int(10);
//	//并且用new申请单个空间的话，还可以为这段空间进行初始化的操作
//	//现在就是申请了一块整形的空间，然后让这个整形的空间的值为10
//	//也就是说使用new可以初始化成任意你希望它初始化成为的值
//	//但是在C语言里面是不行的，C语言里面只能初始化成0
//
//	//申请连续的空间
//	int* p3 = new int[10];  //就是开辟了一段10个整形的连续空间
//	//并且在用new来申请连续空间的时候，可以同时对其进行初始化的操作，比如
//	int* p4 = new int[4]{ 1,2,3,4 };   //这是完全可以通过编译的
//
//	//空间的释放
//	delete p1;
//	delete p2;
//
//	//如果delete释放的是一段连续的空间的话，需要用delte[]来进行释放
//
//	delete[] p3;
//	delete[] p4;
//
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
//	Test* pt2 = new Test[10];
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
//void TestFunc()
//{
//	//崩溃
//	//代码崩溃的原因在于，使用malloc进行申请空间的时候，malloc是没有调用构造函数的
//	//但是下面的delete是会去调用析构函数的，那么这时候就没有对象明确的指向，调用析构函数的话
//	//是一定会崩溃的
//	//所以类中ptr的this指针是存在的，但是this指针所指向的内容是随机值，所以不能对其进行释放
//	//一释放就会发生崩溃的情况
// 	Test* p1 = (Test*)malloc(sizeof(Test));
// 	delete p1;
//
//	//崩溃
//	//道理和上面的是差不多的，同样的delete[]也是会去调用析构函数的
//	//但是你使用malloc的话，对象其实是没有的，因为malloc不会去调用构造函数的
//	//没有这个对象还非要去释放的话，那么是一定会发生崩溃的
// 	Test* p2 = (Test*)malloc(sizeof(Test));
// 	delete[] p2;
//
//	//内存泄漏
//	//原因在于用new去申请空间的话，是会去调用构造函数的，那么this指针实际上就是相当于有了
//	//明确的指向了，但是在释放对象的资源的时候，使用了free
//	//free是不会去调用析构函数的，所以对象的资源其实是没有被释放掉的
//	//所以是会造成内存泄漏的
// 	Test* p3 = new Test;
//	//p3的空间是在栈上的，p3所指向的内容他的空间是在堆上的
// 	free(p3);
// 	_CrtDumpMemoryLeaks();   
//	//这个方法可以用来检测内存是否泄露了
//	//但是缺点在于，他不会告诉我们，在代码中的哪个位置内存泄漏了
//
//	//崩溃
// 	Test* p4 = new Test;
// 	delete[] p4;
//
//	//内存泄漏+崩溃
// 	Test* p5 = new Test[10];
// 	free(p5);
//
//	//崩溃+内存泄漏
// 	Test* p6 = new Test[10];
// 	delete p6;
//}
////涉及到[]的位置都发生崩溃了
//int main()
//{
//	TestFunc();
//	return 0;
//}


//// 如果没有匹配使用，代码会出现什么问题？
//// 结论：对于内置类型，是否匹配使用没有什么影响
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
//}
//
//int main()
//{
//	TestFunc();
//	_CrtDumpMemoryLeaks();
//	return 0;
//}


//#include<iostream>
//#include <crtdbg.h>
//using namespace std;
//class Test
//{
//public:
//	Test()
//	{
//		cout << "Test()" << endl;
//	}
//
//	~Test()
//	{
//		cout << "~Test():" << this << endl;
//	}
//
//private:
//	int _data;
//};
//
//void TestFunc()
//{
//	//代码没有任何的问题，原因在于类中只有一个数据成员，而没有设计到资源的管理
//	//如果类中设计到了资源的管理的话，new和delete必须要匹配使用才可以
//	Test* p1 = (Test*)malloc(sizeof(Test));
//	delete p1;
//
//	 //崩溃
//	 Test* p2 = (Test*)malloc(sizeof(Test));
//	 delete[] p2;
//
//	//没有发生内存泄漏
//	 //因为类中没有涉及到资源的管理
//	 //就好比说是日期类，其实日期类是否调用析构函数都是没有什么影响的
//	Test* p3 = new Test;
//	free(p3);
//	_CrtDumpMemoryLeaks();
//
//	//崩溃
//	Test* p4 = new Test;
//	delete[] p4;
//
//	//崩溃
//	Test* p5 = new Test[10];
//	free(p5);
//
//	//崩溃
//	Test* p6 = new Test[10];
//	delete p6;
//}


//#include<iostream>
//#include <crtdbg.h>
//using namespace std;
//class Test
//{
//public:
//	Test()
//	{
//		cout << "Test():" << this << endl;
//	}
//
//	//把析构函数屏蔽掉
//	// 	~Test()
//	// 	{
//	// 		cout << "~Test():" << this << endl;
//	// 	}
//
//private:
//	int _data;   //没有涉及到资源的管理
//};
//
//void TestFunc()
//{
//	//没有崩溃
//	Test* p1 = (Test*)malloc(sizeof(Test));
//	delete p1;
//
//	//没有崩溃
//	 Test* p2 = (Test*)malloc(sizeof(Test));
//	 delete[] p2;
//
//	 //没有崩溃
//	Test* p3 = new Test;
//	free(p3);
//	_CrtDumpMemoryLeaks();
//
//	//没有崩溃
//	Test* p4 = new Test;
//	delete[] p4;
//
//	//没有崩溃
//	Test* p5 = new Test[10];
//	free(p5);
//
//	//没有崩溃
//	Test* p6 = new Test[10];
//	delete p6;
//}
//
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


#include<iostream>
using namespace std;
class Test
{
public:
	Test()
	{
		cout << "Test():" << this << endl;
	}

	// 	~Test()
	// 	{
	// 		cout << "~Test():" << this << endl;
	// 	}

private:
	int _data;
};

int main()
{

	Test* pt = new Test[10];
	delete[] pt;

	return 0;
}