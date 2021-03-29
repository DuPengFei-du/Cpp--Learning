#define _CRT_SECURE_NO_WARNINGS 1



#include<iostream>
using namespace std;
int globalVar = 1;
static int staticGlobalVar = 1;
void Test()
{
	static int staticVar = 1;
	int localVar = 1;
	int num1[10] = { 1, 2, 3, 4 };
	char char2[] = "abcd";
	char* pChar3 = "abcd";
	int* ptr1 = (int*)malloc(sizeof(int) * 4);
	int* ptr2 = (int*)calloc(4, sizeof(int));
	int* ptr3 = (int*)realloc(ptr2, sizeof(int) * 4);
	free(ptr1);
	free(ptr3);
}
//ѡ�� : A.ջ B.�� C.���ݶ� D.�����
//	globalVar�����___C _ staticGlobalVar�����___C_
//	staticVar�����__ C__ localVar�����__A __
//	num1 �����__A__
//	char2�����__A__ * char2�����A___
//	pChar3�����___A_ * pChar3�����D____
//	ptr1�����___A_ * ptr1�����_B___
//	2. ����⣺
//	sizeof(num1) = __40__;
//sizeof(char2) = ____5; strlen(char2) = ___4_;
//sizeof(pChar3) = ____4; strlen(pChar3) = ___4_;
//sizeof(ptr1) = ____4;


//new��delete�����������
#include<iostream>
using namespace std;
int main()
{
	//���뵥��Ԫ�صĿռ�
	int* p1 = new int;  //Ҫnew����ʲô���͵Ŀռ䣬ֱ�ӽ��������͸���new�ĺ���Ϳ�����
	//new�����Ŀռ�����ָ�������н���
	//new������ϵĶ������͵�����
	//ʹ�����ַ����ĺô������ڲ���Ҫ����ǿ������ת��
	//Ҳ����Ҫ�û�ȥ������Ҫ���ٶ���ڴ�ռ�Ŀռ�(malloc��ȱ��)

	int* p2 = new int(10);
	//������new���뵥���ռ�Ļ���������Ϊ��οռ���г�ʼ���Ĳ���
	//���ھ���������һ�����εĿռ䣬Ȼ����������εĿռ��ֵΪ10
	//Ҳ����˵ʹ��new���Գ�ʼ����������ϣ������ʼ����Ϊ��ֵ
	//������C���������ǲ��еģ�C��������ֻ�ܳ�ʼ����0(calloc�����Ĺ���)
	//new���Խ��ռ��ʼ����Ϊ�����ֵ

	//���������Ŀռ�
	int* p3 = new int[10];  //���ǿ�����һ��10�����ε������ռ�
	//��������new�����������ռ��ʱ�򣬿���ͬʱ������г�ʼ���Ĳ���������
	int* p4 = new int[4]{ 1,2,3,4 };   //������ȫ����ͨ�������
	return 0;
}


//new��delete�����������
#include<iostream>
using namespace std;
int main()
{
	//���뵥��Ԫ�صĿռ�
	int* p1 = new int;  //Ҫnew����ʲô���͵Ŀռ䣬ֱ�ӽ��������͸���new�ĺ���Ϳ�����
	//new������ϵĶ������͵�����
	//ʹ�����ַ����ĺô������ڲ���Ҫ����ǿ������ת��
	//Ҳ����Ҫ�û�ȥ������Ҫ���ٶ���ڴ�ռ�Ŀռ�

	int* p2 = new int(10);
	//������new���뵥���ռ�Ļ���������Ϊ��οռ���г�ʼ���Ĳ���
	//���ھ���������һ�����εĿռ䣬Ȼ����������εĿռ��ֵΪ10
	//Ҳ����˵ʹ��new���Գ�ʼ����������ϣ������ʼ����Ϊ��ֵ
	//������C���������ǲ��еģ�C��������ֻ�ܳ�ʼ����0

	//���������Ŀռ�
	int* p3 = new int[10];  //���ǿ�����һ��10�����ε������ռ�
	//��������new�����������ռ��ʱ�򣬿���ͬʱ������г�ʼ���Ĳ���������
	int* p4 = new int[4]{ 1,2,3,4 };   //������ȫ����ͨ�������
	//�����ʼ���ķ�����C++11�������ṩ��һ���µ�����

	//�ռ���ͷ�
	delete p1;
	delete p2;
	//p1��p2�Ŀռ���ջ�ϣ�����������ָ��Ŀռ��ڶ���

	//���delete�ͷŵ���һ�������Ŀռ�Ļ�����Ҫ��delte[]�������ͷ�

	delete[] p3;
	delete[] p4;
	//p3��p4���������һ����ʼ���ˣ�һ��û�н��г�ʼ��

	return 0;
}


#include<iostream>
using namespace std;
class Test
{
public:
	//���캯��
	Test()
	{
		cout << "Test()" << this << endl;   //��ӡ��ǰ��������ĸ�����
	}

	//��������
	~Test()
	{
		cout << "~Test()" << this << endl;   //��ӡ��ǰ��������ĸ�����
	}
private:
	int _t;
};

void TestNewDelete()
{
	Test* pt1 = new Test;   //new��������Ŀռ䲻��Ҫ�����пգ����������¶��ǿ��Ա�֤����ռ�ɹ���
	delete pt1;

	Test* pt2 = new Test[10];   //������10�����󣬾ͻ����10�˹��캯��
	delete[] pt2;

}

int main()
{
	//��new�������Զ������͵Ŀռ�
	TestNewDelete();
	return 0;
}


#include<iostream>
#include <crtdbg.h>
using namespace std;
void TestFunc()
{
	int* p1 = (int*)malloc(sizeof(int));
	delete p1;

	int* p2 = (int*)malloc(sizeof(int));
	delete[] p2;

	int* p3 = new int;
	free(p3);

	int* p4 = new int;
	delete[] p4;

	int* p5 = new int[10];
	free(p5);

	int* p6 = new int[10];
	delete p6;
	//��������deleteȥ�����ͻ������������ֱ�����Ϣ
}

int main()
{
	TestFunc();
	_CrtDumpMemoryLeaks();   //���ڼ���ڴ��Ƿ���й©�ķ���
	return 0;
}


#include<iostream>
using namespace std;
class Test
{
public:
	Test()
	{
		_ptr = new int[10];
	}

	~Test()
	{
		delete[] _ptr;
		_ptr = nullptr;
	}

private:
	int* _ptr;
};

void TestFunc()
{
	//����
	//���������ԭ�����ڣ�ʹ��malloc��������ռ��ʱ��malloc��û�е��ù��캯����
	//���������delete�ǻ�ȥ�������������ģ���ô��ʱ���û�ж�����ȷ��ָ�򣬵������������Ļ�
	//��һ���������
	//��������ptr��thisָ���Ǵ��ڵģ�����thisָ����ָ������������ֵ�����Բ��ܶ�������ͷ�
	//һ�ͷžͻᷢ�����������
	//p1��Ϊû�е��ù��캯��������p1ָ��Ĳ�����һ�����󣬶�delete�Ὣp1��ָ��Ŀռ䵱�ɶ����ͷ�
	//�������ڸ���û�ж������Դ�������
	//��Ϊ_ptrָ�벢û�б���ʼ�������Դ�������
	Test* p1 = (Test*)malloc(sizeof(Test));
	delete p1;

	//����
	//�����������ǲ��ģ�ͬ����delete[]Ҳ�ǻ�ȥ��������������
	//������ʹ��malloc�Ļ���������ʵ��û�еģ���Ϊmalloc����ȥ���ù��캯����
	//û��������󻹷�Ҫȥ�ͷŵĻ�����ô��һ���ᷢ��������
	Test* p2 = (Test*)malloc(sizeof(Test));
	delete[] p2;

	//�ڴ�й©
	//ԭ��������newȥ����ռ�Ļ����ǻ�ȥ���ù��캯���ģ���ôthisָ��ʵ���Ͼ����൱������
	//��ȷ��ָ���ˣ��������ͷŶ������Դ��ʱ��ʹ����free
	//free�ǲ���ȥ�������������ģ����Զ������Դ��ʵ��û�б��ͷŵ���
	//�����ǻ�����ڴ�й©��
	//p3��ָ�����Ŀռ䣬�����������������ʵ������Դ��
	//free��û�аѶ�������Ŀ׼����ͷŵ�������˵������ڴ�й©������
	Test* p3 = new Test;
	//p3�Ŀռ�����ջ�ϵģ�p3��ָ����������Ŀռ����ڶ��ϵ�
	free(p3);
	_CrtDumpMemoryLeaks();
	//�������������������ڴ��Ƿ�й¶��
	//����ȱ�����ڣ�������������ǣ��ڴ����е��ĸ�λ���ڴ�й©��

	//����
	Test* p4 = new Test;
	delete[] p4;

	//����
	Test* p5 = new Test[10];
	free(p5);

	//����+�ڴ�й©
	Test* p6 = new Test[10];
	delete p6;
}
//�漰��[]��λ�ö�����������
int main()
{
	TestFunc();
	return 0;
}


#include<iostream>
#include <crtdbg.h>
using namespace std;
class Test
{
public:
	Test()
	{
		cout << "Test()" << endl;
	}

	~Test()
	{
		cout << "~Test():" << this << endl;
	}

private:
	int _data;
};

void TestFunc()
{
	//����û���κε����⣬ԭ����������ֻ��һ�����ݳ�Ա����û����Ƶ���Դ�Ĺ���
	//���������Ƶ�����Դ�Ĺ���Ļ���new��delete����Ҫƥ��ʹ�òſ���
	Test* p1 = (Test*)malloc(sizeof(Test));
	delete p1;

	//����
	Test* p2 = (Test*)malloc(sizeof(Test));
	delete[] p2;

	//û�з����ڴ�й©
	 //��Ϊ����û���漰����Դ�Ĺ���
	 //�ͺñ�˵�������࣬��ʵ�������Ƿ����������������û��ʲôӰ���
	Test* p3 = new Test;
	free(p3);
	_CrtDumpMemoryLeaks();

	//����
	Test* p4 = new Test;
	delete[] p4;

	//����
	Test* p5 = new Test[10];
	free(p5);

	//����
	Test* p6 = new Test[10];
	delete p6;
}


#include<iostream>
using namespace std;
class Test
{
public:
	Test()
	{
		cout << "Test():" << this << endl;
	}

	// 	~Test()
	// 	{
	// 		cout << "~Test():" << this << endl;
	// 	}

private:
	int _data;
};

int main()
{
	Test* pt = new Test;
	//new����ȥ����ռ䣬��ȥ����operator new�ķ���
	//Ȼ��ȥ���ù��캯��(��Ҳ�ͺ�ǰ��˵�Ĺ��캯�������������ٿռ��Ӧ����)
	//ֻ����Ѷ����ʼ���ã�������ȥ���ٿռ�
	delete pt;

	Test* pt = new Test[10];
	delete[] pt;

	return 0;
}


#include<iostream>
using namespace std;
class Test
{
public:
	Test()
	{
		cout << "Test():" << this << endl;
	}

	// 	~Test()
	// 	{
	// 		cout << "~Test():" << this << endl;
	// 	}

private:
	int _data;
};

int main()
{

	Test* pt = new Test[10];
	delete[] pt;

	return 0;
}


struct ListNode
{
	ListNode* _next;
	ListNode* _prev;
	int _data;
	void* operator new(size_t n)
	{
		void* p = nullptr;
		p = allocator<ListNode>().allocate(1);
		cout << "memory pool allocate" << endl;
		return p;
	}
	void operator delete(void* p)
	{
		allocator<ListNode>().deallocate((ListNode*)p, 1);
		cout << "memory pool deallocate" << endl;
	}
};
class List
{
public:
	List()
	{
		_head = new ListNode;
		_head->_next = _head;
		_head->_prev = _head;
	}
	~List()
	{
		ListNode* cur = _head->_next;
		while (cur != _head)
		{
			ListNode* next = cur->_next;
			delete cur;
			cur = next;
		}
		delete _head;
		_head = nullptr;
	}
private:
	ListNode* _head;
};
int main()
{
	List l;
	return 0;
}


int main()
{
	int* p = (int*)malloc(sizeof(int) * 10);
	free(p);
	return 0;
}


#include<iostream>
using namespace std;
class Test
{
public:
	Test(int t = 20)
		: _t(t)
	{
		cout << "Test():" << this << endl;
	}
	~Test()
	{
		cout << "~Test():" << this << endl;
	}
private:
	int _t;
};
int main()
{
	//ע��:ptָ��Ŀռ䲢����һ��test���͵Ķ���
	//��Ϊmalloc�����ǲ�����ù��캯����
	//����û�д�����������
	//�����Ҫ��ptָ��Ŀռ���Test���͵Ķ���Ļ�
	//ֻ��Ҫ�ڸÿռ���ִ�й��캯����ɳ�ʼ���Ĳ���
	//��ô��Ҫ������ֲ����Ļ�������Ҫʹ�ö�λnew��
	Test* pt = (Test*)malloc(sizeof(Test));

	new(pt) Test;
	//�����������֮�����һ�������Ķ���

	//��Ȼ��������캯���в����Ļ�����Ҳ���԰ѹ��캯���Ĳ�������
	//���������������
	//new(pt) Test��100);

	//��Ȼ�Ѿ���һ�������ˣ�����֮��ǵ��ͷŵ�
	delete pt;

	return 0;
}


#include<iostream>
using namespace std;
class Test
{
	~Test()
	{
		delete this;
	}
};
int main()
{
	return 0;
}


// ����������x64�Ľ��̣���������ĳ������ԣ�
#include <iostream>
using namespace std;
int main()
{
	void* p = new char[0xfffffffful];
	cout << "new:" << p << endl;
	return 0;
}


#include<iostream>

//�����ռ䲻�����ͣ���һ��������
//C��������ȫ��������;ֲ�������
//���������ռ��൱���Ƕ�����һ���µ�������
namespace N1
{
	//���Զ��������Ҳ���Զ��庯��
	int a = 1;
	int b = 2;
	int Add(int left, int right)
	{
		return left + right;
	}
}

int a = 20;  //��ô�������Ҫ��ӡȫ���������е�a�Ļ�����Ҫ��ô��ӡ��
//printf("%d\n", ::a); 

int main()
{
	int a = 30;
	printf("%d\n", a);  //�����ʱ�����printf������ӡ�Ŀ϶����������е�a
	printf("%d\n", ::a);  //::Ϊ�������޶����������һ������ǰ��
	//������::�ʹ��������ڷ��ʵ���ȫ���������еı���
	printf("%d\n", N1::a);
	//���������ռ��a��ֻ��Ҫ���������޶�����ǰ����������ռ�����ƾͿ�����
	return 0;
}
//����a�ֱ�����������ͬ�����������Ա��������ǲ������κ������
//��ô����ʲô����»���������ģ�
//������ͬһ�������ռ�����������ͬ�ı�����ʱ�����ʱ�����������


namespace N2
{
	int a = 10;
	int b = 20;
	int c = 30;
	int Sub(int left, int right)
	{
		return left - right;
	}
	//�����ռ仹����Ƕ��
	namespace N3
	{
		int a = 10;
		int b = 20;
		int Mul(int left, int right)
		{
			return left * right;
		}
	}
}
printf("%d\n", N2::N3::a);  //���������н��е���


int main()
{
	printf("%d\n", N1::a);
	return 0;
}
//ȱ�ݾ���ʹ��������Щ�鷳��ÿ�ζ�Ҫ���������޶���


using N::b;  //�൱����ȫ�ֱ�����������ʱ���ٶ���һ��int b; ��ô�ͻ������
int main()
{
	printf("%d\n", N::a);
	printf("%d\n", b);
}
//�ŵ���ʹ�÷��㣬ȱ�������������ͻ(������ʾ��int b);
//�����ͻ�ˣ�Ҳ�ܺý�����ٱ�����ǰ��������ռ�������ټ��ϾͿ����ˡ�


#include<iostream>
using namespace std;
int main()
{
	//C�������ǲ����printf���������﷨����
	//printf("%d %d %d", 10);    //�������ǲ��ᱨ���
	//������ȫ����ͨ������ģ�ֻ�ǻ��о���
	//���������ں�����������δ֪��
	//ʹ��printf����һ����̫�õĵ����
	//Ҫ���ʲô���͵����ݣ������ʽ���Ʒ�һ��Ҫ���ԣ�������Ҫ�����Լ�������
	//Ҫ��ס�ܶ��ָ�ʽ�������׳���
	//������C++������ʹ��cout
	cout << "change world" << endl;
	cout << 10 << " " << 12.34 << " " << 'a' << endl;
	//�����ں�������Ķ�����������ʲô
	return 0;
}


#include <iostream>
using namespace std;
int main()
{
	int a;
	double b;
	char c;
	cin >> a;
	cin >> b >> c;
	cout << a << endl;
	cout << b << " " << c << endl;
	return 0;
}


void Test(int a = 10)   //������һ��Ĭ��ֵ���ô��������������治�ô�����
//����û��ٵ��ú�����ͬʱ�����˴��β�������ôʹ�õľ����û�������ȥ�Ĳ���
{
	cout << a << endl;
}
int main()
{
	Test();
	Test(100);
	return 0;
}



//ȱʡ�����ķ���
//ȫȱʡ�����Ͱ�ȱʡ����
void TestFunc(int a = 1, int b = 2, int c = 3)
{
	//���в�������ȱʡֵ��Ϊȫȱʡ����
	cout << a << ' ' << b << ' ' << c << ' ' << endl;
}

//��ȱʡ����
//void TestFunc2(int a=1,int b=2,int c)   
//�޷�ͨ�����룬��b��ֵ�õ���Ҳ�޷�ͨ������
//ֻ�а�a��ֵ�õ�������ͨ������
//a��b���õ�����cҲ�ǿ��Ե�
//�ó����ɣ�ע�⣺��ȱʡ����ֻ�ܴ�������һ�θ���
void TestFunc2(int a, int b, int c = 3)  //����ͨ������
{
	//���ֲ�������ȱʡֵ
	cout << a << ' ' << b << ' ' << c << ' ' << endl;
}
int main()
{
	//ȫȱʡ
	TestFunc();  //��ӡ 1 2 3
	TestFunc(10);  //��ӡ 10 2 3 
	TestFunc(10, 20);  //��ӡ10 20 3
	TestFunc(10, 20, 30);  //��ӡ10 20 30

	//��ȱʡ
	TestFunc2(10, 20);
	TestFunc2(10, 20, 30);

	return 0;
}


int Add(int left, int right)
{
	return left + right;
}

double Add(double left, double right)
{
	return left + right;
}
//�����б�һ��
//����Ϊ��������
//���õ�ʱ�򣬵������ֵģ��������ֵ�
//�������ڱ����ʱ��Ҫ���в������͵����ݣ���Ҫȷ���������Ĳ���������ʲô���͵�
int main()
{
	Add(1, 2);
	Add(1.2, 3.4);  //�����ǿ���ͨ������ģ����Ǽ����ֵ�ǲ��Ե�
	//c�����ǲ����������ĺ�����
	return 0;
}


void TestFunc()
{}
void TestFunc(int a = 0)
{}
int main()
{
	TestFunc(10);  //�ǿ���ͨ������ģ������������ĸ�����
	TestFunc();    //�ǲ���ͨ�������
	//�����غ����ĵ��ò���ȷ����һ�����Ե��ã��ڶ���Ҳ���Ե���
	return 0;
}


#include<iostream >
using namespace std;

void Swap(int a, int b)
{
	cout << &a << " " << &b << " " << endl;
	int temp = a;
	a = b;
	b = temp;
	//���������βε����ݣ�����ʵ�ε�����
}

void Swap(int* pa, int* pb)
{
	cout << &pa << " " << &pb << " " << endl;
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}

//����swap�γ�������
int main()
{
	int a = 1;
	int b = 2;
	cout << &a << " " << &b << " " << endl;
	//Swap(a, b);  //���ֻ��ֵ���ݵĻ����ǲ��е�
	Swap(&a, &b);
	cout << a << " " << b << " " << endl;
}


int main()
{
	int a = 10;
	//int& ra;  //�������޷�ͨ������ģ���Ϊ�������͵ı���û�н��г�ʼ������
	//�����ǲ��е�
	int& ra = a;
	//ra��a�ı�����Ҳ����˵��ra��a��ͬһ������
	//��ο���ra��a��һ����������ӡ���ǵĵ�ַ���Ϳ�����
	cout << &ra << " " << &a << " " << endl;
	//����ӡ�ĵ�ַ��һ����
	//��ô�����Ǹ�ra���и�ֵ�Ļ���a��ֵҲ�ᷢ���ı�
	ra = 20;
	cout << a << endl;  //��ӡ��a��ֵҲΪ20
	return 0;
}


int main()
{
	int a = 10;
	int& ra = a;  //ra��a�ı���
	cout << &ra << "=" << &a << endl;
	ra = 20;  //�ı���ra��ͬʱ����ôa��ֵҲ�ǻᷢ���ı��

	int& rb = a;  //rbҲ������a ��һ�����������ж������
	rb = 30;  //��ô�޸�rb��ͬʱ��ra��aҲ�������˸ı�

	int& rra = ra;
	rra = 40;   //��ô���ᷢ���ı�
	//��Ϊ�õĶ���ͬһ��ռ�

	cout << a << " " << ra << " " << rb << " " << rra << " " << endl;

	return 0;
}


#include<iostream>
using namespace std;
#define MAX(a,b) (((a)>(b))?(a):(b))
int main()
{
	int a = 10;
	int b = 20;
	cout << MAX(a, b) << endl;
	return 0;
}


#include<iostream>
using namespace std;
inline int Add(int left, int right)
{
	return left + right;
}
int main()
{
	int a = 10;
	int b = 20;
	cout << Add(a, b) << endl;    //�滻�����ڱ���׶�
	cout << Add(a, ++b) << endl;    //�滻�����ڱ���׶�
	//��Ϊ�滻�����ڱ���׶Σ�����������뵽������������ȥ����������Ч�ʻ�Ƚϸ�
	//����û��չ���Ϳ�����������û��ֱ�ӵ�����������Ϳ�����
	return 0;
}


// F.h
#include <iostream>
using namespace std;
inline void f(int i);
// F.cpp
#include "F.h"
void f(int i)
{
	cout << i << endl;
}
// main.cpp
#include "F.h"
int main()
{
	f(10);
	return 0;
}
// ���Ӵ���main.obj : error LNK2019: �޷��������ⲿ���� "void __cdecl f(int)" (?
//f@@YAXH@Z)���÷����ں��� _main �б����ñ�
//inline���ε����ƾ����ļ�������Ҳ����˵ֻ���ڵ�ǰ�ļ������ã���������ֻ�������Լ��ĵ�ǰ�ļ��ڲ���������static,����һ�㲻�������Ͷ���ֿ���


#include<iostream>
using namespace std;
int main()
{
	auto a = 10;  //�ǽ����������� (��������Ҫȥ����a������)
	auto b = 12.34;   �ǽ������Ǹ�����
		auto c = a + b;   //�������Լ�ȥ���
	cout << typeid(a).name() << endl;
	cout << typeid(b).name() << endl;
	cout << typeid(c).name() << endl;
	return 0;
}