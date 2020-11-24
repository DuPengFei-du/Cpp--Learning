#define _CRT_SECURE_NO_WARNINGS 1



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


using namespace N;
int main()
{
	printf("%d\n", N::a);
	printf("%d\n", b);
	Add(10, 20);
	return 0;
}
//使用方便，但是冲突就会多


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
{

}

void TestFunc(int a)
{

}
上面两个函数形成了重载
int main()
{
	return 0;
}

void TestFunc(double a)
{

}

void TestFunc(int a)
{

}
//上面两个函数形成了重载
int main()
{
	return 0;
}

void TestFunc(double a, int b)
{

}

void TestFunc(int a, double b)
{

}
//上面两个函数形成了重载
int main()
{
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


int& Add(int left, int right)  //按照引用的方式返回
{
	int ret = left + right;
	return ret;
}
int main()
{
	int a = 10;
	int b = 20;
	int& retVal = Add(a, b);
	Add(100, 200);   //按理来说，这一步并没有返回值来接收
	//但是通过监视来看，可以看书retVal的值最后还是变成300了
	//原因在于retVal是ret的别名，一直是空间的别名，空间没有发生变化，所以
	//相当于是自动变化。
	return 0;
}
//但是实际上，这一段代码是有问题的，ret除了函数的作用域只会，就会把空间归还给操作系统了，那么retValue还在引用ret，就相当于是在引用无效的空间


int main()
{
	const int a = 10;
	//int array[a];
	int* pa = (int*)& a;

	*pa = 100;
	cout << a << endl;
	cout << *pa << endl;
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


// 此处代码编译失败，auto不能作为形参类型，因为编译器无法对a的实际类型进行推导
void TestAuto(auto a)
{
	//就算给一个缺省参数也是不可以的。
}


void TestFor()
{
	int array[] = { 1, 2, 3, 4, 5 };
	for (auto& e : array)
	{
		e *= 2;
	}
	for (auto e : array)
	{
		cout << e << endl;
	}
	return 0;
}


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


#include <iostream>
using namespace std;
int main()
{
	const int SIZE = 5;
	int numbers[SIZE];
	//Get values for the array.
	for (int& val : numbers)
	{
		cout << "Enter an integer value: ";
		cin >> val;
	}
	// Display the values in the array.
	cout << "\nHere are the values you entered: \n";
	for (int val : numbers)
	{
		cout << val << " ";
	}
	cout << endl;
	return 0;
}


void TestFor()
{
	int array[] = { 1, 2, 3, 4, 5 };
	for (auto& e : array)
	{
		e *= 2;
	}
	for (auto e : array)
	{
		cout << e << endl;
	}
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


#include<iostream>
using namespace std;
struct Student
{
	char name[20];
	int age;
	char gender;
};
//再C语言中的结构体，是只能放数据，不能放函数的，如果再C语言的前提下
//给结构体中放函数，那么编译的时候是会出错的，之能放数据
//因为C语言是面向过程的，数据和方法是分离开的
//但是在C++中，struct声明的结构体，不仅可以放数据还是可以放函数的
//也就是说C++把这些数据和操作这些数据的方法绑在一起了
int main()
{
	return 0;
}


#include<iostream>
#include<string>
using namespace std;
struct Student
{
	void InitStudent(const char* name, int age, const char* gender)
	{
		strcpy(_name, name);
		_age = age;
		strcpy(_gender, gender);
	}

	void PrintStudnet()
	{
		cout << _name << "-" << _age << "-" << _gender << endl;
	}

	char _name[20];
	int _age;
	char _gender[3];
};
int main()
{
	Student s1, s2, s3;  //学生对象(学生实体)
	s1.InitStudent("wq", 35, "男");
	s1.PrintStudnet();

	s2.InitStudent("ouhou", 5, "女");
	s2.PrintStudnet();

	s3.InitStudent("aha", 15, "男");
	s3.PrintStudnet();

	return 0;
}


class Student
{
	//成员函数(也成为行为)
	void InitStudent(const char* name, int age, const char* gender)
	{
		strcpy(_name, name);
		_age = age;
		strcpy(_gender, gender);
	}

	void PrintStudnet()
	{
		cout << _name << "-" << _age << "-" << _gender << endl;
	}

	//数据(也成为属性)
	char _name[20];
	int _age;
	char _gender[3];
};


class Person
{
public:
	void PrintPersonInfo();
private:
	char _name[20];
	char _gender[3];
	int _age;
};
// 这里需要指定PrintPersonInfo是属于Person这个类域
void Person::PrintPersonInfo()
{
	cout << _name << " "_gender << " " << _age << endl;
}


class A1
{
public:
	void f1()
	{

	}
private:
	int _a;
};
// 类中仅有成员函数
class A2
{
public:
	void f2()
	{

	}
};
// 类中什么都没有---空类
class A3
{

};


#include<iostream>
#include<string.h>
using namespace std;
class Date
{
public:
	void Display()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}
	void SetDate(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}
private:
	int _year; // 年
	int _month; // 月
	int _day; // 日
};
int main()
{
	Date d1, d2;
	d1.SetDate(2018, 5, 1);
	d2.SetDate(2018, 7, 1);
	d1.Display();
	d2.Display();
	return 0;
}


class Student
{
public:
	//this:  Student* const   这是this指针的类型，虽然this指向的内容是可以修改的，但是this本身是不可以被修改的
	void InitStudent(char* _name, int age, char* gender)
	{
		//this = nullptr;
		strcpy(this->_name, _name);
		_age = age;
		strcpy(_gender, gender);
	}

	void PrintStudnet()
	{
		cout << _name << "-" << _age << "-" << _gender << endl;
	}

private:
	char _name[20];
	int _age;
	char _gender[3];
};
int main()
{
	Student s1;
	s1.InitStudent("Peter", 35, "男");
	s1.PrintStudnet();

	Student s2;
	s2.InitStudent("jingjing", 36, "女");
	s2.PrintStudnet();
	return 0;
}


//用C语言的方式进行模拟
#include<iostream>
#include<string.h>
using namespace std;
struct Student
{
	char _name[20];
	int _age;
	char _gender[3];
};

void StudentInit(Student* ps, char* name, int age, char* gender)
{
	strcpy(ps->_name, name);
	ps->_age = age;
	strcpy(ps->_gender, gender);
}

void PrintStudent(Student* ps)
{
	printf("%s %d %s", ps->_name, ps->_age, ps->_gender);
}

int main()
{
	return 0;
}


class A
{
public:
	void TestFunc1()
	{
		cout << this << endl;
		this->_a = 20;   //如果没有这句话的话，下面的代码是可以正常通过编译的
		cout << "TestFunc()" << endl;
	}

	void TestFunc2()
	{
		this->_a = 10;
	}

protected:
	int _a;
};


int g_a = 10;

int main()
{
	cout << g_a << endl;
	A* ps = nullptr;
	ps->TestFunc1();// TestFunc1(ps)
	return 0;
}