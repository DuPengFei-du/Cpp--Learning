//#include<iostream>
//using namespace std;
//int main()
//{
//	cout << "Change world" << endl;
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
//	c =Add(a,b);
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
//	int c;
//	c = MAX(a, b);
//	cout << c << endl;
//	return 0;
//}


//变量的引用
/*
引用时C++对于C的扩充
在C++中，变量的引用就是变量的别名，因此，引用又被称为别名。建立引用的作用是为一个变量再起另一个名字
以便在需要的时候可以方便，直接引用该变量，这就是引用的由来
对一个变量的引用的所有操作，实际上就是对齐所代表的变量的操作
假如有一个变量a，想给他起一个别名b，那么就这样子
int& b =a;
这就是声明了b是a的引用，也就是a的别名，经过这样的声明之后，使用a或者b的作用是相同的
都代表了同一个变量，注意，在上述的声明中，&并不代表取地址
*/
/*
重点：对变量声明一个引用，他并不另外开辟内存单元，b和a都是代表同一个内存单元
在声明一个引用的时候，必须对其进行初始化操作，也就是声明他代表哪一个变量
由于引用不是独立的变量，编译系统不会给他分配单独的内存单元，因此在建立引用时只有声明，没有定义
当声明一个变量的引用之后，在本函数执行期间，该引用一直与其代表的变量相联系，不能再作为其他变量的引用
*/
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a = 10;
//	int& b = a;
//	a = a * a;
//	cout << a <<" "<< b;
//	cout << " " << endl;
//	b = b / 5;
//	cout << b <<<< endl;
//	return 0;
//}


/*
引用和其所代表的变量共享同一块内存单元，系统并不为其另外分配内存单元，实际上
编译系统使用引用何其代表的变量具有相同的地址
*/
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a = 3;
//	int& b = a;
//	cout << &a << " " << &b << endl;
//	return 0;
//}


/*
对引用的初始化，可以用一个变量名，也可以使用另一个引用，都是可以的
引用再初始化之后不能在被重新声明为另一种变量的别名
*/


//将引用作为函数的参数
/*
C++中，之所以增加引用，主要是为了利用它作为函数参数，以扩充函数传递数据的功能
在C语言中，函数的参数传递有以下两种情况
*/


/*
将变量名作为实际参数
这时传递给形参的是变量的值，传递是的单向的，在执行函数期间，形参的值发生变化，并不会影响实际参数
因为在函数调用的时候，形参和实参不是同一个存储单元
*/
//#include<iostream>
//using namespace std;
//void Swap(int a, int b)
//{
//	int temp;
//	temp = a;
//	a = b;
//	b = temp;
//}
//int main()
//{
//	int i = 3, j = 5;
//	Swap(i, j);
//	cout << i << " " << j << endl;
//	return 0;
//}


//传地址
//#include<iostream>
//using namespace std;
//void Swap(int *a, int *b)
//{
//	int temp;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}
//int main()
//{
//	int i = 3, j = 5;
//	Swap(&i, &j);
//	cout << i << " " << j << endl;
//	return 0;
//}


//利用别名
//#include<iostream>
//using namespace std;
//void Swap(int &a, int &b)
//{
//	int temp;
//	temp = a;
//	a = b;
//	b = temp;
//}
//int main()
//{
//	int i = 3, j = 5;
//	Swap(i, j);
//	cout << i << " " << j << endl;
//	return 0;
//}