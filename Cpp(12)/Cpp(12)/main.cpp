//类和对象的简单应用举例

//用类来实现输入输出的简单应用举例
#include<iostream>
using namespace std;
class Time
{
public:
	int hour;
	int minute;
	int sec;
};
int main()
{
	Time t1;
	cin >> t1.hour;
	cin >> t1.minute;
	cin >> t1.sec;
	cout << t1.hour << ":" << t1.minute << ":" << t1.sec << endl;
	return 0;
}

/*
这是一个最简单的例子，因为Time中只有数据成员，并且是被定义成共有的，因此
可以在类外对这些成员进行操作，t1被定义为Time的对象
在主函数中向t1对象的数据成员输入用户指定的时候，分，秒的值，从而完成输出
因为是在类外引用对象t1的数据成员hour，minute，sec的
因此不用在前面指定对象名t1
不要把对象名错写为类名
因为类是一种抽象的数据类型，并不是一个实体，也不占用内存空间
只有在定义对象的时候，才能分配存储空间
*/


//用上例子中的Time类定义多个类对象，分别输入和输出各对象中的时间
#include<iostream>
using namespace std;
class Time
{
public:
	int hour;
	int minute;
	int sec;
};
int main()
{
	Time t1;

	cin >> t1.hour;
	cin >> t1.minute;
	cin >> t1.sec;
	cout << t1.hour << ":" << t1.minute << ":" << t1.sec << endl;

	Time t2;

	cin >> t2.hour;
	cin >> t2.minute;
	cin >> t2.sec;
	cout << t2.hour << ":" << t2.minute << ":" << t2.sec << endl;
	return 0;
}
/*
这个程序是清晰易懂的，但是在主函数中对不同对象一一写出有关操作会使得程序冗长
如果有10各对象，那么主函数就会很长了，这样会降低程序的清晰度，为了解决这个问题
可以使用函数进行输入和输出
*/


#include<iostream>
using namespace std;
class Time
{
public:
	int hour;
	int minute;
	int sec;
};
int main()
{
	void set_time(Time&);     //函数声明
	void show_time(Time&);    //函数声明

	Time t1;
	set_time(t1);
	show_time(t1);

	Time t2;
	set_time(t2);
	show_time(t2);

	return 0;
}


void set_time(Time& t)        //形参t是引用变量
{
	cin >> t.hour;   //输入设定的时间
	cin >> t.minute;
	cin >> t.sec;
}

void show_time(Time& t)        //形参t是引用变量
{
	cout << t.hour << ":" << t.minute << ":" << t.sec << endl;
}

/*
函数的形参t是Time类对象的引用t，所以t和t1占用的是同一块内存空间
*/


#include<iostream>
using namespace std;
class Time
{
public:
	void set_time();
	void show_time();

private:
	int hour;
	int minute;
	int sec;
};
int main()
{
	Time t1;

	t1.set_time();
	t1.show_time();

	Time t2;

	t2.set_time();
	t2.show_time();

	return 0;
}


void Time::set_time()     //形参t是引用变量
{
	cin >> hour;   //输入设定的时间
	cin >> minute;
	cin >> sec;
}

void Time::show_time()        //形参t是引用变量
{
	cout << hour << ":" << minute << ":" << sec << endl;
}


/*
在主函数中调用两个成员函数的时候，应该指定对象名
从而可以表示出调用的是哪一个对象的成员函数

在类外定义函数的时候，应该知名函数是在哪个作用域中的
在成员函数引用本对象的数据成员是，只需直接写数据成员名就可以了

类是抽象的，对象是具体的，定义成员函数的时候应该指定类的名字
因为定义的是该类中的成员函数，而调用成员函数的时候应该指定具体的对象名
*/


//找出一个整形数组中的元素的最大值
#include<iostream>
using namespace std;
class Array_max
{
public:
	void set_value();
	void max_value();
	void show_value();
private:
	int array[10];
	int max;
};
void Array_max::set_value()
{
	int i = 0;
	for (int i = 0; i < 10; i++)
	{
		cin >> array[i];
	}
}

void Array_max::max_value()
{
	int i = 0;
	max = array[0];
	for (int i = 0; i < 10; i++)
	{
		if (array[i] > max)
			max = array[i];
	}
}

void Array_max::show_value()
{
	cout << "max=" << max;
}

int main()
{
	Array_max arrmax;   //定义对象arrmax
	arrmax.set_value();
	arrmax.max_value();
	arrmax.show_value();
	return 0;
}


//#include<iostream>
//
////命名空间不是类型，是一个作用域
////C语言中有全局作用域和局部作用域
////定义命名空间相当于是定义了一个新的作用域
//namespace N1
//{
//	//可以定义变量，也可以定义函数
//	int a = 1;
//	int b = 2;
//	int Add(int left, int right)
//	{
//		return left + right;
//	}
//}
//
//int a = 20;  //那么如果我想要打印全局作用域中的a的话，我要怎么打印？
////printf("%d\n", ::a); 
//
//int main()
//{
//	int a = 30;
//	printf("%d\n", a);  //在这个时候调用printf函数打印的肯定是主函数中的a
//	printf("%d\n", ::a);  //::为作用域限定符，如果在一个变量前面
//	//加上了::就代表我现在访问的是全局作用域中的变量
//	printf("%d\n", N1::a);
//	//访问命名空间的a，只需要在作用域限定符的前面加上命名空间的名称就可以了
//	return 0;
//}
////三个a分别属于三个不同的作用域，所以编译起来是不会有任何问题的
////那么，在什么情况下会是有问题的？
////就是在同一个命名空间中有两个相同的变量的时候，这个时候是有问题的


//namespace N2
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int Sub(int left, int right)
//	{
//		return left - right;
//	}
//	//命名空间还可以嵌套
//	namespace N3
//	{
//		int a = 10;
//		int b = 20;
//		int Mul(int left, int right)
//		{
//			return left * right;
//		}
//	}
//}
//printf("%d\n", N2::N3::a);  //在主函数中进行调用


//using N::b;  //相当于是全局变量，如果这个时候再定义一个int b; 那么就会出错了
//int main()
//{
//	printf("%d\n", N::a);
//	printf("%d\n", b);
//}
////优点是使用方便，缺陷是容易引起冲突(上述所示，int b);
////如果冲突了，也很好解决，再变量的前面八命名空间的名称再加上就可以了。


//#include<iostream>
//using namespace std;
//int main()
//{
//	//C语言中是不会对printf函数进行语法检测的
//	//printf("%d %d %d", 10);    //编译器是不会报错的
//	//这是完全可以通过编译的，只是会有警告
//	//警告来自于后两个参数是未知的
//	//使用printf还有一个不太好的点就是
//	//要输出什么类型的数据，这个格式控制符一定要给对，而且需要我们自己来给出
//	//要记住很多种格式，很容易出错
//	//所以再C++中我们使用cout
//	cout << "change world" << endl;
//	cout << 10 << " " << 12.34 << " " << 'a' << endl;
//	//不用在乎所输出的东西的类型是什么
//	return 0;
//}


//#include <iostream>
//using namespace std;
//int main()
//{
//	int a;
//	double b;
//	char c;
//	cin >> a;
//	cin >> b >> c;
//	cout << a << endl;
//	cout << b << " " << c << endl;
//	return 0;
//}


//void Test(int a = 10)   //跟的是一个默认值，好处就是主函数里面不用传参了
////如果用户再调用函数的同时进行了传参操作，那么使用的就是用户所传进去的参数
//{
//	cout << a << endl;
//}
//int main()
//{
//	Test();
//	Test(100);
//	return 0;
//}


////缺省参数的分类
////全缺省参数和半缺省参数
//void TestFunc(int a = 1, int b = 2, int c = 3)
//{
//	//所有参数都有缺省值称为全缺省参数
//	cout << a << ' ' << b << ' ' << c << ' ' << endl;
//}
//
////半缺省参数
////void TestFunc2(int a=1,int b=2,int c)   
////无法通过编译，把b的值拿掉，也无法通过编译
////只有把a的值拿掉，才能通过编译
////a和b都拿掉，有c也是可以的
////得出规律，注意：半缺省参数只能从右往左一次给出
//void TestFunc2(int a, int b, int c = 3)  //可以通过编译
//{
//	//部分参数带有缺省值
//	cout << a << ' ' << b << ' ' << c << ' ' << endl;
//}
//int main()
//{
//	//全缺省
//	TestFunc();  //打印 1 2 3
//	TestFunc(10);  //打印 10 2 3 
//	TestFunc(10, 20);  //打印10 20 3
//	TestFunc(10, 20, 30);  //打印10 20 30
//
//	//半缺省
//	TestFunc2(10, 20);
//	TestFunc2(10, 20, 30);
//
//	return 0;
//}


//void TestFunc(int a = 20);
//
//void TestFunc(int a = 20)
//{
//
//}
////这样子的代码就会出错，原因在于如果两个位置同时来给的话，可能会给的不一样
////可能就会说不清了，给在声明的位置会比较好一些，因为有时候需要用到第三方库，要给出函数声明才能使用，而且如果定义的参数的初值不一样，编译器就会混乱；缺省参数值只能是常量或全局变量
//int main()
//{
//	return 0;
//}


//int Add(int left, int right)
//{
//	return left + right;
//}
//
//double Add(double left, double right)
//{
//	return left + right;
//}
////参数列表不一样
////称其为函数重载
////调用的时候，调用那种的，就用哪种的
////编译器在编译的时候要进行参数类型的推演，他要确定你所传的参数到底是什么类型的
//int main()
//{
//	Add(1, 2);
//	Add(1.2, 3.4);  //编译是可以通过编译的，但是计算的值是不对的
//	//c语言是不允许重名的函数的
//	return 0;
//}


//void TestFunc()
//{
//
//}
//
//void TestFunc(int a)
//{
//
//}
////上面两个函数形成了重载
//int main()
//{
//	return 0;
//}
//
//void TestFunc(double a)
//{
//
//}
//
//void TestFunc(int a)
//{
//
//}
////上面两个函数形成了重载
//int main()
//{
//	return 0;
//}
//
//void TestFunc(double a, int b)
//{
//
//}
//
//void TestFunc(int a, double b)
//{
//
//}
////上面两个函数形成了重载
//int main()
//{
//	return 0;
//}