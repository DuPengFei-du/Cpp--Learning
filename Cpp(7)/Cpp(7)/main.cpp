//#include<iostream>
//using namespace std;
//int main()
//{
//	int a, b;
//	int c;
//	cin >> a >> b;
//	c = a + b;
//	cout << c << endl;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a, b;
//	int c;
//	cin >> a >> b;
//	c = Add(a,b);
//	cout << c << endl;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int MAX(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a, b;
//	int c;
//	cin >> a >> b;
//	c = MAX(a, b);
//	cout << c << endl;
//	return 0;
//}


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


//#include <iostream>
//using namespace std;
//
//// 第一个命名空间
//namespace first_space 
//{
//	void func() 
//	{
//		cout << "Inside first_space" << endl;
//	}
//}
//// 第二个命名空间
//namespace second_space 
//{
//	void func() 
//	{
//		cout << "Inside second_space" << endl;
//	}
//}
//int main()
//{
//	// 调用第一个命名空间中的函数
//	first_space::func();
//
//	// 调用第二个命名空间中的函数
//	second_space::func();
//
//	return 0;
//}


//可以使用 using namespace 指令，这样在使用命名空间时就可以不用在前面加上命名空间的名称。
//这个指令会告诉编译器，后续的代码将使用指定的命名空间中的名称。
//#include <iostream>
//using namespace std;
//
//// 第一个命名空间
//namespace first_space 
//{
//	void func() 
//	{
//		cout << "Inside first_space" << endl;
//	}
//}
//// 第二个命名空间
//namespace second_space 
//{
//	void func() 
//	{
//		cout << "Inside second_space" << endl;
//	}
//}
//using namespace first_space;
//int main()
//{
//	// 调用第一个命名空间中的函数
//	func();
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//// 第一个命名空间
//namespace first_space 
//{
//	void func() 
//	{
//		cout << "Inside first_space" << endl;
//	}
//	// 第二个命名空间
//	namespace second_space 
//	{
//		void func() 
//		{
//			cout << "Inside second_space" << endl;
//		}
//	}
//}
//using namespace first_space::second_space;
//int main()
//{
//	// 调用第二个命名空间中的函数
//	func();
//	return 0;
//}


//#include<iostream>
//using namespace std;
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
//int main()
//{
//	cout << N2::N3::a << endl;
//}


//int main()
//{
//	printf("%d\n", N1::a);
//	return 0;
//}
////缺陷就是使用起来有些麻烦，每次都要加上作用限定符


//using N::b;  //相当于是全局变量，如果这个时候再定义一个int b; 那么就会出错了
//int main()
//{
//	printf("%d\n", N::a);
//	printf("%d\n", b);
//}
////优点是使用方便，缺陷是容易引起冲突(上述所示，int b);
////如果冲突了，也很好解决，再变量的前面八命名空间的名称再加上就可以了。


//using namespace N;
//int main()
//{
//	printf("%d\n", N::a);
//	printf("%d\n", b);
//	Add(10, 20);
//	return 0;
//}
////使用方便，但是冲突就会多



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


//#include<iostream>
//using namespace std;
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


//缺省参数的分类
//全缺省参数和半缺省参数
void TestFunc(int a = 1, int b = 2, int c = 3)
{
	//所有参数都有缺省值称为全缺省参数
	cout << a << ' ' << b << ' ' << c << ' ' << endl;
}


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
//{}
//void TestFunc(int a = 0)
//{}
//int main()
//{
//	TestFunc(10);  //是可以通过编译的，会调用下面的哪个参数
//	TestFunc();    //是不会通过编译的
//	//对重载函数的调用不明确，第一个可以调用，第二个也可以调用
//	return 0;
//}