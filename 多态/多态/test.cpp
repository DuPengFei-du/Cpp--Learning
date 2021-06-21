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
//		cout << "ȫ��Ʊ" << endl;
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
//	//��Ϊ����Ĺ��캯���Ƿ�ȱʡ�ģ������������Ҫ���������Լ��Ĺ��캯��
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
//		cout << "���Ʊ" << endl;
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
//		cout << "���Ʊ" << endl;
//	}
//protected:
//	string _which;
//};
//
////�����ڽ��б����ʱ�򣬲�����֪��p�������׻������ĸ���Ķ�����˱����ڼ䲢��֪��
////����Ҫ�����ĸ�����麯��
////�ڴ������е�ʱ�򣬿���֪��p�������õ��ĸ���Ķ��󣬲ſ���ȥ�����������麯��
//void TestBuyTicket(Person& p)
//{
//	p.BuyTicket();
//}
//
//int main()
//{
//	Person p("����", "��", 20, "��ҵ");
//
//	Student stu("Peter", "��", 20, "ѧ��", 100);
//
//	Soldier sol("����","Ů",23, "����", "...");
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
//		cout << "ȫ��Ʊ" << endl;
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
//	//��Ϊ����Ĺ��캯���Ƿ�ȱʡ�ģ������������Ҫ���������Լ��Ĺ��캯��
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
//		cout << "���Ʊ" << endl;
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
//		cout << "���Ʊ" << endl;
//	}
//protected:
//	string _which;
//};
//
////�����ڽ��б����ʱ�򣬲�����֪��p�������׻������ĸ���Ķ�����˱����ڼ䲢��֪��
////����Ҫ�����ĸ�����麯��
////�ڴ������е�ʱ�򣬿���֪��p�������õ��ĸ���Ķ��󣬲ſ���ȥ�����������麯��
//void TestBuyTicket(Person& p)
//{
//	p.BuyTicket();
//}
//
//int main()
//{
//	Person p("����", "��", 20, "��ҵ");
//
//	Student stu("Peter", "��", 20, "ѧ��", 100);
//
//	Soldier sol("����", "Ů", 23, "����", "...");
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
////������Base���һ��ָ��
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
////������Base���һ��ָ��
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
//	//�����ڸ�һ�������ָ�룬ȥnewһ������Ķ���
//	Base* pb = new Base;
//	//delete  ��ʱ��������Ӧ�������������
//	//pb����ָ����ǻ���Ķ���
//	//���ͷ�pbָ��Ļ�������ڼ䣬�ȵ��û���������������ͷſռ�
//	delete pb;
//
//	//pb����ָ���������Ķ���
//	//���ͷ�pbָ�����������ڼ䣬�ȵ�������������������ͷſռ�
//	//�������Ƿ�������û�����������������
//	//���ǵ��õ��ǻ������������
//	pb = new Derived;
//	delete pb;
//
//	//pb�ǻ����ָ�룬����ָ������������Ķ��󣬵������ͷŵ�ʱ��
//	//Ӧ�ø���pbָ�����Ĳ�ͬȥ����pb��ָ��������������
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
//	virtual void TetsFunc1()override    //�����override֮�����Ͼͳ����˺�ɫ���ߣ�����û�г�������е��麯��
//		���ʱ��ȥ���б���Ļ�����ʵ�ͻ�����ǽ��б�����
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
//	virtual void TestFunc1()override    //�����override֮�����Ͼͳ����˺�ɫ���ߣ�����û�г�������е��麯��
//		//���ʱ��ȥ���б���Ļ�����ʵ�ͻ�����ǽ��б�����
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
////���ڵ���������DD����ֻ��Ҫ��дTestFunc1������Ҫ��дTestFunc2
////��ô����������C++��
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
//		//����Ȼ������Person�࣬�����Ҳ�û�и���Person�����
//		//����˵�����ǲ�֪������˵��������˻���Ů�˵�
//		//���ڣ����ǲ�֪��Person������ʲô�Ա������������������ʵ����ʱû�а취��ʵ�ֵ�
//		//ֻ��֪�����Ա�֮��ſ�������ʹ�ú���
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
////Person��Ȼû���Ա�Ļ�����ô���ǾͿ��԰�Person������һ���������
////Ҳ����˵���ǰ������ɾ��岻�����ڵģ�Ҳ����˵����ȥʵ��������
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
//	//�������������˵�Ҳ�д��������Ϊ���ڵ�������ǲ���ȫ��
//	//�Ҳ�֪���˵��Ա����������������ʵ��û����������
//
//	//�����ӵĺ�����ʵ���Ǵ��麯��
//	//Ȼ�����ǰѰ����д��麯�������Ϊ������
//	virtual void GoTo(const WashRoom& wc) = 0;
//
//private:
//	string _name;
//	int _age;
//};
//
////��ô�����ھ��൱��ϣ��ȥʵ�ֶ�̬
////��ôʵ�ֶ�̬�Ļ�������Ҫ�ѻ����еĺ�������u����
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


////Ϊʲô���а����麯����ʱ�򣬱������ͻ��������һ�ݹ��캯����
////���ɵĹ��캯����ʲô������
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
//	//��֤�����������׿ɲ�����Ϊ�麯��
//	//ֻ��������ǰ�����һ��virtual�ؼ���������һ����ʵ���ǿ��Ե�
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


