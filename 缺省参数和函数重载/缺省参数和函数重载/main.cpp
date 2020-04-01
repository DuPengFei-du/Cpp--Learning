#include<iostream>
using namespace std;

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


//缺省参数
//void Test(int a=10)   //跟的是一个默认值，好处就是主函数里面不用传参了
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
//void TestFunc2(int a, int b, int c=3)  //可以通过编译
//{
//	//部分参数带有缺省值
//	cout << a << ' ' << b << ' ' << c << ' ' << endl;
//}
//int main()
//{
//	//全缺省
//	TestFunc();  //打印 1 2 3
//	TestFunc(10);  //打印 10 2 3 
//	TestFunc(10,20);  //打印10 20 3
//	TestFunc(10,20,30);  //打印10 20 30
//
//	//半缺省
//	TestFunc2(10, 20);
//	TestFunc2(10, 20,30);
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
////可能就会说不清了，给在声明的位置会比较好一些
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


//void TestFunc(double a,int b)
//{
//
//}
//
//void TestFunc(int a,double b)
//{
//
//}
////上面两个函数形成了重载
//int main()
//{
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