//#include<iostream>
//#include<string>
//using namespace std;
//
//class Person
//{
//public:
//	void SetPersonInfo(const string& name, const string& gender, int age)
//	{
//		_name = name;
//		_gender = gender;
//		_age = age;
//	}
//
//	void Print()
//	{
//		cout << _name << " " << _gender << " " << _age << endl;
//	}
//
//	void Eat()
//	{
//		cout << "吃饭" << endl;
//	}
//
//	void Sleep()
//	{
//		cout << "睡觉" << endl;
//	}
//
//private:
//	string _name;
//	string _gender;
//	int _age;
//};
//
//
////但是现在人给的太宽泛了，因为人的工只能有很多种
////那么，假设我现在还有一个学生类，那么假设我没有继承的这种机制，那么我就
////需要将上面的代码全部拷贝一份，在写一遍
////那么假设学生类中有新的功能的话，我们还需要重新给出
//class Student
//{
//public:
//	void SetPersonInfo(const string& name, const string& gender, int age)
//	{
//		_name = name;
//		_gender = gender;
//		_age = age;
//	}
//
//	void Print()
//	{
//		cout << _name << " " << _gender << " " << _age << endl;
//	}
//
//	void Eat()
//	{
//		cout << "吃饭" << endl;
//	}
//
//	void Sleep()
//	{
//		cout << "睡觉" << endl;
//	}
//
//	void Study()
//	{
//		cout << "学习" << endl;
//	}
//
//private:
//	string _name;
//	string _gender;
//	int _age;
//};
//
////那比如说我还其他的类
//class Teacher
//{
//public:
//	void SetPersonInfo(const string& name, const string& gender, int age)
//	{
//		_name = name;
//		_gender = gender;
//		_age = age;
//	}
//
//	void Print()
//	{
//		cout << _name << " " << _gender << " " << _age << endl;
//	}
//
//	void Eat()
//	{
//		cout << "吃饭" << endl;
//	}
//
//	void Sleep()
//	{
//		cout << "睡觉" << endl;
//	}
//
//	void Study()
//	{
//		cout << "学习" << endl;
//	}
//
//	void Teach()
//	{
//		cout << "教书" << endl;
//	}
//
//private:
//	string _name;
//	string _gender;
//	int _age;
//};
//
////那么按照我们以前的方式的话，我们每次需要去定义一类人，就需要重新给出一个类，这样子
////显然太麻烦了
//
////由上面的代码可以看出，每个类之中具有的重复方法太多了
//int main()
//{
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//
//class Person
//{
//public:
//	void SetPersonInfo(const string& name, const string& gender, int age)
//	{
//		_name = name;
//		_gender = gender;
//		_age = age;
//	}
//
//	void Print()
//	{
//		cout << _name << " " << _gender << " " << _age << endl;
//	}
//
//	void Eat()
//	{
//		cout << "吃饭" << endl;
//	}
//
//	void Sleep()
//	{
//		cout << "睡觉" << endl;
//	}
//
//private:
//	string _name;
//	string _gender;
//	int _age;
//};
//
////假设说，我们现在有了继承之后
////学生他也是属于人的，那么既然是人的话，Person类当中的方法他都应该是要具有的
////那么我们就使用继承
//
//class Student
//{
//public:
//	void SetPersonInfo(const string& name, const string& gender, int age)
//	{
//		_name = name;
//		_gender = gender;
//		_age = age;
//	}
//
//	void Print()
//	{
//		cout << _name << " " << _gender << " " << _age << endl;
//	}
//
//	void Eat()
//	{
//		cout << "吃饭" << endl;
//	}
//
//	void Sleep()
//	{
//		cout << "睡觉" << endl;
//	}
//
//	void Study()
//	{
//		cout << "学习" << endl;
//	}
//
//private:
//	string _name;
//	string _gender;
//	int _age;
//};
//
//
//class Teacher
//{
//public:
//	void SetPersonInfo(const string& name, const string& gender, int age)
//	{
//		_name = name;
//		_gender = gender;
//		_age = age;
//	}
//
//	void Print()
//	{
//		cout << _name << " " << _gender << " " << _age << endl;
//	}
//
//	void Eat()
//	{
//		cout << "吃饭" << endl;
//	}
//
//	void Sleep()
//	{
//		cout << "睡觉" << endl;
//	}
//
//	void Teach()
//	{
//		cout << "教书" << endl;
//	}
//
//private:
//	string _name;
//	string _gender;
//	int _age;
//};
//
//int main()
//{
//	Person p;
//	p.SetPersonInfo("W", "男", 15);
//	p.Print();
//	p.Eat();
//	p.Sleep();
//
//	Student s;
//	s.SetPersonInfo("Tom", "男", 30);
//	s.Print();
//	s.Eat();
//	s.Sleep();
//	s.Study();
//
//	Teacher t;
//	t.SetPersonInfo("Jerry", "男", 20);
//	s.Print();
//	t.Eat();
//	t.Sleep();
//	t.Teach();
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
//	void SetPersonInfo(const string& name, const string& gender, int age)
//	{
//		_name = name;
//		_gender = gender;
//		_age = age;
//	}
//
//	void Print()
//	{
//		cout << _name << " " << _gender << " " << _age << endl;
//	}
//
//	void Eat()
//	{
//		cout << "吃饭" << endl;
//	}
//
//	void Sleep()
//	{
//		cout << "睡觉" << endl;
//	}
//
//private:
//	string _name;
//	string _gender;
//	int _age;
//};
//
////假设说，我们现在有了继承之后
////学生他也是属于人的，那么既然是人的话，Person类当中的方法他都应该是要具有的
////那么我们就使用继承
//
//class Student:public Person
//	//那么，在继承了之后，之前Person类里面已经有的东西，我就不需要在写了
//{
//public:
//
//	void Study()
//	{
//		cout << "学习" << endl;
//	}
//	//私有的成员变量我也不用在给出了
//};
//
//
//class Teacher:public Person
//{
//public:
//
//	void Teach()
//	{
//		cout << "教书" << endl;
//	}
//
//};
//
//int main()
//{
//	Person p;
//	p.SetPersonInfo("W", "男", 15);
//	p.Print();
//	p.Eat();
//	p.Sleep();
//
//	Student s;
//	s.SetPersonInfo("Tom", "男", 30);
//	s.Print();
//	s.Eat();
//	s.Sleep();
//	s.Study();
//
//	Teacher t;
//	t.SetPersonInfo("Jerry", "男", 20);
//	s.Print();
//	t.Eat();
//	t.Sleep();
//	t.Teach();
//
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//
////基类
//class Base
//{
//public:
//	void SetBase(int pri, int pro, int pub)
//	{
//		_pri = pri;
//		_pro = pro;
//		_pub = pub;
//	}
//
//	void PrintBase()
//	{
//		cout << _pri << "-" << _pro << "-" << _pub << endl;
//	}
//private:
//	int _pri;
//
////可以看出区别了，用proteted修饰的成员，在子类当中仍然可以进行访问
////但是基类的保护的成员是不可以咋类外直接被访问到的
//protected:
//	int _pro;
//public:
//	int _pub;
//};
//
////共有继承Base的基类
//class Derived :public Base
//{
//public:
//	void TestDerived()
//	{
//		//将从基类中继承下来的资源对其进行重新赋值的操作
//		_pub = 100;
//
//		//如果是公有的继承方式
//		//那么基类的保护成员，在子类中是仍然可以访问到的，并可以对其进行修改的操作
//		_pro = 200;
//
//		//说明基类中私有的成员是不可以在子类中直接访问的
//		//虽然说不可以访问，但是需要注意的一点是基类的私有成员
//		//也是被继到子类当中了的
//		//_pri = 300;
//	}
//public:
//	int _pubD;
//};
//
////我们再去进行一层封装
//class B :public Derived
//{
//public:
//	void Test()
//	{
//		_pro = 0;
//	}
//};
//
//int main()
//{
//	cout << sizeof(Derived) << endl;
//
//	//定义了一个子类的对象
//	Derived d;
//	d.SetBase(10, 20, 30);
//
//	d.PrintBase();
//
//	//那么，其实也就是说，如果是公有的这种继承的方式
//	//父类中公有的成员在子类中的属性仍然是公有的，没发生改变
//	d._pub = 1000;
//
//	
//	//d._pro = 2000;
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//
////基类
//class Base
//{
//public:
//	void SetBase(int pri, int pro, int pub)
//	{
//		_pri = pri;
//		_pro = pro;
//		_pub = pub;
//	}
//
//	void PrintBase()
//	{
//		cout << _pri << "-" << _pro << "-" << _pub << endl;
//	}
//
//private:
//	int _pri;
//protected:
//	int _pro;
//public:
//	int _pub;
//};
//
//
////保护继承基类
//class Derived :protected Base
//{
//public:
//	void TestDerived()
//	{
//		_pub = 100;
//		_pro = 200;
//	}
//public:
//	int _pubD;
//};
//
//class B :public Derived
//{
//	void Test()
//	{
//		_pub = 100;
//	}
//};
//
//int main()
//{
//	cout << sizeof(Derived) << endl;
//
//	//子类的对象
//	Derived d;
//
//	//保护继承的方式公有的成员变量也无法在类外进行访问的操作了
//	//d._pub = 1000;
//
//	return 0;
//
//}


//#include<iostream>
//#include<string>
//using namespace std;
//
//class Base
//{
//public:
//	void SetBase(int pri, int pro, int pub)
//	{
//		_pri = pri;
//		_pro = pro;
//		_pub = pub;
//	}
//
//	void PrintBase()
//	{
//		cout << _pri << "-" << _pro << "-" << _pub << endl;
//	}
//
//private:
//	int _pri;
//protected:
//	int _pro;
//public:
//	int _pub;
//};
//
//
////私有继承基类
//class Derived :private Base
//{
//public:
//	void TestDerived()
//	{
//		//公有的和保护的是可以在类中访问的
//		_pub = 100;
//		_pro = 200;
//		//_pri但是私有的仍然是不可以进行访问到的
//		//虽然说是继承下来了，但是仍然是不可以访问到的
//	}
//public:
//	int _pubD;
//};
//
//class B :public Derived
//{
//	void Test()
//	{
//		//私有继承的权限已经被改成private了，所以不可以再继续进行访问了
//		//_pub = 100;
//		//_pro = 200;
//
//	}
//};
//
//int main()
//{
//	//大小仍然是16个字节，所以还是将全部的变量都给我们继承下来了
//	cout << sizeof(Derived) << endl;
//
//	//子类的对象
//	Derived d;
//
//	//保护继承的方式公有的成员变量也无法在类外进行访问的操作了
//	//d._pub = 1000;
//
//	return 0;
//
//}


//#include<iostream>
//#include<string>
//using namespace std;
//
//class Base
//{
//public:
//	void SetBase(int pri, int pro, int pub)
//	{
//		_pri = pri;
//		_pro = pro;
//		_pub = pub;
//	}
//
//	void PrintBase()
//	{
//		cout << _pri << "-" << _pro << "-" << _pub << endl;
//	}
//
//private:
//	int _pri;
//protected:
//	int _pro;
//public:
//	int _pub;
//};
//
//
//class Derived : Base
//{
//public:
//	void TestDerived()
//	{
//		//公有的和保护的是可以在类中访问的
//		_pub = 100;
//		_pro = 200;
//		//_pri但是私有的仍然是不可以进行访问到的
//		//虽然说是继承下来了，但是仍然是不可以访问到的
//	}
//public:
//	int _pubD;
//};
//
//class B :public Derived
//{
//	void Test()
//	{
//		//私有继承的权限已经被改成private了，所以不可以再继续进行访问了
//		//_pub = 100;
//		//_pro = 200;
//
//	}
//};
//
//int main()
//{
//	//大小仍然是16个字节，所以还是将全部的变量都给我们继承下来了
//	cout << sizeof(Derived) << endl;
//
//	//子类的对象
//	Derived d;
//
//	//保护继承的方式公有的成员变量也无法在类外进行访问的操作了
//	//d._pub = 1000;
//
//	return 0;
//
//}


//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//	void SetPersonInfo(const string& name, const string& gender, int age)
//	{
//		_name = name;
//		_gender = gender;
//		_age = age;
//	}
//
//	void Print()
//	{
//		cout << _name << " " << _gender << " " << _age << endl;
//	}
//
//	void Eat()
//	{
//		cout << "吃饭" << endl;
//	}
//
//	void Sleep()
//	{
//		cout << "睡觉" << endl;
//	}
//
//private:
//	string _name;
//	string _gender;
//	int _age;
//};
//
////赋值兼容规则首先必须要是公有的继承方式才是可以的
//class Student:public Person
//{
//public:
//
//	void Study()
//	{
//		cout << "学习" << endl;
//	}
//	//私有的成员变量我也不用在给出了
//
//	//看其是否还能继续向下运行
//protected:
//	int _sutid;  //学生有自己的学号
//};
//
//
////public的继承方式：子类对象和基类对象之间是一个is-a的关系，is-a是一个
////可以将子类的对象看成是一个基类的对象
//
////解释is-a   public的继承方式为什么可以将一个子类的对象看成是一个基类的对象
//
////1.在类外所有使用基类对象的位置都是可以使用子类的对象来进行替换的
////因为公有的继承方式，基类中的成员再子类中的访问权限没有发生任何的改变
//
////2.我们还可以从对象模型的角度去看，那么什么是对象模型呢？对象模型其实就是对象
////中各个成员在内存中的存放形式
//int main()
//{
//
//	//先给出一个Person类的对象
//	Person p;
//	p.SetPersonInfo("Perter", "男", 20);
//	p.Print();
//	p.Eat();
//	p.Sleep();
//
//	//再给出一个学生的对象
//	Student s;
//	s.SetPersonInfo("Tom", "nv", 19);
//	s.Print();
//	s.Eat();
//	s.Study();
//	s.Sleep();
//
//	//根据赋值兼容规则可以知道派生类的对象可以直接赋值给基类的对象
//	p = s;
//
//	//但是反过来的话，将基类的对象赋值给子类的对象就是一定会出现错误的
//	//s = p;
//
//
//	//现在我们给出一个基类的指针，让这个基类的指针指向基类的对象是完全没有问题的
//	//因为二者的类型是一样的
//	Person* ps = &p;
//
//	//也可以给出引用
//	//可以引用基类的对象
//	//也可以引用子类的对象
//	Person& rp1 = p;
//	Person& rp2 = s;
//
//	//但是反过来我给出子类的指针，指向子类，肯定可以
//	//指向基类是不可以的
//	Student* ps = &s;
//	//下面的这句话就是会进行报错的
//	//想要让其通过编译的话，需要进行强制类型转化
//	//ps = &p;
//	
//	return 0;
//
//}


//#include<iostream>
//#include<string>
//using namespace std;
//class Person
//{
//protected:
//	string _name; // 姓名
//	string _sex; // 性别
//	int _age; // 年龄
//};
//class Student : public Person
//{
//public:
//	int _No; // 学号
//};
//void Test()
//{
//	Student sobj;
//	// 1.子类对象可以赋值给父类对象/指针/引用
//	Person pobj = sobj;
//	Person* pp = &sobj;
//	Person& rp = sobj;
//	//2.基类对象不能赋值给派生类对象
//	sobj = pobj;
//	// 3.基类的指针可以通过强制类型转换赋值给派生类的指针
//	pp = &sobj;
//	Student * ps1 = (Student*)pp; // 这种情况转换时可以的。
//	ps1->_No = 10;
//	pp = &pobj;
//	Student* ps2 = (Student*)pp; // 这种情况转换时虽然可以，但是会存在越界访问的问题
//	ps2->_No = 10;
//}


//#include<iostream>
//using namespace std;
//class Base
//{
//public:
//	void TestBase(int a)
//	{
//		cout << a << endl;
//	}
//	int _b;
//};
//
//class Derived:public Base
//{
//public:
//	//我在派生类里面现在同样定义了一个变量
//	//但是我不小心将变量的名称和基类中变量的名称给成了同一个名称
//	char _b;
//};
//
////在继承体系中，如果派生类和基类有相同名称的成员时：
////这个相同名称的成员可以是成员变量也可以是成员函数
////如果是成员变量的话，与变量类型是否相同无关，只要名字是一样的，通过派生类对象去访问的时候
////优先访问到的都是派生类中的同名成员变量。基类中的同名成员，如果直接去访问的话
////是直接访问不到的，相当于是被子类的同名成员屏蔽了---这也就是同名隐藏
////如果这个时候想要通过派生类的对象去访问基类的对象的话，也是可以的，只需要在前面加上
////基类的名称和作用域限定符其实就是可以的了(和类型一不一样是么有任何关系的)
////如果是成员函数的话，那么就是与函数原型是否相同是没有任何关系的
////只要名称一样就会发生同名隐藏
//int main()
//{
//	//那么，现在问题其实也就出现了
//	//那么基类中的_b能否能继续继承在子类当中呢
//	Derived d;
//	cout << sizeof(d) << endl;   //打印的大小是8个字节，说明将基类中的对象也继承下来了
//	//子类的对象和基类的对象是不会产生冲突的
//
//
//	d._b = 100;  //如果继承下来了的话，那么这个位置访问的是子类的对象还是基类的对象
//	//那么既然子类我自己也是拥有这个对象的，那么我就会优先去访问我自己的对象 
//	return 0;
//}


