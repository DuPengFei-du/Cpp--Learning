//对象数组

/*
数组不仅可以由简单变量组成(例如整形数组每一个元素都是整形变量)
也可以由类对象组成(对象数组的每一个元素都是同类的对象)

在建立数组时，同样需要调用构造函数，如果有50个对象，就需要调用
50次构造函数，在需要时可以在定义数组时提供实参从而实现初始化的操作
如果构造函数只有一个实参，在定义数组时可以直接在等号后面的花括号
内提供实参，比如说
*/
Student std[3] = { 60,70,78 };

/*
如果构造函数有多个实参，则不能用定义数组时直接提供所有实参的方法
因为一个数组有多个元素，对每个元素提供多个实参，如果再考虑到构造函数
有默认参数情况，很容易造成实参与形参对应古纳西不清晰，从而出现歧义
的问题

编译系统只为每个对象元素的构造函数传递一个实参，所以在定义数组时
提供的实参个数不能超过数组元素的个数，比如
*/
Student std[3] = { 60,70,78,45 };//这是不合法的的，实参的个数超过了对象数组的元素个数


/*
那么，如果构造函数有多个实参，在定义对象数组时应当怎样实现初始化呢？
答案是，在花括号中分别写出构造函数函数名并在括号内指定实参
如果构造函数有三个参数，那么可以这样定义对象数组
*/
Student std[3] = { Student(1001,18,87),Student(1002,38,85) ,Student(1003,45) };
/*
在建立对象数组时，分别调用构造函数，对每个元素进行初始化的操作
每一个元素的实参分别用括号包起来，对应构造函数的一组实参，不会混淆
*/


//对象指针

/*
C中学习了边拉看那个的指针，也学习了结构体指针，指针
不仅可以指向普通的变量，同样也可以指向对象

在建立对象时，编译系统会为每一个对象分配一定的存储空间，用来存放其
数据成员的值。一个对象存储空间的起始地址就是对象的指针，可以定义一个指针
变量，用来存放对象的地址，这就是指向对象的指针变量
*/
class Time
{
public:
	int hour;
	int minute;
	int sec;
	void get_time();
};
void Time::get_time()
{
	cout << hour << ":" << minute << ":" << sec << endl;
}
//在这个的基础上，有下面的语句
Time* pt;
Time t1;
pt = &t1;
//这样pt就是指向Time类对象的指针变量，它指向对象t1


//定义指向类对象的指针变量一般形式为
//类名 *对象指针名

//在上面的基础上，可以通过对象指针pt来访问对象和对象成员


//*pt;
//(*pt).hour;
//pt->hour;
//(*pt).get_time()
//pt->get_time()


//#include<iostream>
//
//命名空间不是类型，是一个作用域
//C语言中有全局作用域和局部作用域
//定义命名空间相当于是定义了一个新的作用域
//namespace N1
//{
//	可以定义变量，也可以定义函数
//	int a = 1;
//	int b = 2;
//	int Add(int left, int right)
//	{
//		return left + right;
//	}
//}
//
//int a = 20;  //那么如果我想要打印全局作用域中的a的话，我要怎么打印？
//printf("%d\n", ::a); 
//
//int main()
//{
//	int a = 30;
//	printf("%d\n", a);  //在这个时候调用printf函数打印的肯定是主函数中的a
//	printf("%d\n", ::a);  //::为作用域限定符，如果在一个变量前面
//	加上了::就代表我现在访问的是全局作用域中的变量
//	printf("%d\n", N1::a);
//	访问命名空间的a，只需要在作用域限定符的前面加上命名空间的名称就可以了
//	return 0;
//}
//三个a分别属于三个不同的作用域，所以编译起来是不会有任何问题的
//那么，在什么情况下会是有问题的？
//就是在同一个命名空间中有两个相同的变量的时候，这个时候是有问题的


//namespace N1   //前面已经有过N1
////如果命名空间的名字有重复的话，是否可以通过编译？
////答案是可以通过编译的
////如果存在相同名称的命名空间，编译器会把他们合并成一个
//{
//	int c = 30;
//	int d = 40;
//	int Div(int left, int right)
//	{
//		return left / right;   //保证right要不为0
//	}
//}


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

//
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
//	int& ra = a;
//	int b = 20;
//	ra = b;  //不是引用的操作，而是再进行赋值的操作
//	//不能再让rb去引用其他的变量了
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
////不需要判空，也不需要解引用，使用起来十分的方便，效率比较高


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