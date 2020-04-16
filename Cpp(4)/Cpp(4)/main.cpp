#include<iostream>
using namespace std;
int main()
{
	cout << "Hello world" << endl;
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
	int a, b;
	int c;
	cin >> a >> b;
	c = Add(a, b);
	cout << c << endl;
	return 0;
}


#include<iostream>
using namespace std;
int Max(int x, int y)
{
	return x > y ? x : y;
}
int main()
{
	int a, b;
	cin >> a >> b;
	int c;
	c = Max(a, b);
	cout << c << endl;
	return 0;
}


//对引用的进一步说明
/*
1.不能建立void类型的引用
因为任何实际存在的变量都是属于非void类型的，void的含义是无类型或者空类型
void只是在语法上相当于一个类型而已
2.不能建立引用的数组
企图建立一个包含6个元素的引用数组是不可以的，数组名只是代表数组首元素的地址
本身并不是一个占有存储空间的变量
3.可以将变量的引用的地址赋值给一个指针，此时指针指向的是原来的变量
但是不能定义指向引用类型的指针变量
由于引用不是一种独立的数据类型，因此不能建立指向引用类型的指针变量
4.可以建立指针变量的引用
5.可以用const对引用加以限制，表示不允许修改此引用的值
*/


/*
内联函数
调用函数时需要一定的时间秒如果有些函数需要频繁的使用，也就是累计使用时间会很长
从而降低代码的执行效率。C++提供一种提高效率的方法，也就是在编译时将所调用函数代码嵌入到主调函数中
这种嵌入到主调函数中的函数称之为内联函数
指定内联函数的方法很简单，只需呀在函数首行的左端加上一个inline关键字就可以了
*/
#include<iostream>
using namespace std;
inline int max(int a, int b, int c)
{
	if (b > a)
		a = b;
	if (c > a)
		a = c;
	return a;
}
int main()
{
	int i = 7, j = 10, k = 25, m;
	m = max(i, j, k);
	cout << m << endl;
	return 0;
}

/*
内联函数与用#define命令实现的带参宏定义有些相似，但也不完全相同
宏定义实在编译由预处理程序对其预处理的，他只是简单的字符置换而不会进行
语法检查，往往会出现意想不到的错误
使用内联函数可以节省运行的时间，但却增加了目标程序的长度，所以说
只有规模很小并且频繁使用的函数，才可以大大提高运行的效率
*/


//作用域限定符
/*
每一个变量都有其有效的作用域，只能在变量的作用域内使用该变量，不能直接使用
其他作用域中的变量
*/
#include<iostream>
using namespace std;
float a = 3.5;
int main()
{
	int a = 2;
	cout << a << endl;
	return 0;
}
//输出的结果是2
//main函数中的局部变量将会屏蔽全局变量，所以输出的结果是2
//C++提供::，它可以指定所需要的作用域，一般默认为全局变量

#include<iostream>
using namespace std;
float a = 3.5;
int main()
{
	int a = 2;
	cout << a << endl;
	cout << ::a << endl;
	return 0;
}