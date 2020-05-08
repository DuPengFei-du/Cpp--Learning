/*
构造函数的名字必须和类名是相同的，而不能是任意命名
从而可以方便编译器去识别它，并把它作为构造函数来进行处理，他不具有
任何的类的，不反悔任何值
*/
#include<iostream>
using namespace std;
class Time
{
public:
	Time()
	{
		hour = 0;
		minute = 0;
		sec = 0;
	}
	void set_time();
	void show_time();
private:
	int hour;
	int minute;
	int sec;
};
void Time::set_time()
{
	cin >> hour;
	cin >> minute;
	cin >> sec;
}
void Time::show_time()
{
	cout << hour << ":" << minute << ":" << sec << endl;
}
int main()
{
	Time t1;
	t1.set_time();
	t1.show_time();

	Time t2;         //建立对象t2，同时调用构造函数Time
	t2.show_time();   
	return 0;
}

/*
在类中定义了构造函数Time()，他的名字和类名是相同的，在建立对象的时候自动执行构造函数，根据
构造函数Time的定义，其作用是对该对象中的全部数据成员赋初值0，不要误以为是在声明类的时候直接
对程序数据成员赋初值的(那样是不允许的)，赋值语句是写在构造函数函数体里面的
只有在调用构造函数的时候才会执行这些赋值语句
*/


/*
在执行主函数的时候，首先建立对象t1，此时自动执行构造函数Time，在执行构造函数Time
过程中对t1对象中的数据成员赋值初始值0.然后再执行主函数中t1.set_time()
从而从键盘输入新的值赋值给对象t1的数据成员
然后再输出t1成员的值
接着建立对象t2，自动执行构造函数对t2的成员赋初值，紧接着直接输出
*/


关于构造函数的使用，有以下的声明
/*
1.什么时候调用构造函数---在建立对象的时候就会自动调用构造函数，在建立对象时
系统为该对象分配存储单元，此时执行构造函数，就会把指定的初始值送到有关数据成员的
存储空间当中了。每建立一个对象，就会调用一次构造函数

2.构造函数没有返回值，它的作用只是对对象进行初始化的操作，因此不需要
定义构造函数的时候声明返回值类型，这是他和一般函数的一个重要的不同点

3.构造函数不需要用户去调用，也不能被用户所调用
构造函数是在定义对象的时候由系统自动执行的，而且只能执行一次
构造函数一般声明为public

4.可以用一个类对象初始化另一个类对象
Time t1;
Time t2=t1;
此时，把对象t1的各数据成员的值拷贝到t2相应的各个成员，而不用调用构造函数

5.如果用户没有自己定义构造函数，那么C++系统会自动生成一个构造函数，只是这个
构造函数的函数体是空的，也没有参数，不执行初始化的操作
*/


带参数的构造函数
/*
上面的例子中构造函数不带参数，在函数体中对数据成员赋初值。这种方式使该类的每一个对象
的数据成员都得到同一组初始值，但是，有时用户不希望对不同的对象赋予不同的初始值
这就无法使用上面的方法解决了
可以采用带参数的构造函数，在调用不同对象的构造函数时从外面
将不同的数据传递给构造函数，从而实现不同的初始化
构造函数首部的一般格式为
构造函数(类型1 形参1 ，类型2，形参2)
前面已经说了，用户是不能调用构造函数的，因此无法使用常规的函数调用的方法给出实参
实参是在定义对象时所给出的
定义对象的一般格式为：
类名 对象名(实参1，实参2 ...)
在建立对象时，把实参的值传递给构造函数相应的实际参数
*/


用参数初始化列表对数据成员进行初始化

/*
C++还提供另一种初始化数据成员的方法——参数列表初始化来实现对数据成员的初始化
这种方法不再函数体内对数据成员初始化，而是在函数的首部实现，例如，
可以使用以下的形式：
*/


Box::Box(int h, int w, int len) :height(h), width(w), lenght(len)
{

}


/*
即就是在原来函数首部的泊位加上一个冒号，然后列出参数的初始化列表
上面的初始化表示的是用形参h的值初始化数据成员height，用形参w的值来初始化
width，用形参len的值来初始化length
后面的花括号是空的，也就是说函数体是空的，没有执行任何的语句
用参数的初始化表法可以减少函数体的长度，使得结构更加的精炼
这样就可以直接在类体中定义构造函数，而不是在类外定义构造函数
*/


/*
说明：如果数据成员是数组，则应当在构造函数的函数体中
用语句对其赋值，而不能在参数初始化列表中对其进行初始化
*/

#include<string.h>
#include<iostream>
using namespace std;
class Student
{
public:
	Student(int n, char s, nam[]) :num(n), sex(s)
	{
		Strcpy(name, nam);
	}
private:
	int num;
	char sex;
	char name[20];
};
可以这样定义对象std1
Student std1{10101，'m',"wangli"};


构造函数的重载

/*
在一个类中可以定义多个构造函数，以便为对象提供不同的初始化的方法
供用户来选择，这些构造函数具有相同的名称，而参数的个数或者参数的类型不相同
这就称为构造函数的重载
*/
#include<iostream>
using namespace std;
class Box
{
public:
	Box();    //声明没有参数的构造函数
	Box(int h, int w, int len):height(h), width(w), length(len)
	{

	}
	int volume();
private:
	int height;
	int width;
	int length;
};
Box::Box()      //在类外定义没有参数的构造函数Box
{
	height = 0;
	width = 0;
	length = 0;
}
int Box::volume()
{
	return height * width * length;
}


说明


/*
在建立对象时候不必给出实参的构造函数，称为默认的构造函数，显然
没有参数的构造函数称为默认的构造函数，一个类只能由一个默认的构造函数
如果用户没有定义构造函数，那么系统就会调用默认的构造函数，但是他的函数体
时空的，不起初始化的作用，如果用户希望在创建对象的时候使得数据成员具有初始值
就必须自己定义构造函数
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


using namespace N;
int main()
{
	printf("%d\n", N::a);
	printf("%d\n", b);
	Add(10, 20);
	return 0;
}
//使用方便，但是冲突就会多


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


void TestFunc(int a = 20);

void TestFunc(int a = 20)
{

}
//这样子的代码就会出错，原因在于如果两个位置同时来给的话，可能会给的不一样
//可能就会说不清了，给在声明的位置会比较好一些，因为有时候需要用到第三方库，要给出函数声明才能使用，而且如果定义的参数的初值不一样，编译器就会混乱；缺省参数值只能是常量或全局变量
int main()
{
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
	auto b = 12.34;   ////那将来就是浮点形
	auto c = a + b;   //编译器自己去解决
	cout << typeid(a).name() << endl;
	cout << typeid(b).name() << endl;
	cout << typeid(c).name() << endl;
	return 0;
}


void TestAuto()
{
	int a[] = { 1,2,3 };
	auto b[] = { 4，5，6 };  //因为这样声明，不知道有几个元素
}


//#ifndef NULL
//#ifdef __cplusplus
//#define NULL 0
//#else
//#define NULL ((void *)0)
//#endif
//#endif


void f(int)
{
	cout << "f(int)" << endl;
}
void f(int*)
{
	cout << "f(int*)" << endl;
}
int main()
{
	f(0);
	f(NULL);
	f((int*)NULL);
	return 0;
}
