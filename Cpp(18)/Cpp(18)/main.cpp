/*
在建立对象时不必给出实参的构造函数，称为模拟构造函数。显然，无参的构造函数
属于默认的构造函数，一个类只能有一个默认的构造函数，全缺省也属于默认的构造函数
如果用户为定义构造函数，则系统会自动提供一个默认的构造函数，但是他的函数体是空的
不会起到初始化的作用，如果用户希望在创建对象的时候就能使数据成员有初始值，就必须
自己定义构造函数
*/


/*
如果在建立对象时选用的无参的构造函数，则应注意正确书写定义对象的语句
构造函数是不需要用户自己定义的
尽管在一个类中可以包含多个构造函数，但是对于每一个对象来说
建立对象时只执行其中一个构造函数，并非每个构造函数都被执行
*/


//使用模拟参数的构造函数
/*
构造函数中参数的止既可以通过实参传递，也可以指定为某些默认值，也就是说
如果用户不指定实参值，编译器就使形参的值为默认值
*/
#include<iostream>
using namespace std;
class Box
{
	Box(int h = 10, int w = 10, int len = 10);
	int volume();
private:
	int height;
	int width;
	int length;
};
Box::Box(int h, int w, int len)
{
	height = h;
	width = w;
	length = len;
}
int Box::volume()
{
	return height * width * length;
}

/*
可以看出在构造函数中使用默认参数时方便有效的，她提供了建立对象时的多种选择
它的作用相当于好几个重载的构造函数。他的好处在于：
即使在调用构造函数时没有提供实参值，不仅不会出错而且还确保按照默认的参数值
对对象进行初始化，尤其在希望对每一个对象都有同样的初始化状况时
用这种方式更加的方便，不需要输入数据
*/


//说明：
/*
应该在什么地方指定构造函数的默认参数？在声明构造函数指定默认值，而不能只在定义构造函数
时指定默认值，因为类的定义是放在头文件中的，他是类的对外接口，用户是可以看到的
而函数的定义是类的实现细节，用户是无法看到的
所以在声明构造函数时指定默认的参数，使得用户知道在建立对象时该怎样使用默认值

在一个类中定义了人全部是默认参数的构造函数后，不能再定义重载构造函数
*/


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


using N::b;  //相当于是全局变量，如果这个时候再定义一个int b; 那么就会出错了
int main()
{
	printf("%d\n", N::a);
	printf("%d\n", b);
}
//优点是使用方便，缺陷是容易引起冲突(上述所示，int b);
//如果冲突了，也很好解决，再变量的前面八命名空间的名称再加上就可以了。


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
//	c语言是不允许重名的函数的
//	return 0;
//}


//#include<iostream >
//using namespace std;
//
//void Swap(int a, int b)
//{
//	cout << &a << " " << &b << " " << endl;
//	int temp = a;
//	a = b;
//	b = temp;
//	//交换的是形参的内容，不是实参的内容
//}
//
//void Swap(int* pa, int* pb)
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
//	cout << &a << " " << &b << " " << endl;
//	//Swap(a, b);  //如果只是值传递的话，是不行的
//	Swap(&a, &b);
//	cout << a << " " << b << " " << endl;
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
//	通过交换形参，也就相当于是交换实参了
//}
//int main()
//{
//	int a = 1;
//	int b = 2;
//	Swap(a, b);
//	cout << a << " " << b << " " << endl;
//	return 0;
//}
//不需要判空，也不需要解引用，使用起来十分的方便，效率比较高


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
////但是实际上，这一段代码是有问题的，ret除了函数的作用域只会，就会把空间归还给操作系统了，那么retValue还在引用ret，就相当于是在引用无效的空间


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
//	// 以值作为函数参数
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
////打印的结果为1和4


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