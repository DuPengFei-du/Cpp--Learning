#include<iostream >
using namespace std;

//void Swap(int a, int b)
//{
//	cout << &a << " " << &b << " " << endl;
//	int temp = a;
//	a = b;
//	b = temp;
//	//交换的是形参的内容，不是实参的内容
//}
//
//void Swap(int *pa, int *pb)
//{
//	cout << &pa << " " << &pb << " " << endl;
//	int temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//
////两个swap形成了重载
//int main()
//{
//	int a = 1;
//	int b = 2;
//	cout << &a <<" "<< &b << " " << endl;
//	//Swap(a, b);  //如果只是值传递的话，是不行的
//	Swap(&a, &b);
//	cout << a << " " << b << " " << endl;
//
//}


//int main()
//{
//	int a = 10;
//	//int& ra;  //这样是无法通过编译的，因为引用类型的变量没有进行初始化操作
//	//这样是不行的
//	int& ra = a;
//	//ra是a的别名，也就是说，ra和a是同一个东西
//	//如何看出ra和a是一个东西，打印他们的地址，就可以了
//	cout << &ra << " " << &a << " " << endl;
//	//所打印的地址是一样的
//	//那么，我们给ra进行赋值的话，a的值也会发生改变
//	ra = 20;
//	cout << a << endl;  //打印的a的值也为20
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	long& ra = a;
//	return 0;
//	//这样子的代码是不能通过编译的，虽然说，long和int之间可以进行
//	//隐式的类型转换，但是在引用这一方面来说，是不能引用的
//}


//int main()
//{
//	int a = 10;
//	int& ra = a;  //ra是a的别名
//	cout << &ra << "=" << &a << endl;
//	ra = 20;  //改变了ra的同时，那么a的值也是会发生改变的
//
//	int& rb = a;  //rb也在引用a ，一个变量可以有多个引用
//	rb = 30;  //那么修改rb的同时，ra和a也都发生了改变
//	
//	int& rra = ra;
//	rra = 40;   //那么都会发生改变
//	//因为用的都是同一块空间
//
//	cout << a << " " << ra << " " << rb << " " << rra << " " << endl;
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int& ra = a;  //ra是a的别名
//	cout << &ra << "=" << &a << endl;
//	ra = 20;  //改变了ra的同时，那么a的值也是会发生改变的
//
//	int& rb = a;  //rb也在引用a ，一个变量可以有多个引用
//	rb = 30;  //那么修改rb的同时，ra和a也都发生了改变
//
//	int& rra = ra;
//	rra = 40;   //那么都会发生改变
//	//因为用的都是同一块空间
//
//	cout << a << " " << ra << " " << rb << " " << rra << " " << endl;
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int& ra = a;
//	int b = 20;
//	ra = b;  //不是引用的操作，而是再进行赋值的操作
//	//不能再让rb去引用其他的变量了
//	return 0;
//}


//int main()
//{
//	const int a = 10;   //在C语言中，const所修饰的量其实还是一个变量，只是这个变量不能被修改
//	//但是，在C++中，const所修饰的量，就已经是一个常量了，不能被修改
//	//同时具有宏常量的属性
//	//如何知道在C++中，const所修饰的量是常量，就用数组去检测，如下所示：
//	//int array[a];  //看是否可以通过编译
//
//
//	//int& ra = a;  //ra的值是可以修改的
//	//此时，是无法通过编译的，因为a是const类型的
//	//而ra是普通类型的
//	//那么，如何修改，才能让代码通过编译呢？
//	//只需要在前面加上const 就可以了
//	const int& ra = a;  //称为const类型的引用，或者常引用
//
//	double d = 12.34;
//	const int& rd = d;  //(居然可以通过编译？？)  不加const是不能通过编译的 
//	cout << &rd << " " << &d << " " << endl;
//	//但是打印的地址是不一样的，说明rd引用的就不是d
//	//原因是，编译器会创建一个临时变量，吧double整形的部分放在临时变量中
//	//让rd引用临时变量，而不是d，临时变量是编译器创建的
//	//我们不知道他的名字也不知道他的地址，所以我们是无法对他进行任何修改的
//	//既然改不成，那就说明这个空间本来就具有常性
//	//所以加上const就可以通过编译了
//	return 0; 
//}


//void Swap(int& ra, int& rb)    //ra是a的别名，rb是b的别名
//{
//	int temp = ra;
//	ra = rb;
//	rb = temp;
//	//通过交换形参，也就相当于是交换实参了
//}
//int main()
//{
//	int a = 1;
//	int b = 2;
//	Swap(a, b);
//	cout << a << " " << b << " " << endl;
//	return 0;
//}


//int& Add(int left, int right)  //按照引用的方式返回
//{
//	int ret = left + right;
//	return ret;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int& retVal = Add(a, b);
//	Add(100, 200);   //按理来说，这一步并没有返回值来接收
//	//但是通过监视来看，可以看书retVal的值最后还是变成300了
//	//原因在于retVal是ret的别名，一直是空间的别名，空间没有发生变化，所以
//	//相当于是自动变化。
//	return 0;
//}


//#include <time.h>
//struct A
//{
//	int a[10000];
//};
//void TestFunc1(A a)
//{
//	//值传递
//}
//void TestFunc2(A& a)
//{
//	//引用传递
//}
//void TestFunc3(A* a)
//{
//	//址传递
//}
//void TestRefAndValue()
//{
//	A a;
//   // 以值作为函数参数
//	size_t begin1 = clock();
//	for (size_t i = 0; i < 10000; ++i)
//		TestFunc1(a);
//	size_t end1 = clock();
//
//	// 以引用作为函数参数
//	size_t begin2 = clock();
//	for (size_t i = 0; i < 10000; ++i)
//		TestFunc2(a);
//	size_t end2 = clock();
//
//	//以地址为参数
//	size_t begin3 = clock();
//	for (size_t i = 0; i < 10000; ++i)
//		TestFunc3(&a);
//	size_t end3 = clock();
//
//	// 分别计算两个函数运行结束后的时间
//	cout << "TestFunc1(int)-time:" << end1 - begin1 << endl;
//	cout << "TestFunc2(int&)-time:" << end2 - begin2 << endl;
//	cout << "TestFunc3(int*)-time:" << end3 - begin3 << endl;
//
//}
//
//// 运行多次，检测值和引用在传参方面的效率区别
//int main()
//{
//	for (int i = 0; i < 10; ++i)
//	{
//		TestRefAndValue();
//	}
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	char c = 'c';
//	char& rc = c;
//	char* pc = &c;
//	cout << sizeof(rc) << endl;
//	cout << sizeof(pc) << endl;
//	return 0;
//}


//C语言中有宏常量和宏函数
//在C++中有const可以使用
//在C++中，const所修饰的量就已经是一个常量了，那么怎么去验证是常量呢？就可以用数组
//#include<iostream>
//using namespace std;
//int main()
//{
//	const int a = 10;
//	int array[a] = { 0 };  //是完全可以通过编译的,因为a是常量
//	return 0;
//}
//同时const还具有宏常量的属性(在预处理阶段就已经替换掉了)，const类型的替换
//发生在编译阶段，const类型的常量可以参与编译，安全性是比较高的。


//#include<iostream>
//using namespace std;
//int main()
//{
//	const int a = 10;
//	int* pa = (int*)& a;
//	*pa = 100;
//	cout << a << endl;
//	cout << *pa << endl;
//	return 0;
//}


//宏函数
//#include<iostream>
//using namespace std;
//#define MAX(a,b) (((a)>(b))?(a):(b))
//int main()
//{
//	int a = 10;
//	int b = 20;
//	cout << MAX(a, b) << endl;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//inline int Add(int left, int right)
//{
//	return left + right;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	cout << Add(a, b) << endl;    //替换发生在编译阶段
//	cout << Add(a, ++b) << endl;    //替换发生在编译阶段
//	//因为替换发生在编译阶段，所以他会参与到函数编译里面去，代码运行效率会比较高
//	//看有没有展开就看反汇编代码有没有直接调用这个函数就可以了
//	return 0;
//}


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


//#include<iostream>
//using namespace std;
//int main()
//{
//	auto a = 10;  //那将来就是整形
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
//  auto& ra = a;
//	cout << typeid(pa1).name() << endl;
//	cout << typeid(pa2).name() << endl;
//	cout << typeid(ra).name() << endl;
//	return 0;
//}


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