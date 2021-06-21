//#include<iostream>
//#include<string>
//using namespace std;
//
//class Person
//{
//public:
//	Person(const string& name,const string& gender,int age,const string &job)
//		:_name(name)
//		,_gender(gender)
//		,_age(age)
//		,_job(job)
//	{
//
//	}
//
//	void BuyTicket()
//	{
//		cout << "全价票" << endl;
//	}
//
//protected:
//	string _name;
//	string _gender;
//	int _age;
//	string _job;
//};
//
//
//class Student:public Person
//	//因为基类的构造函数是非缺省的，所以子类就需要个给出他自己的构造函数
//{
//public:
//	Student(const string& name, const string& gender, int age, const string& job,int stuId)
//		:Person(name,gender,age,job)
//		, _stuId(stuId)
//	{
//
//	}
//
//	void BuyTicket()
//	{
//		cout << "半价票" << endl;
//	}
//protected:
//	int _stuId;
//};
//
//class Soldier:public Person
//{public:
//	Soldier(const string& name, const string& gender, int age, const string& job, const string& which)
//		:Person(name, gender, age, job)
//		,_which(which)
//	{
//
//	}
//
//	void BuyTicket()
//	{
//		cout << "免费票" << endl;
//	}
//protected:
//	string _which;
//};
//
////代码在进行编译的时候，并不能知道p将来到底会引用哪个类的对象，因此编译期间并不知道
////到底要调用哪个类的虚函数
////在代码运行的时候，可以知道p到底是用的哪个类的对象，才可以去调用这个类的虚函数
//void TestBuyTicket(Person& p)
//{
//	p.BuyTicket();
//}
//
//int main()
//{
//	Person p("张三", "男", 20, "无业");
//
//	Student stu("Peter", "男", 20, "学生", 100);
//
//	Soldier sol("美丽","女",23, "军人", "...");
//
//	TestBuyTicket(p);
//
//	TestBuyTicket(stu);
//
//	TestBuyTicket(sol);
//
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//
//class Person
//{
//public:
//	Person(const string& name, const string& gender, int age, const string& job)
//		:_name(name)
//		, _gender(gender)
//		, _age(age)
//		, _job(job)
//	{
//
//	}
//
//	virtual void BuyTicket()
//	{
//		cout << "全价票" << endl;
//	}
//
//protected:
//	string _name;
//	string _gender;
//	int _age;
//	string _job;
//};
//
//
//class Student :public Person
//	//因为基类的构造函数是非缺省的，所以子类就需要个给出他自己的构造函数
//{
//public:
//	Student(const string& name, const string& gender, int age, const string& job, int stuId)
//		:Person(name, gender, age, job)
//		, _stuId(stuId)
//	{
//
//	}
//
//	void BuyTicket()
//	{
//		cout << "半价票" << endl;
//	}
//protected:
//	int _stuId;
//};
//
//class Soldier :public Person
//{
//public:
//	Soldier(const string& name, const string& gender, int age, const string& job, const string& which)
//		:Person(name, gender, age, job)
//		, _which(which)
//	{
//
//	}
//
//	void BuyTicket()
//	{
//		cout << "免费票" << endl;
//	}
//protected:
//	string _which;
//};
//
////代码在进行编译的时候，并不能知道p将来到底会引用哪个类的对象，因此编译期间并不知道
////到底要调用哪个类的虚函数
////在代码运行的时候，可以知道p到底是用的哪个类的对象，才可以去调用这个类的虚函数
//void TestBuyTicket(Person& p)
//{
//	p.BuyTicket();
//}
//
//int main()
//{
//	Person p("张三", "男", 20, "无业");
//
//	Student stu("Peter", "男", 20, "学生", 100);
//
//	Soldier sol("美丽", "女", 23, "军人", "...");
//
//	TestBuyTicket(p);
//
//	TestBuyTicket(stu);
//
//	TestBuyTicket(sol);
//
//	return 0;
//}

//
//#include<iostream>
//using namespace std;
//
//class Base
//{
//public:
//	virtual void TestFunc1()
//	{
//		cout << "Base::TestFunc1()" << endl;
//	}
//};
//
//
//class Derived:public Base
//{
//public:
//	void TestFunc1()
//	{
//		cout << "Derived::TestFunc1()" << endl;
//	}
//};
//
////给出来Base类的一个指针
//void TestVirtual(Base* pb)
//{
//	pb->TestFunc1();
//}
//
//int main()
//{
//	Base b;
//	Derived d;
//
//	TestVirtual(&b);
//	TestVirtual(&d);
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//class Base
//{
//public:
//	virtual void TestFunc1()
//	{
//		cout << "Base::TestFunc1()" << endl;
//	}
//
//	virtual Base* TestFunc2()
//	{
//		cout << "Base::TestFunc1()" << endl;
//		return this;
//	}
//};
//
//
//class Derived :public Base
//{
//public:
//	virtual void TestFunc1()
//	{
//		cout << "Derived::TestFunc1()" << endl;
//	}
//
//	virtual Derived* TestFunc2()
//	{
//		cout << "Derived::TestFunc2()" << endl;
//		return this;
//
//	}
//};
//
////给出来Base类的一个指针
//void TestVirtual(Base* pb)
//{
//	pb->TestFunc1();
//	pb->TestFunc2();
//
//}
//
//int main()
//{
//	Base b;
//	Derived d;
//
//	TestVirtual(&b);
//	TestVirtual(&d);
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Base
//{
//public:
//	~Base()
//	{
//		cout << "~Base()" << endl;
//	}
//};
//
//class Derived:public Base
//{
//public:
//	Derived()
//	{
//		p = new int[10];
//	}
//
//	~Derived()
//	{
//		cout << "~Derived()" << endl;
//		delete[] p;
//	}
//private:
//	int* p;
//};
//
//void TestVritual()
//{
//	//我现在给一个基类的指针，去new一个基类的对象
//	Base* pb = new Base;
//	//delete  的时候会调用响应对象的析构函数
//	//pb现在指向的是基类的对象
//	//在释放pb指向的基类对象期间，先调用基类的析构函数在释放空间
//	delete pb;
//
//	//pb现在指向的是子类的对象
//	//在释放pb指向的子类对象期间，先调用子类的析构函数在释放空间
//	//但是我们发现他并没调用子类的析构函数
//	//而是调用的是基类的析构函数
//	pb = new Derived;
//	delete pb;
//
//	//pb是基类的指针，可以指向基类或者子类的对象，但是在释放的时候
//	//应该根据pb指向对象的不同去调用pb所指向对象的析构函数
//}
//
//int main()
//{
//	TestVritual();
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Base
//{
//public:
//	virtual ~Base()
//	{
//		cout << "~Base()" << endl;
//	}
//};
//
//class Derived :public Base
//{
//private:
//	~Derived()
//	{
//		cout << "~Derived()" << endl;
//		delete[] p;
//	}
//private:
//	int* p;
//};
//
//void TestVritual()
//{
//	Base* pb = new Base;
//
//	delete pb;
//	pb = new Derived;
//	delete pb;
//
//}
//
//int main()
//{
//	TestVritual();
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//class Base
//{
//public:
//	virtual void TestFunc1()
//	{
//		cout << "Base::TestFunc1()" << endl;
//	}
//};
//
//class Derived :public Base
//{
//public:
//	virtual void TestFunc1()
//	{
//		cout << "Derived::TestFunc1()" << endl;
//	}
//};
//
//void TestVirtual(Base& b)
//{
//
//	b.TestFunc1();
//}
//
//int main()
//{
//	Base b;
//	Derived d;
//
//	TestVirtual(b);
//	TestVirtual(d);
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//class Base
//{
//public:
//	virtual void TestFunc1()
//	{
//		cout << "Base::TestFunc1()" << endl;
//	}
//};
//
//class Derived :public Base
//{
//public:
//	virtual void TetsFunc1()override    //添加了override之后，马上就出现了红色的线，表明没有充给基类中的虚函数
//		这个时候去进行编译的话，其实就会给我们进行报错了
//	{
//		cout << "Derived::TestFunc1()" << endl;
//	}
//};
//
//void TestVirtual(Base& b)
//{
//
//	b.TestFunc1();
//}
//
//int main()
//{
//	Base b;
//	Derived d;
//
//	TestVirtual(b);
//	TestVirtual(d);
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//class Base
//{
//public:
//	virtual void TestFunc1()
//	{
//		cout << "Base::TestFunc1()" << endl;
//	}
//};
//
//class Derived :public Base
//{
//public:
//	virtual void TestFunc1()override    //添加了override之后，马上就出现了红色的线，表明没有充给基类中的虚函数
//		//这个时候去进行编译的话，其实就会给我们进行报错了
//	{
//		cout << "Derived::TestFunc1()" << endl;
//	}
//};
//
//void TestVirtual(Base& b)
//{
//
//	b.TestFunc1();
//}
//
//int main()
//{
//	Base b;
//	Derived d;
//
//	TestVirtual(b);
//	TestVirtual(d);
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//class Base
//{
//public:
//	virtual void TestFunc1()
//	{
//		cout << "Base::TestFunc1()" << endl;
//	}
//
//	virtual void TestFunc2()
//	{
//		cout << "Base::TestFunc1()" << endl;
//	}
//};
//
//class Derived :public Base
//{
//public:
//	virtual void TestFunc1()override    
//	{
//		cout << "Derived::TestFunc1()" << endl;
//	}
//
//	virtual void TestFunc2()
//	{
//		cout << "Derived::TestFunc1()" << endl;
//	}
//};
//
//
////现在的需求是在DD类中只需要重写TestFunc1，不需要重写TestFunc2
////那么这种需求在C++中
//class DD :public Derived
//{
//	virtual void TestFunc1()override
//	{
//		cout << "DD::TestFunc1()" << endl;
//	}
//
//	virtual void TestFunc2()
//	{
//		cout << "DD::TestFunc1()" << endl;
//	}
//};
//
//void TestVirtual(Base& b)
//{
//
//	b.TestFunc1();
//}
//
//int main()
//{
//	Base b;
//	Derived d;
//
//	TestVirtual(b);
//	TestVirtual(d);
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//class Base
//{
//public:
//	virtual void TestFunc1()
//	{
//		cout << "Base::TestFunc1()" << endl;
//	}
//
//	virtual void TestFunc2()
//	{
//		cout << "Base::TestFunc2()" << endl;
//	}
//
//	virtual void TestFunc3()final
//	{
//		cout << "Base::TestFunc3()" << endl;
//	}
//};
//
//class Derived :public Base
//{
//public:
//	virtual void TestFunc1()override
//	{
//		cout << "Derived::TestFunc1()" << endl;
//	}
//
//	virtual void TestFunc2()final
//	{
//		cout << "Derived::TestFunc2()" << endl;
//	}
//};
//
//
//class DD :public Derived
//{
//	virtual void TestFunc1()override
//	{
//		cout << "DD::TestFunc1()" << endl;
//	}
//
//};
//
//void TestVirtual(Base& b)
//{
//
//	b.TestFunc1();
//}
//
//int main()
//{
//	Base b;
//	Derived d;
//
//	TestVirtual(b);
//	TestVirtual(d);
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//class B final
//{
//
//};
//
//class D :public B
//{
//
//};
//
//
//int main()
//{
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//
//class WashRoom
//{
//public:
//	void GoToManRoom()const
//	{
//		cout << "go to left" << endl;
//	}
//
//	void GoToWomanRoom()const
//	{
//		cout << "go to right" << endl;
//	}
//};
//
//class Person
//{
//public:
//	Person(const string& name,int age)
//		:_name(name)
//		,_age(age)
//	{
//
//	}
//
//	void GoTo(const WashRoom& wc)
//	{
//		//我虽然给出了Person类，但是我并没有给出Person的类别
//		//所以说，我是不知道这个人到底是男人还是女人的
//		//现在，我们不知道Person到底是什么性别，所以这个函数方法其实是暂时没有办法来实现的
//		//只有知道了性别之后才可以正常使用函数
//		wc.GoToManRoom();
//		wc.GoToWomanRoom();
//	}
//
//private:
//	string _name;
//	int _age;
//};
//
//class Man :public Person
//{
//
//};
//
//class Woman :public Person
//{
//
//};
//int main()
//{
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//
//class WashRoom
//{
//public:
//	void GoToManRoom()const
//	{
//		cout << "go to left" << endl;
//	}
//
//	void GoToWomanRoom()const
//	{
//		cout << "go to right" << endl;
//	}
//};
//
//
////Person既然没有性别的话，那么我们就可以把Person看成是一个抽象的人
////也就是说我们把他看成具体不存在在的，也就是说不能去实例化对象
//class Person
//{
//public:
//	Person(const string& name, int age)
//		:_name(name)
//		, _age(age)
//	{
//
//	}
//
//	//这个方法并不是说我不写，而是因为现在的这个类是不健全的
//	//我不知道人的性别，所以这个方法我其实是没法给出来的
//
//	//这样子的函数其实就是纯虚函数
//	//然后我们把包含有纯虚函数的类称为抽象类
//	virtual void GoTo(const WashRoom& wc) = 0;
//
//private:
//	string _name;
//	int _age;
//};
//
////那么我现在就相当于希望去实现多态
////那么实现多态的话，就需要把基类中的函数给成u函数
//class Man :public Person
//{
//public:
//	virtual void GoTo(const WashRoom& wc)
//	{
//		wc.GoToManRoom();
//	}
//};
//
//class Woman :public Person
//{
//public:
//	virtual void GoTo(const WashRoom& wc)
//	{
//		wc.GoToWomanRoom();
//	}
//};
//
//int main()
//{
//	return 0;
//}


////为什么类中包含虚函数的时候，编译器就会给类生成一份构造函数呢
////生成的构造函数有什么作用呢
//#include<iostream>
//using namespace std;
//class Base
//{
//public:
//	void TestFunc()
//	{
//		cout << "Base::TestFunc()" << endl;
//	}
//	int _b;
//};
//int main()
//{
//	Base b;
//
//	cout << sizeof(Base) << endl;
//	b._b = 1;
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Base
//{
//public:
//	virtual void TestFunc()
//	{
//		cout << "Base::TestFunc()" << endl;
//	}
//	int _b;
//};
//int main()
//{
//	Base b;
//
//	cout << sizeof(Base) << endl;
//	b._b = 1;
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Base
//{
//public:
//	virtual void TestFunc1()
//	{
//		cout << "Base::TestFunc1()" << endl;
//	}
//
//	virtual void TestFunc2()
//	{
//		cout << "Base::TestFunc2()" << endl;
//	}
//
//	int _b;
//};
//int main()
//{
//	Base b1,b2;
//
//	cout << sizeof(b1) << endl;
//	b1._b = 1;
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Base
//{
//public:
//	virtual void TestFunc1()
//	{
//		cout << "Base::TestFunc1()" << endl;
//	}
//
//	virtual void TestFunc2()
//	{
//		cout << "Base::TestFunc2()" << endl;
//	}
//
//	int _b;
//};
//
//class Derived :public Base
//{
//public:
//	int _d;
//};
//
//int main()
//{
//	Base b1, b2;
//
//	cout << sizeof(b1) << endl;
//	b1._b = 1;
//
//	Derived d1;
//	cout << sizeof(Derived) << endl;
//
//	d1._b = 1;
//
//	d1._d = 2;
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Base
//{
//public:
//	virtual void TestFunc1()
//	{
//		cout << "Base::TestFunc1()" << endl;
//	}
//
//	virtual void TestFunc2()
//	{
//		cout << "Base::TestFunc2()" << endl;
//	}
//
//	virtual void TestFunc3()
//	{
//		cout << "Base::TestFunc2()" << endl;
//	}
//
//	int _b;
//};
//
//class Derived :public Base
//{
//public:
//	virtual void TestFunc1()
//	{
//		cout << "Base::TestFunc1()" << endl;
//	}
//
//	virtual void TestFunc3()
//	{
//		cout << "Base::TestFunc2()" << endl;
//	}
//
//	int _d;
//};
//
//int main()
//{
//	Base b1, b2;
//
//	cout << sizeof(b1) << endl;
//	b1._b = 1;
//
//	Derived d1;
//	cout << sizeof(Derived) << endl;
//
//	d1._b = 1;
//
//	d1._d = 2;
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Base
//{
//public:
//	virtual void TestFunc1()
//	{
//		cout << "Base::TestFunc1()" << endl;
//	}
//
//	virtual void TestFunc2()
//	{
//		cout << "Base::TestFunc2()" << endl;
//	}
//
//	virtual void TestFunc3()
//	{
//		cout << "Base::TestFunc3()" << endl;
//	}
//
//	int _b;
//};
//
//class Derived :public Base
//{
//public:
//
//	virtual void TestFunc4()
//	{
//		cout << "Base::TestFunc4()" << endl;
//	}
//
//	virtual void TestFunc1()
//	{
//		cout << "Base::TestFunc1()" << endl;
//	}
//
//	virtual void TestFunc3()
//	{
//		cout << "Base::TestFunc3()" << endl;
//	}
//
//	virtual void TestFunc5()
//	{
//		cout << "Base::TestFunc5()" << endl;
//	}
//
//	int _d;
//};
//
//int main()
//{
//	Base b1, b2;
//
//	cout << sizeof(b1) << endl;
//	b1._b = 1;
//
//	Derived d1;
//	cout << sizeof(Derived) << endl;
//
//	d1._b = 1;
//
//	d1._d = 2;
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Base
//{
//public:
//	virtual void TestFunc1()
//	{
//		cout << "Base::TestFunc1()" << endl;
//	}
//
//	virtual void TestFunc2()
//	{
//		cout << "Base::TestFunc2()" << endl;
//	}
//
//	virtual void TestFunc3()
//	{
//		cout << "Base::TestFunc3()" << endl;
//	}
//
//	int _b;
//};
//
//class Derived :public Base
//{
//public:
//
//	virtual void TestFunc4()
//	{
//		cout << "Base::TestFunc4()" << endl;
//	}
//
//	virtual void TestFunc1()
//	{
//		cout << "Base::TestFunc1()" << endl;
//	}
//
//	virtual void TestFunc3()
//	{
//		cout << "Base::TestFunc3()" << endl;
//	}
//
//	virtual void TestFunc5()
//	{
//		cout << "Base::TestFunc5()" << endl;
//	}
//
//	int _d;
//};
//
//
//int main()
//{
//	Base b1, b2;
//
//	cout << sizeof(b1) << endl;
//	b1._b = 1;
//
//	Derived d1;
//	cout << sizeof(Derived) << endl;
//
//	d1._b = 1;
//
//	d1._d = 2;
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Base
//{
//public:
//
//	//验证内敛函数到底可不可以为虚函数
//	//只用在他的前面加上一个virtual关键字来试验一下其实就是可以的
//	virtual inline void TestFunc()
//	{
//		cout << "Base::TestFunc()" << endl;
//	}
//};
//
//void TestVirtual(Base& b)
//{
//	b.TestFunc();
//}
//int main()
//{
//	return 0;
//}


