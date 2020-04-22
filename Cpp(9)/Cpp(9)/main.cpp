//类和结构体的异同

/*
C++增加了class类型后，仍然保留了结构体类型，而且把他的功能也拓展了，C++
允许用struct来声明一个类。例如可以将前面故拿剪子class声明的类类型改为用关键字struct
*/
struct Student
{
private:
	int num;
	char name[20];
	char sex;
public:
	void dispaly()
	{

	}
};
Student std1, std2;

/*
C++必须兼容C，使得大量过去编写的C程序能够不加修改的在C++的环境下进行使用
为了使结构体也具有封装的特性，C++不只是简单的继承C的结构体，而是使得它具有类的特点
以便于向面向对象的程序设计。用struct声明的结构体类型实际上也就是类了
*/

/*
但是，用struct和class声明的类还是有所去别的，用struct声明的类，如果对其成员不做private和public的
处理，那么默认其是public的，如果向分别指定私有成员和共有成员的话，则应该用private和public进行
显示的声明。而用class定义的类，如果不做private和public处理得话，那么默认其是私有的，如果想分别声明
那也要显示的来声明
*/


//类的成员函数
/*
类的成员函数(简称类函数)是函数的一种，它的用法和作用和一般的函数基本山是一样的
他也有返回值和函数类型，它与一般的函数的区别只是:它属于一个类的成员
出现在类体中。它可以被指定为private或者public的或者protected
在使用函数时，需要注意它的权限(它能否被调用)以及他的作用域(它能在什么范围被使用)
例如私有的成员函数只能被本类中的其他成员函数调用，而不能被类外调用
成员函数可以可以访问本类中的任何成员，包括私有的成员和共有的成员
*/


//在类外定义成员函数
/*
前面看到的成员函数是在类体中定义的，也可以在类体中止对成员函数进行声明
而在类的外面对成员函数进行定义，比如
*/
class Student
{
public:
	void dispaly();
private:
	int num;
	string name;
	char sex;
};
void Student::dispaly()
{
	//在类外进行成员函数的定义
	//内部写函数体的内容
}

//注意：
/*
在类体中直接定义函数的时候，不需要在函数名前面加上类名，因为函数属于哪一个类时不言而喻的
但是成员函数如果在类外进行定义的时候，那么成员函数名的前面就需要加上类的名字，用来
限定这个函数是属于哪一个类的
*/


//类函数必须先在类体中进行函数原型的声明，然后再类外进行定义
//也就是说类体的位置应在函数定义之前，否则话就会编译错误