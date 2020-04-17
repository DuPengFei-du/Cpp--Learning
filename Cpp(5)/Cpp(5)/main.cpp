#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	int c;
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
	int a, b;
	cin >> a >> b;
	int c;
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


#include<iostream>
using namespace std;
float a = 3.5;
int main()
{
	int a = 5;
	cout << a << endl;
	return 0;
}


//字符串变量
/*
除了可以使用字符数组定义字符串外，C++还提供了一种更方便的方法---
用字符串类型定义字符串变量
实际上，string并不是C++语言本身具有的基本类型，他是在C++
标准库中声明的一个字符串类，用这种类可以定义对象
*/

//定义字符串变量
/*
和其他类型的变量一样，字符串变量要先定义后使用，定义字符串变量要用到类名string
string string1;
string string2="China";   定义的同时进行初始化的操作
可以看出，这种定义的方法和int,char,duble类型变量的方法是类似的
*/
string string1;
string string2 = "China";   //定义的同时进行初始化的操作
//需要注意的是，在使用string的时候，需要在头文件中包含#include<string>

//对字符串变量的赋值
/*
在定义了字符串变量之后，可以使用赋值语句对其进行赋值操作
*/
#include<tring>
string1 = "Canada";
//而在使用字符数组的时候是不可以这么操作的，比如
char str[10];
str = "hello";
//这样子使用时错误的，因为数组名是可以被修改的

//既可以用字符串常量给字符串变量赋值，也可以使用字符串变量给另一个字符串变量赋值

//可以对字符串变量中的某一个字符进行修改
string word = "Then";
word[2] = 'a';
//那么word的内容就会变成Than了

/*
前面已经说明了，字符串常量以\0作为结尾，但将字符串常量存放在到字符串变量当中的时候
只存放字符串本身而不去存储\0，因此字符串变量word中的字符为："Than"四个字符，是没有\0的
*/

//字符串变量的输入输出
//可以在输入输出中用字符串变量名，输入输出字符串
cout << string;

//字符串变量的运算
/*
在以字符数组存放字符串时，字符串的运算要用到字符串函数，而对于string对象来说
可以不使用这些函数，直接利用简单的运算符就可以了
*/
string1 = string2  //完成赋值操作
//字符串链接的话，直接用加号就可以了
//字符串比较直接用比较运算符号就可以

/*
不仅可以使用string定义字符串变量，也可以用string定义字符数组
*/


/*
在软件开发中，常常需要动态地分配和撤销空间，在C语言中，是要利用库函数malloc和free来完成空间的
分配和撤销，但是malloc函数使用的时候必须要指定需要开辟的内存空间的大小。其调用形式为malloc(size)
size是字节数，需要事先求出来或者用sizeof运算符由系统给出。此外，malloc函数只能从用户处知道要开辟空间的大小
而不知道数据的类型，因此无法使其返回指针指向具体的数据，其返回值一律为void*类型，必须在程序中进行强制类型转换
才能使其返回的指针指向具体的数据
*/

/*
C++提供了比较简便而功能强大的new和delete运算符来取代malloc和free函数，为了兼容C语言，仍然
保留有这两个函数
*/
new int;  //开辟一个存放整数的空间，返回一个指向整形数据的指针
new int(100);   //开辟一个存放整数的空间，并指定该整数的初始值为100
new char[10];   //开辟了一个存放字符数组的空间，该数组有10个元素
new int[5][4];   //开辟了一个存放二维数组的空间，该数组的大小为5*4

//new运算符的一般使用格式为：
new 类型[初值];
//用new分配数组空间时不能指定初值

//delete运算符的一般使用格式为：
delete[]指针变量


//开辟空间以存放一个结构体的变量
#include<iostream>
#include<string>
using namespace std;
struct Student
{
	char name[10];
	int num;
	char sex;
};
int main()
{
	Student* p;
	p = new Student;
	strcpy(p->name, "wangqiaoxin");
	p->num = 0410;
	p->sex = 'M';
	cout << p->name << " " << p->num << " " << p->sex << endl;
	delete p;
	return 0;
}

//注意：new和delete是运算符，不是函数，所以说，效率会高一些.