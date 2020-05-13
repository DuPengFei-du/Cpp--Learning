//// F.h
//#include <iostream>
//using namespace std;
//inline void f(int i);
//// F.cpp
//#include "F.h"
//void f(int i)
//{
//	cout << i << endl;
//}
//// main.cpp
//#include "F.h"
//int main()
//{
//	f(10);
//	return 0;
//}
//// 链接错误：main.obj : error LNK2019: 无法解析的外部符号 "void __cdecl f(int)" (?
////f@@YAXH@Z)，该符号在函数 _main 中被引用比
////inline修饰的类似具有文件作用域，也就是说只能在当前文件内适用，链接属性只存在于自己的当前文件内部，类似于static,所以一般不把声明和定义分开。


//#include<iostream>
//using namespace std;
//int main()
//{
//	auto a = 10;  //那将来就是整形 (编译器需要去推演a的类型)
//	auto b = 12.34;   ////那将来就是浮点形
//	auto c = a + b;   //编译器自己去解决
//	cout << typeid(a).name() << endl;
//	cout << typeid(b).name() << endl;
//	cout << typeid(c).name() << endl;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	int a = 10;
//	auto pa1 = &a;
//	auto pa2 = &a;
//	auto& ra = a;
//	cout << typeid(pa1).name() << endl;
//	cout << typeid(pa2).name() << endl;
//	cout << typeid(ra).name() << endl;
//	return 0;
//}
////打印的结果p1,p2都为int * ,ra打印的结果为int


//#include<iostream>
//using namespace std;
//int main()
//{
//	auto a = 1, b = 2;
//	auto c = 12, d = 12.34;  //这一行就会出错，因为只有一个auto，到底给成什么乐星
//	//这是编译器无法确定的
//}


//void TestFor()
//{
//	int array[] = { 1, 2, 3, 4, 5 };
//	for (int i = 0; i < sizeof(array) / sizeof(array[0]); ++i)
//	{
//		array[i] *= 2;
//	}
//	for (int* p = array; p < array + sizeof(array) / sizeof(array[0]); ++p)
//	{
//		cout << *p << endl;
//	}
//}


//void TestFor()
//{
//	int array[] = { 1, 2, 3, 4, 5 };
//	for (auto& e : array)
//	{
//		e *= 2;
//	}
//	for (auto e : array)
//	{
//		cout << e << endl;
//	}
//	return 0;
//}


//void TestPtr()
//{
//	int* p1 = NULL;
//	int* p2 = 0;
//	// ……
//}


//void f(int)
//{
//	cout << "f(int)" << endl;
//}
//void f(int*)
//{
//	cout << "f(int*)" << endl;
//}
//int main()
//{
//	f(0);
//	f(NULL);
//	f((int*)NULL);
//	return 0;
//}


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
//#include<string>
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
//// 这里需要指定PrintPersonInfo是属于Person这个类域
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
//class Student
//{
//public:
//	//this:  Student* const   这是this指针的类型，虽然this指向的内容是可以修改的，但是this本身是不可以被修改的
//	void InitStudent(const char* _name, int age, const char* gender)
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


//用C语言的方式进行模拟
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


///*
//大致过程：
//1. 识别类名
//2. 识别类中成员变量
//3. 识别类中的成员函数&改写
//*/
//class Student
//{
//public:
//	/*
//	void InitStudent(Student* const this, char* name, int age, char* gender)
//	{    看起来成员函数有三个参数，实际上是有四个参数的，因为还有一个this指针
//		strcpy(this->_name, name);
//		this->_age = age;
//		strcpy(this->_gender, gender);
//	}
//	*/
//	void InitStudent(char* _name, int age, char* gender);
//	// 	{
//	// 		strcpy(this->_name, _name);    在编译器中实际的样子
//	// 		_age = age;  
//	// 		strcpy(_gender, gender);
//	// 	}
//
//	void TestFunc(...);
//	// 	{
//	// 	}
//
//		/*
//		// this是编译器自己维护(不是由我们来维护的)
//		void PrintStudnet(Student* const this)
//		{
//			cout << this->_name << "-" << this->_age << "-" << this->_gender << endl;
//		}
//		*/
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
//	s1.TestFunc();
//	s1.TestFunc(10);
//	s1.TestFunc(10, 20);
//	// Student::InitStudent(&s1, "Peter", 35, "男")
//	s1.InitStudent("Peter", 35, "男");
//	// Student::PrintStudnet(&s1);
//	s1.PrintStudnet();
//
//	Student s2;
//	s2.InitStudent("jingjing", 36, "女");
//	s2.PrintStudnet();
//	return 0;
//}


//class base1
//{
//private:
//	char a;
//	int b;
//	double c;
//};
//class base2
//{
//private:
//	char a;
//	double b;
//	int c;
//};