//#include<iostream>
//using namespace std;
//int main()
//{
//	cout << "This is a C++ prapgram" << endl;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	int a = 0;
//	int b = 0;
//	cin >> a >> b;
//	int sum = 0;
//	sum = a + b;
//	cout << sum << endl;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int Sum(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	int c = Sum(a, b);
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
//	cin >> a >> b;
//	int c = MAX(a, b);
//	cout << c << endl;
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
//	//c语言是不允许重名的函数的
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


////Person.cpp
//
//#include"Person.h"
//
//#include<string.h>
//#include<iostream>
//using namespace std;
//
//void Person::InitPerson(char* name, char* gender, int age)
//{
//	strcpy_s(_name, name);
//	_age = age;
//	strcpy_s(_gender, gender);
//}
//void Person::PrintPerson()
//{
//	cout << _name << "-" << _age << "-" << _gender << endl;
//}


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