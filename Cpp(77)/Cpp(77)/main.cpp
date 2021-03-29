#define _CRT_SECURE_NO_WARNINGS 1



#include<iostream>
using namespace std;
int globalVar = 1;
static int staticGlobalVar = 1;
void Test()
{
	static int staticVar = 1;
	int localVar = 1;
	int num1[10] = { 1, 2, 3, 4 };
	char char2[] = "abcd";
	char* pChar3 = "abcd";
	int* ptr1 = (int*)malloc(sizeof(int) * 4);
	int* ptr2 = (int*)calloc(4, sizeof(int));
	int* ptr3 = (int*)realloc(ptr2, sizeof(int) * 4);
	free(ptr1);
	free(ptr3);
}
//选项 : A.栈 B.堆 C.数据段 D.代码段
//	globalVar在哪里？___C _ staticGlobalVar在哪里？___C_
//	staticVar在哪里？__ C__ localVar在哪里？__A __
//	num1 在哪里？__A__
//	char2在哪里？__A__ * char2在哪里？A___
//	pChar3在哪里？___A_ * pChar3在哪里？D____
//	ptr1在哪里？___A_ * ptr1在哪里？_B___
//	2. 填空题：
//	sizeof(num1) = __40__;
//sizeof(char2) = ____5; strlen(char2) = ___4_;
//sizeof(pChar3) = ____4; strlen(pChar3) = ___4_;
//sizeof(ptr1) = ____4;


//new和delete针对内置类型
#include<iostream>
using namespace std;
int main()
{
	//申请单个元素的空间
	int* p1 = new int;  //要new出来什么类型的空间，直接将这种类型跟在new的后面就可以了
	//new出来的空间利用指针来进行接收
	//new后面跟上的都是类型的名称
	//使用这种方法的好处就在于不需要进行强制类型转化
	//也不需要用户去计算需要开辟多大内存空间的空间(malloc的缺陷)

	int* p2 = new int(10);
	//并且用new申请单个空间的话，还可以为这段空间进行初始化的操作
	//现在就是申请了一块整形的空间，然后让这个整形的空间的值为10
	//也就是说使用new可以初始化成任意你希望它初始化成为的值
	//但是在C语言里面是不行的，C语言里面只能初始化成0(calloc函数的功能)
	//new可以将空间初始化成为任意的值

	//申请连续的空间
	int* p3 = new int[10];  //就是开辟了一段10个整形的连续空间
	//并且在用new来申请连续空间的时候，可以同时对其进行初始化的操作，比如
	int* p4 = new int[4]{ 1,2,3,4 };   //这是完全可以通过编译的
	return 0;
}


//new和delete针对内置类型
#include<iostream>
using namespace std;
int main()
{
	//申请单个元素的空间
	int* p1 = new int;  //要new出来什么类型的空间，直接将这种类型跟在new的后面就可以了
	//new后面跟上的都是类型的名称
	//使用这种方法的好处就在于不需要进行强制类型转化
	//也不需要用户去计算需要开辟多大内存空间的空间

	int* p2 = new int(10);
	//并且用new申请单个空间的话，还可以为这段空间进行初始化的操作
	//现在就是申请了一块整形的空间，然后让这个整形的空间的值为10
	//也就是说使用new可以初始化成任意你希望它初始化成为的值
	//但是在C语言里面是不行的，C语言里面只能初始化成0

	//申请连续的空间
	int* p3 = new int[10];  //就是开辟了一段10个整形的连续空间
	//并且在用new来申请连续空间的时候，可以同时对其进行初始化的操作，比如
	int* p4 = new int[4]{ 1,2,3,4 };   //这是完全可以通过编译的
	//这个初始化的方法是C++11里面所提供的一个新的特性

	//空间的释放
	delete p1;
	delete p2;
	//p1，p2的空间在栈上，但是他们所指向的空间在堆上

	//如果delete释放的是一段连续的空间的话，需要用delte[]来进行释放

	delete[] p3;
	delete[] p4;
	//p3的p4的区别就是一个初始化了，一个没有进行初始化

	return 0;
}


#include<iostream>
using namespace std;
class Test
{
public:
	//构造函数
	Test()
	{
		cout << "Test()" << this << endl;   //打印当前构造的是哪个对象
	}

	//析构函数
	~Test()
	{
		cout << "~Test()" << this << endl;   //打印当前构造的是哪个对象
	}
private:
	int _t;
};

void TestNewDelete()
{
	Test* pt1 = new Test;   //new申请出来的空间不需要进行判空，大多数情况下都是可以保证申请空间成功的
	delete pt1;

	Test* pt2 = new Test[10];   //创建了10个对象，就会调用10此构造函数
	delete[] pt2;

}

int main()
{
	//用new来申请自定义类型的空间
	TestNewDelete();
	return 0;
}


#include<iostream>
#include <crtdbg.h>
using namespace std;
void TestFunc()
{
	int* p1 = (int*)malloc(sizeof(int));
	delete p1;

	int* p2 = (int*)malloc(sizeof(int));
	delete[] p2;

	int* p3 = new int;
	free(p3);

	int* p4 = new int;
	delete[] p4;

	int* p5 = new int[10];
	free(p5);

	int* p6 = new int[10];
	delete p6;
	//如果把这句delete去掉，就会出现下面的这种报错信息
}

int main()
{
	TestFunc();
	_CrtDumpMemoryLeaks();   //用于检测内存是否发生泄漏的方法
	return 0;
}


#include<iostream>
using namespace std;
class Test
{
public:
	Test()
	{
		_ptr = new int[10];
	}

	~Test()
	{
		delete[] _ptr;
		_ptr = nullptr;
	}

private:
	int* _ptr;
};

void TestFunc()
{
	//崩溃
	//代码崩溃的原因在于，使用malloc进行申请空间的时候，malloc是没有调用构造函数的
	//但是下面的delete是会去调用析构函数的，那么这时候就没有对象明确的指向，调用析构函数的话
	//是一定会崩溃的
	//所以类中ptr的this指针是存在的，但是this指针所指向的内容是随机值，所以不能对其进行释放
	//一释放就会发生崩溃的情况
	//p1因为没有调用构造函数，所以p1指向的并不是一个对象，而delete会将p1所指向的空间当成对象释放
	//但是现在根本没有对象，所以代码会崩溃
	//因为_ptr指针并没有被初始化，所以代码会崩溃
	Test* p1 = (Test*)malloc(sizeof(Test));
	delete p1;

	//崩溃
	//道理和上面的是差不多的，同样的delete[]也是会去调用析构函数的
	//但是你使用malloc的话，对象其实是没有的，因为malloc不会去调用构造函数的
	//没有这个对象还非要去释放的话，那么是一定会发生崩溃的
	Test* p2 = (Test*)malloc(sizeof(Test));
	delete[] p2;

	//内存泄漏
	//原因在于用new去申请空间的话，是会去调用构造函数的，那么this指针实际上就是相当于有了
	//明确的指向了，但是在释放对象的资源的时候，使用了free
	//free是不会去调用析构函数的，所以对象的资源其实是没有被释放掉的
	//所以是会造成内存泄漏的
	//p3是指向对象的空间，并且这个对面里面其实是有资源的
	//free并没有把对象里面的孔吉纳释放掉，所以说会造成内存泄漏的问题
	Test* p3 = new Test;
	//p3的空间是在栈上的，p3所指向的内容他的空间是在堆上的
	free(p3);
	_CrtDumpMemoryLeaks();
	//这个方法可以用来检测内存是否泄露了
	//但是缺点在于，他不会告诉我们，在代码中的哪个位置内存泄漏了

	//崩溃
	Test* p4 = new Test;
	delete[] p4;

	//崩溃
	Test* p5 = new Test[10];
	free(p5);

	//崩溃+内存泄漏
	Test* p6 = new Test[10];
	delete p6;
}
//涉及到[]的位置都发生崩溃了
int main()
{
	TestFunc();
	return 0;
}


#include<iostream>
#include <crtdbg.h>
using namespace std;
class Test
{
public:
	Test()
	{
		cout << "Test()" << endl;
	}

	~Test()
	{
		cout << "~Test():" << this << endl;
	}

private:
	int _data;
};

void TestFunc()
{
	//代码没有任何的问题，原因在于类中只有一个数据成员，而没有设计到资源的管理
	//如果类中设计到了资源的管理的话，new和delete必须要匹配使用才可以
	Test* p1 = (Test*)malloc(sizeof(Test));
	delete p1;

	//崩溃
	Test* p2 = (Test*)malloc(sizeof(Test));
	delete[] p2;

	//没有发生内存泄漏
	 //因为类中没有涉及到资源的管理
	 //就好比说是日期类，其实日期类是否调用析构函数都是没有什么影响的
	Test* p3 = new Test;
	free(p3);
	_CrtDumpMemoryLeaks();

	//崩溃
	Test* p4 = new Test;
	delete[] p4;

	//崩溃
	Test* p5 = new Test[10];
	free(p5);

	//崩溃
	Test* p6 = new Test[10];
	delete p6;
}


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
	Test* pt = new Test;
	//new会先去申请空间，会去调用operator new的方法
	//然后去调用构造函数(这也就和前面说的构造函数不负责来开辟空间呼应上了)
	//只负责把对象初始化好，不负责去开辟空间
	delete pt;

	Test* pt = new Test[10];
	delete[] pt;

	return 0;
}


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


struct ListNode
{
	ListNode* _next;
	ListNode* _prev;
	int _data;
	void* operator new(size_t n)
	{
		void* p = nullptr;
		p = allocator<ListNode>().allocate(1);
		cout << "memory pool allocate" << endl;
		return p;
	}
	void operator delete(void* p)
	{
		allocator<ListNode>().deallocate((ListNode*)p, 1);
		cout << "memory pool deallocate" << endl;
	}
};
class List
{
public:
	List()
	{
		_head = new ListNode;
		_head->_next = _head;
		_head->_prev = _head;
	}
	~List()
	{
		ListNode* cur = _head->_next;
		while (cur != _head)
		{
			ListNode* next = cur->_next;
			delete cur;
			cur = next;
		}
		delete _head;
		_head = nullptr;
	}
private:
	ListNode* _head;
};
int main()
{
	List l;
	return 0;
}


int main()
{
	int* p = (int*)malloc(sizeof(int) * 10);
	free(p);
	return 0;
}


#include<iostream>
using namespace std;
class Test
{
public:
	Test(int t = 20)
		: _t(t)
	{
		cout << "Test():" << this << endl;
	}
	~Test()
	{
		cout << "~Test():" << this << endl;
	}
private:
	int _t;
};
int main()
{
	//注意:pt指向的空间并不是一个test类型的对象
	//因为malloc不会是不会调用构造函数的
	//所以没有创建出来对象
	//如果想要把pt指向的空间变成Test类型的对象的话
	//只需要在该空间上执行构造函数完成初始化的操作
	//那么想要完成这种操作的话，就需要使用定位new了
	Test* pt = (Test*)malloc(sizeof(Test));

	new(pt) Test;
	//这样操作完成之后才算一个真正的对象

	//当然，如果构造函数有参数的话，你也可以把构造函数的参数带上
	//就像下面这个样子
	//new(pt) Test（100);

	//既然已经是一个对象了，用完之后记得释放掉
	delete pt;

	return 0;
}


#include<iostream>
using namespace std;
class Test
{
	~Test()
	{
		delete this;
	}
};
int main()
{
	return 0;
}


// 将程序编译成x64的进程，运行下面的程序试试？
#include <iostream>
using namespace std;
int main()
{
	void* p = new char[0xfffffffful];
	cout << "new:" << p << endl;
	return 0;
}


#include<iostream>

//命名空间不是类型，是一个作用域
//C语言中有全局作用域和局部作用域
//定义命名空间相当于是定义了一个新的作用域
namespace N1
{
	//可以定义变量，也可以定义函数
	int a = 1;
	int b = 2;
	int Add(int left, int right)
	{
		return left + right;
	}
}

int a = 20;  //那么如果我想要打印全局作用域中的a的话，我要怎么打印？
//printf("%d\n", ::a); 

int main()
{
	int a = 30;
	printf("%d\n", a);  //在这个时候调用printf函数打印的肯定是主函数中的a
	printf("%d\n", ::a);  //::为作用域限定符，如果在一个变量前面
	//加上了::就代表我现在访问的是全局作用域中的变量
	printf("%d\n", N1::a);
	//访问命名空间的a，只需要在作用域限定符的前面加上命名空间的名称就可以了
	return 0;
}
//三个a分别属于三个不同的作用域，所以编译起来是不会有任何问题的
//那么，在什么情况下会是有问题的？
//就是在同一个命名空间中有两个相同的变量的时候，这个时候是有问题的


namespace N2
{
	int a = 10;
	int b = 20;
	int c = 30;
	int Sub(int left, int right)
	{
		return left - right;
	}
	//命名空间还可以嵌套
	namespace N3
	{
		int a = 10;
		int b = 20;
		int Mul(int left, int right)
		{
			return left * right;
		}
	}
}
printf("%d\n", N2::N3::a);  //在主函数中进行调用


int main()
{
	printf("%d\n", N1::a);
	return 0;
}
//缺陷就是使用起来有些麻烦，每次都要加上作用限定符


using N::b;  //相当于是全局变量，如果这个时候再定义一个int b; 那么就会出错了
int main()
{
	printf("%d\n", N::a);
	printf("%d\n", b);
}
//优点是使用方便，缺陷是容易引起冲突(上述所示，int b);
//如果冲突了，也很好解决，再变量的前面八命名空间的名称再加上就可以了。


#include<iostream>
using namespace std;
int main()
{
	//C语言中是不会对printf函数进行语法检测的
	//printf("%d %d %d", 10);    //编译器是不会报错的
	//这是完全可以通过编译的，只是会有警告
	//警告来自于后两个参数是未知的
	//使用printf还有一个不太好的点就是
	//要输出什么类型的数据，这个格式控制符一定要给对，而且需要我们自己来给出
	//要记住很多种格式，很容易出错
	//所以再C++中我们使用cout
	cout << "change world" << endl;
	cout << 10 << " " << 12.34 << " " << 'a' << endl;
	//不用在乎所输出的东西的类型是什么
	return 0;
}


#include <iostream>
using namespace std;
int main()
{
	int a;
	double b;
	char c;
	cin >> a;
	cin >> b >> c;
	cout << a << endl;
	cout << b << " " << c << endl;
	return 0;
}


void Test(int a = 10)   //跟的是一个默认值，好处就是主函数里面不用传参了
//如果用户再调用函数的同时进行了传参操作，那么使用的就是用户所传进去的参数
{
	cout << a << endl;
}
int main()
{
	Test();
	Test(100);
	return 0;
}



//缺省参数的分类
//全缺省参数和半缺省参数
void TestFunc(int a = 1, int b = 2, int c = 3)
{
	//所有参数都有缺省值称为全缺省参数
	cout << a << ' ' << b << ' ' << c << ' ' << endl;
}

//半缺省参数
//void TestFunc2(int a=1,int b=2,int c)   
//无法通过编译，把b的值拿掉，也无法通过编译
//只有把a的值拿掉，才能通过编译
//a和b都拿掉，有c也是可以的
//得出规律，注意：半缺省参数只能从右往左一次给出
void TestFunc2(int a, int b, int c = 3)  //可以通过编译
{
	//部分参数带有缺省值
	cout << a << ' ' << b << ' ' << c << ' ' << endl;
}
int main()
{
	//全缺省
	TestFunc();  //打印 1 2 3
	TestFunc(10);  //打印 10 2 3 
	TestFunc(10, 20);  //打印10 20 3
	TestFunc(10, 20, 30);  //打印10 20 30

	//半缺省
	TestFunc2(10, 20);
	TestFunc2(10, 20, 30);

	return 0;
}


int Add(int left, int right)
{
	return left + right;
}

double Add(double left, double right)
{
	return left + right;
}
//参数列表不一样
//称其为函数重载
//调用的时候，调用那种的，就用哪种的
//编译器在编译的时候要进行参数类型的推演，他要确定你所传的参数到底是什么类型的
int main()
{
	Add(1, 2);
	Add(1.2, 3.4);  //编译是可以通过编译的，但是计算的值是不对的
	//c语言是不允许重名的函数的
	return 0;
}


void TestFunc()
{}
void TestFunc(int a = 0)
{}
int main()
{
	TestFunc(10);  //是可以通过编译的，会调用下面的哪个参数
	TestFunc();    //是不会通过编译的
	//对重载函数的调用不明确，第一个可以调用，第二个也可以调用
	return 0;
}


#include<iostream >
using namespace std;

void Swap(int a, int b)
{
	cout << &a << " " << &b << " " << endl;
	int temp = a;
	a = b;
	b = temp;
	//交换的是形参的内容，不是实参的内容
}

void Swap(int* pa, int* pb)
{
	cout << &pa << " " << &pb << " " << endl;
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}

//两个swap形成了重载
int main()
{
	int a = 1;
	int b = 2;
	cout << &a << " " << &b << " " << endl;
	//Swap(a, b);  //如果只是值传递的话，是不行的
	Swap(&a, &b);
	cout << a << " " << b << " " << endl;
}


int main()
{
	int a = 10;
	//int& ra;  //这样是无法通过编译的，因为引用类型的变量没有进行初始化操作
	//这样是不行的
	int& ra = a;
	//ra是a的别名，也就是说，ra和a是同一个东西
	//如何看出ra和a是一个东西，打印他们的地址，就可以了
	cout << &ra << " " << &a << " " << endl;
	//所打印的地址是一样的
	//那么，我们给ra进行赋值的话，a的值也会发生改变
	ra = 20;
	cout << a << endl;  //打印的a的值也为20
	return 0;
}


int main()
{
	int a = 10;
	int& ra = a;  //ra是a的别名
	cout << &ra << "=" << &a << endl;
	ra = 20;  //改变了ra的同时，那么a的值也是会发生改变的

	int& rb = a;  //rb也在引用a ，一个变量可以有多个引用
	rb = 30;  //那么修改rb的同时，ra和a也都发生了改变

	int& rra = ra;
	rra = 40;   //那么都会发生改变
	//因为用的都是同一块空间

	cout << a << " " << ra << " " << rb << " " << rra << " " << endl;

	return 0;
}


#include<iostream>
using namespace std;
#define MAX(a,b) (((a)>(b))?(a):(b))
int main()
{
	int a = 10;
	int b = 20;
	cout << MAX(a, b) << endl;
	return 0;
}


#include<iostream>
using namespace std;
inline int Add(int left, int right)
{
	return left + right;
}
int main()
{
	int a = 10;
	int b = 20;
	cout << Add(a, b) << endl;    //替换发生在编译阶段
	cout << Add(a, ++b) << endl;    //替换发生在编译阶段
	//因为替换发生在编译阶段，所以他会参与到函数编译里面去，代码运行效率会比较高
	//看有没有展开就看反汇编代码有没有直接调用这个函数就可以了
	return 0;
}


// F.h
#include <iostream>
using namespace std;
inline void f(int i);
// F.cpp
#include "F.h"
void f(int i)
{
	cout << i << endl;
}
// main.cpp
#include "F.h"
int main()
{
	f(10);
	return 0;
}
// 链接错误：main.obj : error LNK2019: 无法解析的外部符号 "void __cdecl f(int)" (?
//f@@YAXH@Z)，该符号在函数 _main 中被引用比
//inline修饰的类似具有文件作用域，也就是说只能在当前文件内适用，链接属性只存在于自己的当前文件内部，类似于static,所以一般不把声明和定义分开。


#include<iostream>
using namespace std;
int main()
{
	auto a = 10;  //那将来就是整形 (编译器需要去推演a的类型)
	auto b = 12.34;   那将来就是浮点形
		auto c = a + b;   //编译器自己去解决
	cout << typeid(a).name() << endl;
	cout << typeid(b).name() << endl;
	cout << typeid(c).name() << endl;
	return 0;
}