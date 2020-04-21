//类的声明和对象的定义

/*
每一个实体都是对象，有一些对象是具有相同的结构和特性的
在C++中，对象的类型称为类，类代表了某一批对象的共同特征
类是对象的抽象而对象是类的具体实例
在C++中，类的地位与作用和结构体类似，类与对象的关系相当于结构体类型和结构体变量的关系一样
在C++中，也是要先声明一个类的类型，然后用它去定义若干个同类型的对象
对象就是某一种类类型的变量
*/


//类是抽象的，不占据内存，而对象是具体的，是占用存储空间的

//声明类的类型
/*
类是用户建立的类型，如果程序中需要用到类，必须自己根据自己的需要进行类型声明
或者使用别人已经建立的类。C++标准本省并不提供现成的类的名称，结构和内容
在C++中声明一个类，其实和C中声明结构体是类似的
*/
//声明一个类
class Student
{
	int num;
	char name[20];
	char sex;
	void dispaly()   //这个是成员函数
	{

	}
};
Student std1，std2;  //定义了两个Student类的对象


class Student
{
private:
	int num;
	char name[20];
	char sex;
public:
	void dispaly()   //这个是成员函数
	{

	}
};
Student std1，std2;  //定义了两个Student类的对象
/*
现在声明了display函数是公有的，外界就可以调用这个函数了
如果在类的定义中，既不指定private也不指定public，则系统就默认为是私有的
第一次的类的声明就是属于默认的情况，默认是私有的
*/


/*
private和public称为成员访问限定符，用他们来声明个成员的访问属性
被声明为私有的成员，只能被本类中的成员函数引用，类外不能调用(除了友元函数以外)
被声明为公有的成员，既可以被本类的成员函数所调用，还可以被类的作用域内的其他函数引用
除了private和public，还有一种成员访问限定符protected，用protected声明的成员称为受保护的成员
他不能被类外的访问(这点与私有成员一样),但可以被派生类的成员访问
在C++程序中经常会用到类，为了用户方便，C++编译系统往往向用户提供类库(但不输入C++语言本身的组成部分)
内装经常使用的基本的类，供用户使用。
*/


//定义对象的方法
//先声明类类型，然后再定义对象
Student std1, std2；
//再C++中，在声明了类类型之后，定义对象有两种形式
class Student std1, std2;
//把class和Student合起来作为一个类名，用来定义对象
Student std1,std2
//直接用类名来定义对象，这两种方法是等效的


//同样的，还可以在声明类的同时定义对象，就像结构体定义全局的对象一样
class Student
{
private:
	int num;
	char name[20];
	char sex;
public:
	void dispaly()   //这个是成员函数
	{

	}
}std1,std2;
//在定义Student的同时，定义了std1和std2两个对象


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
////两个swap形成了重载
//
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