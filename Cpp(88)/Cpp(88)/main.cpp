#define _CRT_SECURE_NO_WARNINGS 1



//#include<iostream>
//using namespace std;
//int globalVar = 1;
//static int staticGlobalVar = 1;
//void Test()
//{
//	static int staticVar = 1;
//	int localVar = 1;
//	int num1[10] = { 1, 2, 3, 4 };
//	char char2[] = "abcd";
//	char* pChar3 = "abcd";
//	int* ptr1 = (int*)malloc(sizeof(int) * 4);
//	int* ptr2 = (int*)calloc(4, sizeof(int));
//	int* ptr3 = (int*)realloc(ptr2, sizeof(int) * 4);
//	free(ptr1);
//	free(ptr3);
//}
////ѡ�� : A.ջ B.�� C.���ݶ� D.�����
////	globalVar�����___C _ staticGlobalVar�����___C_
////	staticVar�����__ C__ localVar�����__A __
////	num1 �����__A__
////	char2�����__A__ * char2�����A___
////	pChar3�����___A_ * pChar3�����D____
////	ptr1�����___A_ * ptr1�����_B___
////	2. ����⣺
////	sizeof(num1) = __40__;
////sizeof(char2) = ____5; strlen(char2) = ___4_;
////sizeof(pChar3) = ____4; strlen(pChar3) = ___4_;
////sizeof(ptr1) = ____4;


////new��delete�����������
//#include<iostream>
//using namespace std;
//int main()
//{
//	//���뵥��Ԫ�صĿռ�
//	int* p1 = new int;  //Ҫnew����ʲô���͵Ŀռ䣬ֱ�ӽ��������͸���new�ĺ���Ϳ�����
//	//new�����Ŀռ�����ָ�������н���
//	//new������ϵĶ������͵�����
//	//ʹ�����ַ����ĺô������ڲ���Ҫ����ǿ������ת��
//	//Ҳ����Ҫ�û�ȥ������Ҫ���ٶ���ڴ�ռ�Ŀռ�(malloc��ȱ��)
//
//	int* p2 = new int(10);
//	//������new���뵥���ռ�Ļ���������Ϊ��οռ���г�ʼ���Ĳ���
//	//���ھ���������һ�����εĿռ䣬Ȼ����������εĿռ��ֵΪ10
//	//Ҳ����˵ʹ��new���Գ�ʼ����������ϣ������ʼ����Ϊ��ֵ
//	//������C���������ǲ��еģ�C��������ֻ�ܳ�ʼ����0(calloc�����Ĺ���)
//	//new���Խ��ռ��ʼ����Ϊ�����ֵ
//
//	//���������Ŀռ�
//	int* p3 = new int[10];  //���ǿ�����һ��10�����ε������ռ�
//	//��������new�����������ռ��ʱ�򣬿���ͬʱ������г�ʼ���Ĳ���������
//	int* p4 = new int[4]{ 1,2,3,4 };   //������ȫ����ͨ�������
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Test
//{
//public:
//	//���캯��
//	Test()
//	{
//		cout << "Test()" << this << endl;   //��ӡ��ǰ��������ĸ�����
//	}
//
//	//��������
//	~Test()
//	{
//		cout << "~Test()" << this << endl;   //��ӡ��ǰ��������ĸ�����
//	}
//private:
//	int _t;
//};
//
//void TestNewDelete()
//{
//	Test* pt1 = new Test;   //new��������Ŀռ䲻��Ҫ�����пգ����������¶��ǿ��Ա�֤����ռ�ɹ���
//	delete pt1;
//
//	Test* pt2 = new Test[10];   //������10�����󣬾ͻ����10�˹��캯��
//	delete[] pt2;
//
//}
//
//int main()
//{
//	//��new�������Զ������͵Ŀռ�
//	TestNewDelete();
//	return 0;
//}


//#include<iostream>
//#include <crtdbg.h>
//using namespace std;
//void TestFunc()
//{
//	int* p1 = (int*)malloc(sizeof(int));
//	delete p1;
//
//	int* p2 = (int*)malloc(sizeof(int));
//	delete[] p2;
//
//	int* p3 = new int;
//	free(p3);
//
//	int* p4 = new int;
//	delete[] p4;
//
//	int* p5 = new int[10];
//	free(p5);
//
//	int* p6 = new int[10];
//	delete p6;
//	//��������deleteȥ�����ͻ������������ֱ�����Ϣ
//}
//
//int main()
//{
//	TestFunc();
//	_CrtDumpMemoryLeaks();   //���ڼ���ڴ��Ƿ���й©�ķ���
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Test
//{
//public:
//	Test()
//	{
//		_ptr = new int[10];
//	}
//
//	~Test()
//	{
//		delete[] _ptr;
//		_ptr = nullptr;
//	}
//
//private:
//	int* _ptr;
//};
//
//void TestFunc()
//{
//	//����
//	//���������ԭ�����ڣ�ʹ��malloc��������ռ��ʱ��malloc��û�е��ù��캯����
//	//���������delete�ǻ�ȥ�������������ģ���ô��ʱ���û�ж�����ȷ��ָ�򣬵������������Ļ�
//	//��һ���������
//	//��������ptr��thisָ���Ǵ��ڵģ�����thisָ����ָ������������ֵ�����Բ��ܶ�������ͷ�
//	//һ�ͷžͻᷢ�����������
//	//p1��Ϊû�е��ù��캯��������p1ָ��Ĳ�����һ�����󣬶�delete�Ὣp1��ָ��Ŀռ䵱�ɶ����ͷ�
//	//�������ڸ���û�ж������Դ�������
//	//��Ϊ_ptrָ�벢û�б���ʼ�������Դ�������
//	Test* p1 = (Test*)malloc(sizeof(Test));
//	delete p1;
//
//	//����
//	//�����������ǲ��ģ�ͬ����delete[]Ҳ�ǻ�ȥ��������������
//	//������ʹ��malloc�Ļ���������ʵ��û�еģ���Ϊmalloc����ȥ���ù��캯����
//	//û��������󻹷�Ҫȥ�ͷŵĻ�����ô��һ���ᷢ��������
//	Test* p2 = (Test*)malloc(sizeof(Test));
//	delete[] p2;
//
//	//�ڴ�й©
//	//ԭ��������newȥ����ռ�Ļ����ǻ�ȥ���ù��캯���ģ���ôthisָ��ʵ���Ͼ����൱������
//	//��ȷ��ָ���ˣ��������ͷŶ������Դ��ʱ��ʹ����free
//	//free�ǲ���ȥ�������������ģ����Զ������Դ��ʵ��û�б��ͷŵ���
//	//�����ǻ�����ڴ�й©��
//	//p3��ָ�����Ŀռ䣬�����������������ʵ������Դ��
//	//free��û�аѶ�������Ŀ׼����ͷŵ�������˵������ڴ�й©������
//	Test* p3 = new Test;
//	//p3�Ŀռ�����ջ�ϵģ�p3��ָ����������Ŀռ����ڶ��ϵ�
//	free(p3);
//	_CrtDumpMemoryLeaks();
//	//�������������������ڴ��Ƿ�й¶��
//	//����ȱ�����ڣ�������������ǣ��ڴ����е��ĸ�λ���ڴ�й©��
//
//	//����
//	Test* p4 = new Test;
//	delete[] p4;
//
//	//����
//	Test* p5 = new Test[10];
//	free(p5);
//
//	//����+�ڴ�й©
//	Test* p6 = new Test[10];
//	delete p6;
//}
////�漰��[]��λ�ö�����������
//int main()
//{
//	TestFunc();
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Test
//{
//public:
//	Test()
//	{
//		cout << "Test():" << this << endl;
//	}
//
//	// 	~Test()
//	// 	{
//	// 		cout << "~Test():" << this << endl;
//	// 	}
//
//private:
//	int _data;
//};
//
//int main()
//{
//	Test* pt = new Test;
//	//new����ȥ����ռ䣬��ȥ����operator new�ķ���
//	//Ȼ��ȥ���ù��캯��(��Ҳ�ͺ�ǰ��˵�Ĺ��캯�������������ٿռ��Ӧ����)
//	//ֻ����Ѷ����ʼ���ã�������ȥ���ٿռ�
//	delete pt;
//
//	Test* pt = new Test[10];
//	delete[] pt;
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Test
//{
//public:
//	Test()
//	{
//		cout << "Test():" << this << endl;
//	}
//
//	// 	~Test()
//	// 	{
//	// 		cout << "~Test():" << this << endl;
//	// 	}
//
//private:
//	int _data;
//};
//
//int main()
//{
//
//	Test* pt = new Test[10];
//	delete[] pt;
//
//	return 0;
//}


//struct ListNode
//{
//	ListNode* _next;
//	ListNode* _prev;
//	int _data;
//	void* operator new(size_t n)
//	{
//		void* p = nullptr;
//		p = allocator<ListNode>().allocate(1);
//		cout << "memory pool allocate" << endl;
//		return p;
//	}
//	void operator delete(void* p)
//	{
//		allocator<ListNode>().deallocate((ListNode*)p, 1);
//		cout << "memory pool deallocate" << endl;
//	}
//};
//class List
//{
//public:
//	List()
//	{
//		_head = new ListNode;
//		_head->_next = _head;
//		_head->_prev = _head;
//	}
//	~List()
//	{
//		ListNode* cur = _head->_next;
//		while (cur != _head)
//		{
//			ListNode* next = cur->_next;
//			delete cur;
//			cur = next;
//		}
//		delete _head;
//		_head = nullptr;
//	}
//private:
//	ListNode* _head;
//};
//int main()
//{
//	List l;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Test
//{
//public:
//	Test(int t = 20)
//		: _t(t)
//	{
//		cout << "Test():" << this << endl;
//	}
//	~Test()
//	{
//		cout << "~Test():" << this << endl;
//	}
//private:
//	int _t;
//};
//int main()
//{
//	//ע��:ptָ��Ŀռ䲢����һ��test���͵Ķ���
//	//��Ϊmalloc�����ǲ�����ù��캯����
//	//����û�д�����������
//	//�����Ҫ��ptָ��Ŀռ���Test���͵Ķ���Ļ�
//	//ֻ��Ҫ�ڸÿռ���ִ�й��캯����ɳ�ʼ���Ĳ���
//	//��ô��Ҫ������ֲ����Ļ�������Ҫʹ�ö�λnew��
//	Test* pt = (Test*)malloc(sizeof(Test));
//
//	new(pt) Test;
//	//�����������֮�����һ�������Ķ���
//
//	//��Ȼ��������캯���в����Ļ�����Ҳ���԰ѹ��캯���Ĳ�������
//	//���������������
//	//new(pt) Test��100);
//
//	//��Ȼ�Ѿ���һ�������ˣ�����֮��ǵ��ͷŵ�
//	delete pt;
//
//	return 0;
//}


////��ǰ��ͬѧ�����Թ��ʵ��������ʵ��һ��ͨ�õļӷ�����
////�е��˸���������Ĵ�
////���������ú���������ʵ��һ��ͨ�õļӷ�����
////����Ĵ��뿴��ȥ�ǿ���ʵ��ͨ�õĹ��ܵ�
////������ϸ���ǵĻ������Ǵ����кܶ������

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//double Add(double x, double y)
//{
//	return x + y;
//}
//
//short Add(short x, short y)
//{
//	return x + y;
//}
//
//float Add(float x, float y)
//{
//	return x + y;
//}
//
//int main()
//{
//	Add(1, 2);
//
//	Add(1.0, 2.0);
//
//	return 0;
//}


////����ģ��
////�û���һ����«����������ư
//#include<iostream>
//using namespace std;
//int Add(int x, int y)
//{
//	return x + y;
//}
//T Add(T x, T y)
//{
//	return x + y;
//}
////���ʱ��T���״������ʲô���ͣ�������ʵ�ǲ�֪����
////���ң����ʱ�����ֱ��ȥ����Ļ���������һ���ᱨ���
////��Ϊ������T�����Ǹ�ʲô����������������ʵ�ǲ���֪����
////���Կ϶��ǻᱨ���
////������������Ҫ���߱�������������һ��ʲô����
//int main()
//{
//	return 0;
//}


////����ģ��
////�û���һ����«����������ư
//#include<stdio.h>
//template<typename T>    //ģ������б�
//T Add(T x, T y)         //�����б�
//{
//	return x + y;
//}
////������������Ҫ���߱�������������һ��ʲô����
//int main()
//{
//	Add(1.0, 2.0);
//	Add(1, 2);
//	return 0;
//}


////����ģ��
////�û���һ����«����������ư
//#include<iostream>
//using namespace std;
//template<typename T>
//T Add(T x, T y)
//{
//	return x + y;
//}
//
//template<typename T, U>
//T Add(T x, U y)
//{
//	return x + y;
//}
//int main()
//{
//	Add(1.0, 2.0);
//	Add(1, 2);
//	//���������������������������Ͷ���һ��һ���ģ���ô����
//	//����˵�Ҹ������������������ǲ�һ�����������ô�������Դ�����
//	Add(1, 2.0);
//	//���ʱ������ȥ���б��룬�ͻᷢ�ֱ��������
//	//�����ԭ������ڣ����������������������������ǲ�һ����
//	//��ô���������ھ���Ҫһ���µ�ģ����
//	//��������U�Ǹ�ģ�廹�ǻᱨ���
//	//�����ԭ�����ڣ����ģ�������ж��������ÿ��������ǰ��
//	//����Ҫ����typename��
//	return 0;
//}


////����ģ��
////�û���һ����«����������ư
//#include<iostream>
//using namespace std;
//template<typename T>
//T Add(T x, T y)
//{
//	return x + y;
//}
//
//template<typename T, typename U>
//T Add(T x, U y)
//{
//	return x + y;
//}
//int main()
//{
//	Add(1.0, 2.0);
//	Add(1, 2);
//	//���������������������������Ͷ���һ��һ���ģ���ô����
//	//����˵�Ҹ������������������ǲ�һ�����������ô�������Դ�����
//	Add(1, 2.0);
//	//���ʱ������ȥ���б��룬�ͻᷢ�ֱ��������
//	//�����ԭ������ڣ����������������������������ǲ�һ����
//	//��ô���������ھ���Ҫһ���µ�ģ����
//	//��������U�Ǹ�ģ�廹�ǻᱨ���
//	//�����ԭ�����ڣ����ģ�������ж��������ÿ��������ǰ��
//	//����Ҫ����typename��
//	return 0;
//}


//#include<iostream>
//using namespace std;
//template <typename T>
//T Add(T x, T y)
//{
//	return x + y;
//}
//int main()
//{
//	cout << Add(1, 2) << endl;
//	cout << Add(1.0, 2.0) << endl;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//template <typename T>
//T Add(T x, T y)
//{
//	return x + y;
//}
///*
//�ڱ������У�����ͨ�����Դ��룬����Add(1,2)��Add(1.0,2.0)��������
//�����������ĺ���ģ��
//������ʵ�أ�����˵���Ǵ���ģ��ǲ����Ե��ú���ģ���
//��Ϊ����ģ�岻�������ĺ���
//ֻ�Ǳ��������ɴ���Ĺ���
//��������ִ���˺�������
//��ʵ������������(�㿴���Ķ�������ʵ����һ������ʵ���ڵ�)
//�������Ҫ������Ļ�����Ҫ֪��������鱳�󣬵�������ʲô����
//*/
//int main()
//{
//	cout << Add(1, 2) << endl;
//	cout << Add(1.0, 2.0) << endl;
//	return 0;
//}


//template<class T>
//T Add(const T& left, const T& right)
//{
//	return left + right;
//}
//int main()
//{
//	int a1 = 10, a2 = 20;
//	double d1 = 10.0, d2 = 20.0;
//	Add(a1, a2);
//	Add(d1, d2);
//	/*
//	����䲻��ͨ�����룬��Ϊ�ڱ����ڼ䣬��������������ʵ����ʱ����Ҫ������ʵ������
//	ͨ��ʵ��a1��T����Ϊint��ͨ��ʵ��d1��T����Ϊdouble���ͣ���ģ������б���ֻ��һ��T��
//	�������޷�ȷ���˴����׸ý�Tȷ��Ϊint ���� double���Ͷ�����
//	ע�⣺��ģ���У�������һ�㲻���������ת����������Ϊһ��ת�������⣬����������Ҫ���ڹ�
//	Add(a1, d1);
//	*/
//	// ��ʱ�����ִ���ʽ��1. �û��Լ���ǿ��ת�� 2. ʹ����ʽʵ����
//	Add(a1, (int)d1);
//	return 0;
//}


//int main(void)
//{
//	int a = 10;
//	double b = 20.0;
//	// ��ʽʵ����
//	Add<int>(a, b);
//	return 0;
//}


//#include<iostream>
//using namespace std;
//template<typename T>
////ע�⣬��ģ���У�һ������´��ݵĲ�����������
////�������ͨ���β����޸�ʵ�εĻ�����ô
////����const���þͿ�����
////ΪʲôҪʹ�����ô��ݵģ���ΪT�п������Զ������ͣ�����Զ�������
////��ʹ��ֵ���ݵĻ�����Ч��û����ô����
////����һ������¾�ʹ��const�����������в����Ĵ���
//T Add(const T& left, const T& right)
//{
//	return left + right;
//}
//int Add(const int& left, const int& right)
//{
//	return left + right;
//}
//int main()
//{
//	Add(1, 2); //ͨ������ĵ��ԣ�������һ�������int����һ�δ���
//	// ���ģ�庯��ƥ�䣬����������Ҫ�ػ�
//	//������ȥ������ͨ���͵ĺ����������ͨ���͵ĺ���
//	//������ƥ��Ļ����Ż�ȥ����ģ�����
//	//�����Ҫʹ��ģ��Ļ�����ô����ֻ��Ҫ�Դ��������ʾʵ�����Ϳ�����
//	Add<int>(1, 2);    // ���ñ������ػ���Add�汾
//	//�����������ʾʵ�������������ͻ����ģ��������һ��int���͵�Add����
//	//ģ�����ɵ�int�����ǲ������ͨ�ĺ����������ͻ�ģ���Ϊ���������ĺ���������ʵ�ǲ���һ����
//	//ͬʱ������Ҳ�������ں������أ���Ϊ����������������ʵ�ǲ�����ͬ��
//	return 0;
//}


//// ר�Ŵ���int�ļӷ�����
//int Add(int left, int right)
//{
//	return left + right;
//}
//// ͨ�üӷ�����
//template<class T1, class T2>
//T1 Add(T1 left, T2 right)
//{
//	return left + right;
//}
//void Test()
//{
//	Add(1, 2); // ��Ǻ���ģ��������ȫƥ�䣬����Ҫ����ģ��ʵ����
//	Add(1, 2.0); // ģ�庯���������ɸ���ƥ��İ汾������������ʵ�����ɸ���ƥ���Add����
//}


//template<typename T>
//T Add(const T& x, const T& y)
//{
//	return x + y;
//}
//
//int Add(const int& x, const int& y)
//{
//	return x + y;
//}
//
//int main()
//{
//	Add(1, 2);  //���ȵ�����ͨ��Add��������Ϊ��ͨ��Add��������ȫ����������
//
//	Add(1, 2.0);
//	//��������£�������ȥѰ��Add(int,double)��������ͨ����
//	//�ҵ��˵Ļ�����ȥ���������ӵĺ��������û���ҵ��Ļ�
//	//��ȥ���Ƿ��������������Ͳ�ͬ�ĺ���ģ�壬����еĻ���������һ�����͸�����ƥ��ĺ���
//	//���ô���ҵ��Ļ�����ȥ���Ƿ����ͨ����ʽ����ת��֮����ƥ��ĺ���������У������
//	//���û�еĻ����ͱ���
//	//double������ʵ�ǿ�����ʽ����ת����int���͵�
//	return 0;
//}


//template<typename T>
//T Add(const T& x, const T& y)
//{
//	return x + y;
//}
//
//template<typename T, typename U>
//U Add(const T& x, const U& y)
//{
//	return x + y;
//}
//
//
//int Add(const int& x, const int& y)
//{
//	return x + y;
//}
//
//int main()
//{
//	Add(1, 2);  //���ȵ�����ͨ��Add��������Ϊ��ͨ��Add��������ȫ����������
//
//	Add(1, 2.0);
//
//	return 0;
//}


////Ϊ����˳����п��Դ洢�������͵�Ԫ��
//template<class T>
////�������仰����˵����T�Ǵ�����һ�����͵�
//class SeqList
//{
//public:
//	SeqList(int capacity = 10)
//	{
//		capacity = capacity < 10 ? 10 : capacity;
//		array = new T[capacity];
//		_capacity = capacity;
//		_size = 0;
//	}
//
//	void PushBack(const T& data);   //���԰�������������ж���
//
//	~SeqList()
//	{
//		if (array)
//		{
//			delete[] array;
//			array = NULL;
//			_capacity = 0;
//			_size = 0;
//		}
//	}
//private:
//	//int* array;
//	//�����ʱ�����ǰ�int����T֮�󣬾Ϳ��Դ洢�������͵�������
//	T* array;
//	size_t _size;
//	size_t _capacity;
//};
//
//
////�����������ж���Ļ�����ʵ����T��û�б�ʶ���
////�����ҪT��ʶ��Ļ�����Ҫ�ٸ���һ��ģ��
////���ȣ���Ҫ�ٺ������Ƶ�ǰ������������
//template<class T>
//
//void SeqList<T>::PushBack(const T& data)
//{
//	//Ҫ����Ԫ�ز����ʱ��������Ҫ���һ���Ƿ���Ҫ����
//	_CheckCapacity();
//
//	array[_size] = data;
//
//	size++;
//}
//int main()
//{
//	return 0;
//}


