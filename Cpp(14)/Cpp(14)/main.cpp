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
	因为替换发生在编译阶段，所以他会参与到函数编译里面去，代码运行效率会比较高
	看有没有展开就看反汇编代码有没有直接调用这个函数就可以了
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
	auto b = 12.34;   ////那将来就是浮点形
	auto c = a + b;   //编译器自己去解决
	cout << typeid(a).name() << endl;
	cout << typeid(b).name() << endl;
	cout << typeid(c).name() << endl;
	return 0;
}


#include<iostream>
using namespace std;
int main()
{
	int a = 10;
	auto pa1 = &a;
	auto pa2 = &a;
	auto& ra = a;
	cout << typeid(pa1).name() << endl;
	cout << typeid(pa2).name() << endl;
	cout << typeid(ra).name() << endl;
	return 0;
}
//打印的结果p1,p2都为int * ,ra打印的结果为int


#include<iostream>
using namespace std;
int main()
{
	auto a = 1, b = 2;
	auto c = 12, d = 12.34;  //这一行就会出错，因为只有一个auto，到底给成什么乐星
	//这是编译器无法确定的
}


// 此处代码编译失败，auto不能作为形参类型，因为编译器无法对a的实际类型进行推导
void TestAuto(auto a)
{
	//就算给一个缺省参数也是不可以的。
}


void TestAuto()
{
	int a[] = { 1,2,3 };
	auto b[] = { 4，5，6 };  //因为这样声明，不知道有几个元素
}


面向对象程序设计中的几个名词

/*
类的成员函数体现对象的行为，在面向对象程序理论中被称为方法，方法是指
对数据的操作，一个方法对应着一个操作，显然
只有被声明为公用的方法(成员函数)才能被外界所激活
外界是通过发消息来激活有关方法的
所谓的消息，其实就是一个个的命令，由程序语句来实现
*/


怎样使用类和对象

利用构造哈纳树对类对象进行初始化
对象初始化
/*
在程序中常常需要对变量赋初值，也就是对其初始化
这在面向对象程序设计中是很容易实现的。在定义变量的时候赋以初始值，比如说
int a=10;
在基于对象的程序中，在定义一个对象的时候，也需要进行初始化的工作，也就是对数据成员赋初始值
对象代表一个实体，每一个对象都有它的属性
每一个对象都应当在它建立的时候就有确定的内容，否则就失去了对象的意义了
在系统为对象分配内存的时候，应该同时对有关的数据成员赋初始值
那么，怎样使得它们得到初始值呢?有人企图在声明类是对数据成员初始化，比如说
*/


class Time
{
	hour = 0;
	minute = 0;
	sec = 0;
};


这是错误的，因为类并不是一个实体，而是一种抽象的类型，并不占据内存空间显然是不能容纳数据的



如果一个类中的成员全部都是公用的，则可以在定义对象时对数据成员进行初始化
class Time
{
public:
	hour;
	minute;
	sec;
};
Time t1 = { 14,56,30 };
/*
这种情况和结构体变量的初始化是类似的，在一个花括号内顺序列出各公用
数据成员的值，两个值之间用逗号进行隔开，但是如果说数据成员是私有的话
那么就不能利用这种方式来进行初始化了
*/


用构造函数实现数据成员的初始化

/*
在C++程序中，对象的初始化是一个不可缺少的问题
C++的类设计中提供了较好的处理方法
*/

/*
为了解决这个方法，C++提供了构造函数来处理对象的初始化
构造函数是一种特殊的成员函数，与其他成员函数不同，不需要用户来调用它，而是在
建立对象的时候自动执行
构造函数是在对类进行声明的时候由类的设计者定义的，程序用户只需要在
定义对象的同时指定数据成员函数的初始值就可以了。

构造函数的函数名和类名相同，没有返回值，没有参数
*/


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
	命名空间还可以嵌套
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
	const int a = 10;   //在C语言中，const所修饰的量其实还是一个变量，只是这个变量不能被修改
	//但是，在C++中，const所修饰的量，就已经是一个常量了，不能被修改
	//同时具有宏常量的属性
	//如何知道在C++中，const所修饰的量是常量，就用数组去检测，如下所示：
	//int array[a];  //看是否可以通过编译


	//int& ra = a;  //ra的值是可以修改的
	//此时，是无法通过编译的，因为a是const类型的
	//而ra是普通类型的
	//那么，如何修改，才能让代码通过编译呢？
	//只需要在前面加上const 就可以了
	const int& ra = a;  //称为const类型的引用，或者常引用

	double d = 12.34;
	const int& rd = d;  //(居然可以通过编译？？)  不加const是不能通过编译的 
	cout << &rd << " " << &d << " " << endl;
	//但是打印的地址是不一样的，说明rd引用的就不是d
	//原因是，编译器会创建一个临时变量，吧double整形的部分放在临时变量中
	//让rd引用临时变量，而不是d，临时变量是编译器创建的
	//我们不知道他的名字也不知道他的地址，所以我们是无法对他进行任何修改的
	//既然改不成，那就说明这个空间本来就具有常性
	//所以加上const就可以通过编译了
	return 0;
}


void Swap(int& ra, int& rb)    //ra是a的别名，rb是b的别名
{
	int temp = ra;
	ra = rb;
	rb = temp;
	//通过交换形参，也就相当于是交换实参了
}
int main()
{
	int a = 1;
	int b = 2;
	Swap(a, b);
	cout << a << " " << b << " " << endl;
	return 0;
}
//不需要判空，也不需要解引用，使用起来十分的方便，效率比较高


#include <time.h>
struct A
{
	int a[10000];
};
void TestFunc1(A a)
{
	//值传递
}
void TestFunc2(A& a)
{
	//引用传递
}
void TestFunc3(A* a)
{
	//址传递
}
void TestRefAndValue()
{
	A a;
	// 以值作为函数参数
	size_t begin1 = clock();
	for (size_t i = 0; i < 10000; ++i)
		TestFunc1(a);
	size_t end1 = clock();

	// 以引用作为函数参数
	size_t begin2 = clock();
	for (size_t i = 0; i < 10000; ++i)
		TestFunc2(a);
	size_t end2 = clock();

	//以地址为参数
	size_t begin3 = clock();
	for (size_t i = 0; i < 10000; ++i)
		TestFunc3(&a);
	size_t end3 = clock();

	// 分别计算两个函数运行结束后的时间
	cout << "TestFunc1(int)-time:" << end1 - begin1 << endl;
	cout << "TestFunc2(int&)-time:" << end2 - begin2 << endl;
	cout << "TestFunc3(int*)-time:" << end3 - begin3 << endl;

}

// 运行多次，检测值和引用在传参方面的效率区别
int main()
{
	for (int i = 0; i < 10; ++i)
	{
		TestRefAndValue();
	}
	return 0;
}