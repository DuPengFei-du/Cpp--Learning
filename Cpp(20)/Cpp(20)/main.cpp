//利用析构函数进行清理工作

/*
析构函数也是一个特殊的成员函数，他的作用和构造函数相反，他的名字是在
类的名称前面加上一个~符号，在C++中，~是位取反操作符，从这里也可以看出
构造函数和析构函数是两个功能相反的函数
当对象的生命周期结束的时候，会自动调用析构函数
出现以下几种情况，会自动调用析构函数：
1.如果在一个函数中定义了一个对象(假设是自动局部变量)，当这个函数调用结束的时候
对象应该释放，在对象释放前就会自动执行析构函数

2.静态局部对象在函数调用结束时对象并不释放，因此也不会调用析构函数
只在main函数结束或调用exit函数结束程序时，才调用static局部对象的析构函数

3.如果定义了一个全局的对象，则在程序流程离开作用域时，调用该全局
的对象的析构函数

4.如果用new运算符动态地建立了一个对象，当用delete运算符释放这个对象
的时候，先调用该对象的析构函数

*/


/*
析构函数的作用并不是删除对象，而是在撤销对象占用的内存之前完成一些清理的工作，使得这部分内存可以
被程序分配给新的对象使用
只要对象的生命周期结束，就会自动执行析构函数来完成这些工作

析构函数不返回任何值，没有函数类型，也没有函数参数，因为函数是没有参数的
所以析构函数无法被重载

一个类可以有多个构造函数，但是只能有一个析构函数

如果用户没有自己定义析构函数，那么编译器会自动生成一个析构函数
但是只是徒有析构函数的名称，实际上什么操作都不进行
想让析构函数完成任何工作，都必须在定义的析构函数中指定
*/


//#include<iostream>
//#include<string.h>
//using namespace std;
//class Student
//{
//public:
//	Student(int n, string nam, char s)   //定义有参数的构造函数
//	{
//		num = n;
//		name = nam;
//		sex = s;
//	}
//	~Student()
//	{
//		cout << "析构函数被调用" << endl;
//	}
//	void display()
//	{
//		cout << "num=" << num << endl;
//		cout << "name=" << name << endl;
//		cout << "sex=" << sex << endl << endl;
//	}
//private:
//	int num;
//	char name[10];
//	char sex;
//};
//int main()
//{
//	return 0;
//}


//调用构造函数和析构函数的顺序

/*
 在使用构造函数和析构函数的时候
 需要特别注意他们的调用时间和调用顺序

 在一般情况下，构造函数和析构函数的调用次序相反，也就是说
 最先被调用的构造函数，他所对应的析构函数是最后才调用的，而
 最后被调用的构造函数，它所对应的析构函数总是最先被调用
 也就是说
 先构造的后析构，后构造的先析构
*/


/*
但是，也不是说所有情况下都是按着这个原则来进行处理的
在学C的时候介绍了作用域和存储类别的概念，这些概念对于对象也是同样适用的
对象可以在不同的作用域中定义，可以有不同的存储类别，这些会影响调用
构造函数和析构函数的时机
*/


//归纳一下在什么时候调用构造函数和析构函数


/*
1.如果在全局范围中定义对象(也就是说在所有函数范围之外定义对象)
那么它的构造函数在本文件模块中的所有哈纳树(包括main)函数之前调用
但是如果一个程序包括多个文件，而在不同的文件中都定义了全局对象
则这些对象的构造函数执行顺序是不确定的
当main函数执行完毕或者调用exit函数时，执行析构函数

2.如果定义的是局部自动变量(例如在函数中定义对象)则在建立对象的时
调用对象的构造函数，如果对象所在的函数被多次调用，则每次建立对象时都
要调用构造函数

3.如果在函数中定义静态局部变量，则只在程序第一次调用函数时
执行一次构造函数，在调用函数结束时对对象并不释放，因此也不用调用析构函数
只有当main函数执行完毕或者调用exit函数时，执行析构函数
*/


//#include<iostream>
//using namespace std;
//struct Student
//{
//	char name[20];
//	int age;
//	char gender;
//};
////再C语言中的结构体，是只能放数据，不能放函数的，如果再C语言的前提下
////给结构体中放函数，那么编译的时候是会出错的，之能放数据
////因为C语言是面向过程的，数据和方法是分离开的
////但是在C++中，struct声明的结构体，不仅可以放数据还是可以放函数的
////也就是说C++把这些数据和操作这些数据的方法绑在一起了
//int main()
//{
//	return 0;
//}


//#include<iostream>
//#include<string.h>
//using namespace std;
//struct Student
//{
//	void InitStudent(const char* name, int age, const char* gender)
//	{
//		strcpy(_name, name);
//		_age = age;
//		strcpy(_gender, gender);
//	}
//
//	void PrintStudnet()
//	{
//		cout << _name << "-" << _age << "-" << _gender << endl;
//	}
//
//	char _name[20];
//	int _age;
//	char _gender[3];
//};
//int main()
//{
//	Student s1, s2, s3;  //学生对象(学生实体)
//	s1.InitStudent("wq", 35, "男");
//	s1.PrintStudnet();
//
//	s2.InitStudent("ouhou", 5, "女");
//	s2.PrintStudnet();
//
//	s3.InitStudent("aha", 15, "男");
//	s3.PrintStudnet();
//
//	return 0;
//}


//class Student
//{
//	//成员函数(也成为行为)
//	void InitStudent(const char* name, int age, const char* gender)
//	{
//		strcpy(_name, name);
//		_age = age;
//		strcpy(_gender, gender);
//	}
//
//	void PrintStudnet()
//	{
//		cout << _name << "-" << _age << "-" << _gender << endl;
//	}
//
//	//数据(也成为属性)
//	char _name[20];
//	int _age;
//	char _gender[3];
//};


//#include<iostream>
//#include<string>
//using namespace std;
//class Student
//{
//	//成员函数(也成为行为)
//public:
//	void InitStudent(const char* name, int age, const char* gender)
//	{
//		strcpy(_name, name);
//		_age = age;
//		strcpy(_gender, gender);
//	}
//
//	void PrintStudnet()
//	{
//		cout << _name << "-" << _age << "-" << _gender << endl;
//	}
//private:
//	//数据(也成为属性)
//	char _name[20];
//	int _age;
//	char _gender[3];
//};
//int main()
//{
//	Student s1, s2, s3;  //学生对象(学生实体)
//	s1.InitStudent("wq", 35, "男");
//	s1.PrintStudnet();
//
//	s2.InitStudent("nana", 5, "女");
//	s2.PrintStudnet();
//
//	s3.InitStudent("aha", 15, "男");
//	s3.PrintStudnet();
//
//	return 0;
//}


//class Person
//{
//public:
//	void PrintPersonInfo();
//private:
//	char _name[20];
//	char _gender[3];
//	int _age;
//};
// 这里需要指定PrintPersonInfo是属于Person这个类域
//void Person::PrintPersonInfo()
//{
//	cout << _name << " "_gender << " " << _age << endl;
//}


//class A1
//{
//public:
//	void f1()
//	{
//
//	}
//private:
//	int _a;
//};
//// 类中仅有成员函数
//class A2
//{
//public:
//	void f2()
//	{
//
//	}
//};
//// 类中什么都没有---空类
//class A3
//{
//
//};


//#include<iostream>
//#include<string.h>
//using namespace std;
//class Date
//{
//public:
//	void Display()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//	void SetDate(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//private:
//	int _year; // 年
//	int _month; // 月
//	int _day; // 日
//};
//int main()
//{
//	Date d1, d2;
//	d1.SetDate(2018, 5, 1);
//	d2.SetDate(2018, 7, 1);
//	d1.Display();
//	d2.Display();
//	return 0;
//}


//class Student
//{
//public:
//	//this:  Student* const   这是this指针的类型，虽然this指向的内容是可以修改的，但是this本身是不可以被修改的
//	void InitStudent(char* _name, int age, char* gender)
//	{
//		//this = nullptr;
//		strcpy(this->_name, _name);
//		_age = age;
//		strcpy(_gender, gender);
//	}
//
//	void PrintStudnet()
//	{
//		cout << _name << "-" << _age << "-" << _gender << endl;
//	}
//
//private:
//	char _name[20];
//	int _age;
//	char _gender[3];
//};
//int main()
//{
//	Student s1;
//	s1.InitStudent("Peter", 35, "男");
//	s1.PrintStudnet();
//
//	Student s2;
//	s2.InitStudent("jingjing", 36, "女");
//	s2.PrintStudnet();
//	return 0;
//}


////用C语言的方式进行模拟
//#include<iostream>
//#include<string.h>
//using namespace std;
//struct Student
//{
//	char _name[20];
//	int _age;
//	char _gender[3];
//};
//
//void StudentInit(Student* ps, char* name, int age, char* gender)
//{
//	strcpy(ps->_name, name);
//	ps->_age = age;
//	strcpy(ps->_gender, gender);
//}
//
//void PrintStudent(Student* ps)
//{
//	printf("%s %d %s", ps->_name, ps->_age, ps->_gender);
//}
//
//int main()
//{
//	return 0;
//}


/////*
////大致过程：
////1. 识别类名
////2. 识别类中成员变量
////3. 识别类中的成员函数&改写
////*/
////
////#if 0
////class Student
////{
////public:
////	/*
////	void InitStudent(Student* const this, char* name, int age, char* gender)
////	{    看起来成员函数有三个参数，实际上是有四个参数的，因为还有一个this指针
////		strcpy(this->_name, name);
////		this->_age = age;
////		strcpy(this->_gender, gender);
////	}
////	*/
////	void InitStudent(char* _name, int age, char* gender);
////	 	{
////	 		strcpy(this->_name, _name);    在编译器中实际的样子
////	 		_age = age;  
////	 		strcpy(_gender, gender);
////	 	}
////
////	void TestFunc(...);
////	 	{
////	 	}
////
////		/*
////		 this是编译器自己维护(不是由我们来维护的)
////		void PrintStudnet(Student* const this)
////		{
////			cout << this->_name << "-" << this->_age << "-" << this->_gender << endl;
////		}
////		*/
////	void PrintStudnet()
////	{
////		cout << _name << "-" << _age << "-" << _gender << endl;
////	}
////
////private:
////	char _name[20];
////	int _age;
////	char _gender[3];
////};
////int main()
////{
////	Student s1;
////	s1.TestFunc();
////	s1.TestFunc(10);
////	s1.TestFunc(10, 20);
////	 Student::InitStudent(&s1, "Peter", 35, "男")
////	s1.InitStudent("Peter", 35, "男");
////	 Student::PrintStudnet(&s1);
////	s1.PrintStudnet();
////
////	Student s2;
////	s2.InitStudent("jingjing", 36, "女");
////	s2.PrintStudnet();
////	return 0;
////}