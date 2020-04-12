//#include<iostream>  //用cout输出的时候需要用到这个头文件
//using namespace std;   //使用命名空间std ，输入输出需要用到
//int main()
//{
//	cout << "This is a C++ progrma" << endl;   //用C++的方法输出一行
//	return 0;
//}
//C++对C的增强，表现在两个方面
//在原来面向过程的机制基础上，对C语言的功能做了不少扩充
//增加了面向对象的机制

/*
1.标准C++规定main函数必须声明为int型，即此主函数返回一个整形的函数值
return 0是向系统返回0，如果程序不能正常执行，则自动向系统返回一个非零值(一般来说是-1)
2.在C++程序中，可以使用两种注释方法，一种是//... 一种是/*...*/
/*
以//开头的注释可以不单独占一行，他是出现在语句之后的
C++中，一般使用cout进行输出，cout是C++系统定义的对象名，称为输出流对象
C++系统将cout的内容输出到系统指定的设备，一般是显示器中，C++同样支持使用printf函数进行输出
cout需要用到#include<iostream>和using namespace std;
按照C++所提供的标准，由系统提供的头文件不带.h后缀
using namespace std 意思是使用命名空间
*/



//求两个数的和
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a, b;
//	cin >> a >> b ;
//	int c = 0;
//	c = a + b;
//	cout << c << endl;
//	return 0;
//}

/*
与cout相似，cin是C++系统定义的输入流对象，其作用是从输入设备中提取数据送放输入流
endl的作用是换行
*/


//求两个数中的较大的数组
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	int c = 0;
//	c = a > b ? a : b;
//	cout << c << endl;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int MAX(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	int c = MAX(a, b);
//	cout << c << endl;
//	return 0;
//}


////下来举一个包含类和对象的简单程序，目的是初步了解C++是怎样体现面向对象程序设计方法的。
//#include<iostream>
//using namespace std;
//class Student   //声明一个类，类的名字是Student
//{
//private:   //以下为类中的私有成员
//	int num;
//	int score;
//public:
//	void setdata()   //定义公用的函数setdata
//	{
//		cin >> num;
//		cin >> score;
//	}
//	void dispaly()     ////定义公用的函数dispaly
//	{
//		cout << "num=" << num << endl;
//		cout << "score=" << score << endl;
//
//	};
//};
//Student std1, std2;
//int main()
//{
//	std1.setdata();
//	std2.setdata();
//	return 0;
//}

/*
class是声明类的时候必须要使用的关键字，如同声明结构体必须要使用struct一样。
在C语言的结构体中，只能包含数据成员，而C++的类中，可以包含两种成员，也就是数据和函数
称为数据成员和函数成员
*/
/*
C++中，把一组数据和有权调用这些数据的函数封装在一起，组成一种称为类的数据结构，如上面的程序，
变量num和score和两个成员函数组成了一个名为Student的类，成员函数是用来对数据成员进行操作的
一个类是由一批数据和对其操作的函数组成的。
*/
/*
类可以体现数据的封装性和信息隐蔽，分为公有的：public和私有的：private
凡是被指定成共有的数据或者函数，既可以被本类得成员函数调用，也可以被类外的语句所调用
被指定为私有的成员，只能被改类中的函数所调用(友元类除外)
这样的目的是为了对某些数据进行保护
*/
/*
std1和std2是类类型的变量
*/


//C++对C的扩充
//1.用cin和cout
/*
cout输出必须和<<一起使用，<<是C语言中作为位运算符的左移操作符，在C++中赋予其新的含义
\n，也可以不使用了，可以是使用endl，endl为end of line，表示结束一行
同时可以在一个输出语句中使用多个<<，这也是同样支持的
*/
//例如
//for (int i = 0; i < 3; i++)
//{
//	cout << "count=" << i << endl;
//  cout可以输出各种类型的数据
//}

/*
C++中的输入输出的好处就是不用记忆各种输入输出的数据类型，方便了很多
*/

/*
如果要指定输出所占的列数，可以用控制符setw进行设置
如stew(5)的作用是为其后面一个输出项预留5列的空间，如果输出的数据项长度不足5，则数据向右对齐
setw的头文件为iomanip
*/

/*
C语言变量的定义必须要放在执行语句之前，而C++变量的定义可以在任意的位置 
*/

/*
C++为流输入输出提供了一些格式控制的功能，dec实际值，hex十六进制，oct八进制
*/