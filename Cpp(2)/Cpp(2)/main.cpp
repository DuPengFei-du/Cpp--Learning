#include<iostream>
using namespace std;
int main()
{
	cout << "hello world" << endl;
	return 0;
}


#include<iostream>
using namespace std;
int main()
{
	int a, b;
	int c;
	cin >> a >> b;
	c = a + b;
	cout << c << endl;
	return 0;
}


#include<iostream>
using namespace std;
int Add(int x, int y)
{
	return x + y;
}
int main()
{
	int a, b, c;
	cin >> a >> b;
	c = Add(a, b);
	cout << c << endl;
	return 0;
}


#include<iostream>
using namespace std;
int MAX(int x, int y)
{
	return x > y ? x : y;
}
int main()
{
	int a, b;
	cin >> a >> b;
	int c;
	c = MAX(a, b);
	cout << c << endl;
	return 0;
}


/*
在C语言中使用#define指令来定义符号常量，如
#define PI 3.1415
实际上，只是在预编译是进行字符置换，把程序中所有出现的PI全部替换成3.1415
在预处理之后，程序中就不会继续存在有PI字符了
PI不是变量，没有类型，不占用内存单元
*/
#include<iostream>
using namespace std;
#define PI 3
int main()
{
	int a = 1, b = 2;
	cout << a * b * PI << endl;
	return 0;
}


/*
C++提供了用const定义常量的方法
const PI 3
定义了长变量PI，它具有变量的属性，有数据类型，占用内存单元，有地址，可以用指针指向它
只是在程序运行期间变量的值是固定的，不能改变，常变量方便易用，避免了用#define定义符号常量时
出现的缺点，因此，const取代了用#define定义符号常量的作用
const常常与指针合在一起使用
*/


//函数原型声明
/*
在C语言中，如果函数调用的位置在函数定义之前，则应在函数调用之气那对所调用的函数进行函数声明，但是如果所调用的函数
是整形的，也可以不进行函数声明。
但是在C++中，如果函数调用的位置在函数定义之前，则要求在函数调用之前必须对所调用的函数作函数原型声明
这不是建议性的，这是强制性的，这样做的目的是为了使编译系统对函数调用的合法性进行检查，尽量
保证程序的正确性
*/


//函数的重载
/*
C++允许相似同一作用域中用同一个函数名定义多个函数，这些函数的参数个数和参数了悉尼港不相同
这些同名的函数被用来实现不同的功能，这就是函数重载，即一个函数名多用
函数重载，参数的个数和类型都允许不相同，但是要注意的是，重载函数的参数个数或者
参数类型应该至少有一个是不相同的，函数的返回值类型可以相同，也可以不相同。但不允许
个数和类型都相同，函数的返回值类型不相同，这样子是不可以的
*/


//函数模板
/*
C++提供函数模板，所谓函数模板，实际上是建立一个通用函数，其函数类型
和形参类型不具体指定，用一个虚拟的类型来代表，这个通用函数就称为函数模板
凡是函数体相同的函数都可以用这个模板来代替，不必定义多个函数，只需要在模板中定义一次就可以了
*/
#include<iostream>
using namespace std;
template<typename T>
T max(T a, T b, T c)
{
	if (b > a)
		a = b;
	if (c > a)
		a = c;
	return a;
}
int main()
{
	int i1 = 8, i2 = 5, i3 = 6, i;
	i = max(i1, i2, i3);  //调用函数模板，此时T被int取代
	cout << "max=" << i << endl;
	return 0;
}


/*
template的含义是模板，尖括号中先写关键字typename，(或者是class),后面跟着一个类型参数T，这个类型参数
实际上是一个虚拟的类型名，表示模板中出现的T是一个类型名，但是并未指定是哪一种具体的类型
在定义函数时，用T来定义的a,b,c是什么类型的也不清楚，要在函数调用时根据具体的是擦类型来确定T到底是什么类型的
class和typename的作用相同，都是表示乐类型名，二者可以互换
类型参数可以不止有一个，可以根据需要确定个数。
*/


//有默认参数的函数---缺省参数
/*
一般情况下，在函数调用的时候形参从实参哪里取得值，因此实参的个数应与形参的个数相同
有时多次调用同一个函数是用同样的实参，C++提供一种简单的处理办法，给形参一个默认值，这样
形参就不必一定要从实参哪里获取一定的值了
如果不想使用默认的值，则同时实参另外给出就可以了。
如果有多个形参，可以使得每一个形参都有一个默认值，也可以使得一部分形参具有默认值
*/