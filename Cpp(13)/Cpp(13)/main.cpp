//��ķ�װ�Ժ���Ϣ����

/*
C++ͨ������ʵ�ַ�װ�ԣ������ݺ�����Щ�����йصĲ�����װ��һ�����У�����˵
��������ǰ����ݺ��㷨��װ���û������ĳ�������������
��������������������У���������ʱ��һ�㶼�ǰ����е�����ָ��Ϊ˽�еģ�ʹ��
����������Ǹ���ģ�����Ҫ�������õĳ�Ա��������Ϊ���е�
��������Ȼ����ֱ�ӷ���˽�����ݳ�Ա��������ͨ�����ù��ó�Ա�����������޸�˽�г�Ա
*/

//��������Ψһ����ϵ�������ǵ��ù��õĳ�Ա������������ʹ���������������ٵ�����޶�
//���ó�Ա���������û�ʹ�õ��๫�ýӿڣ�����˵����Ķ���ӿ�

/*
ͨ����Ա���������ݳ�Ա���в�����Ϊ�๦�ܵ�ʵ�֣�Ϊ�˷�ֹ�û������޸Ĺ���
��Ա�������ı�����ݽ��еĲ��������������û��������ó�Ա������Դ���룬��Ȼ
������ȥ�޸������û�ֻ�ܽӴ������ó�Ա������Ŀ�����
*/


/*
�ɴ˿��Կ��������б�������������˽�еģ���Ĺ��ܵ�ʵ��ϸ�ڶ��û������ε�
����ʵ�ֳ�Ϊ˽��ʵ��
������Ĺ��ýӿ���˽��ʵ�ֵķ����γ�����Ϣ����
�û��Ӵ������ǹ��õĽӿڣ������ܽӴ������ε����ݳ�Ա
*/


//�������̵�һ���������ԭ����ǽ��ӿ�����ʵ����
//��Ϣ����������������һ���ǳ���Ҫ�ĸ���


//�������ͳ�Ա��������ķ���

/*
���������ĳ��򿪷��У��������������(���а�����Ա����������)����ָ��
��ͷ�ļ��У��û������Ҫʹ������ֻ࣬��Ҫ���йص�ͷ�ļ����������Ϳ�����
�����ٳ������ظ���д����������Լ��ٹ���������ʡƪ������߱�̵�Ч��
*/

/*
������ͷ�ļ��а��������������������û��ĳ����оͿ���ֱ��ʹ�ø��������������
�����������а����˶Գ�Ա����ԭ�͵��������ڳ����оͿ��Ե�����Щ����Ĺ��ó�Ա����
*/


//#include<iostream>
//
////�����ռ䲻�����ͣ���һ��������
////C��������ȫ��������;ֲ�������
////���������ռ��൱���Ƕ�����һ���µ�������
//namespace N1
//{
//	//���Զ��������Ҳ���Զ��庯��
//	int a = 1;
//	int b = 2;
//	int Add(int left, int right)
//	{
//		return left + right;
//	}
//}
//
//int a = 20;  //��ô�������Ҫ��ӡȫ���������е�a�Ļ�����Ҫ��ô��ӡ��
////printf("%d\n", ::a); 
//
//int main()
//{
//	int a = 30;
//	printf("%d\n", a);  //�����ʱ�����printf������ӡ�Ŀ϶����������е�a
//	printf("%d\n", ::a);  //::Ϊ�������޶����������һ������ǰ��
//	//������::�ʹ��������ڷ��ʵ���ȫ���������еı���
//	printf("%d\n", N1::a);
//	//���������ռ��a��ֻ��Ҫ���������޶�����ǰ����������ռ�����ƾͿ�����
//	return 0;
//}
////����a�ֱ�����������ͬ�����������Ա��������ǲ������κ������
////��ô����ʲô����»���������ģ�
////������ͬһ�������ռ�����������ͬ�ı�����ʱ�����ʱ�����������


//namespace N2
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int Sub(int left, int right)
//	{
//		return left - right;
//	}
//	//�����ռ仹����Ƕ��
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
//printf("%d\n", N2::N3::a);  //���������н��е���


//using namespace N;
//int main()
//{
//	printf("%d\n", N::a);
//	printf("%d\n", b);
//	Add(10, 20);
//	return 0;
//}
////ʹ�÷��㣬���ǳ�ͻ�ͻ��


//#include <iostream>
//using namespace std;
//int main()
//{
//	int a;
//	double b;
//	char c;
//	cin >> a;
//	cin >> b >> c;
//	cout << a << endl;
//	cout << b << " " << c << endl;
//	return 0;
//}


////ȱʡ�����ķ���
////ȫȱʡ�����Ͱ�ȱʡ����
//void TestFunc(int a = 1, int b = 2, int c = 3)
//{
//	//���в�������ȱʡֵ��Ϊȫȱʡ����
//	cout << a << ' ' << b << ' ' << c << ' ' << endl;
//}
//
////��ȱʡ����
////void TestFunc2(int a=1,int b=2,int c)   
////�޷�ͨ�����룬��b��ֵ�õ���Ҳ�޷�ͨ������
////ֻ�а�a��ֵ�õ�������ͨ������
////a��b���õ�����cҲ�ǿ��Ե�
////�ó����ɣ�ע�⣺��ȱʡ����ֻ�ܴ�������һ�θ���
//void TestFunc2(int a, int b, int c = 3)  //����ͨ������
//{
//	//���ֲ�������ȱʡֵ
//	cout << a << ' ' << b << ' ' << c << ' ' << endl;
//}
//int main()
//{
//	//ȫȱʡ
//	TestFunc();  //��ӡ 1 2 3
//	TestFunc(10);  //��ӡ 10 2 3 
//	TestFunc(10, 20);  //��ӡ10 20 3
//	TestFunc(10, 20, 30);  //��ӡ10 20 30
//
//	//��ȱʡ
//	TestFunc2(10, 20);
//	TestFunc2(10, 20, 30);
//
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
//	//���������βε����ݣ�����ʵ�ε�����
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
////����swap�γ�������
//int main()
//{
//	int a = 1;
//	int b = 2;
//	cout << &a << " " << &b << " " << endl;
//	//Swap(a, b);  //���ֻ��ֵ���ݵĻ����ǲ��е�
//	Swap(&a, &b);
//	cout << a << " " << b << " " << endl;
//}


//int main()
//{
//	int a = 10;
//	//int& ra;  //�������޷�ͨ������ģ���Ϊ�������͵ı���û�н��г�ʼ������
//	//�����ǲ��е�
//	int& ra = a;
//	//ra��a�ı�����Ҳ����˵��ra��a��ͬһ������
//	//��ο���ra��a��һ����������ӡ���ǵĵ�ַ���Ϳ�����
//	cout << &ra << " " << &a << " " << endl;
//	//����ӡ�ĵ�ַ��һ����
//	//��ô�����Ǹ�ra���и�ֵ�Ļ���a��ֵҲ�ᷢ���ı�
//	ra = 20;
//	cout << a << endl;  //��ӡ��a��ֵҲΪ20
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	long& ra = a;
//	return 0;
//	�����ӵĴ����ǲ���ͨ������ģ���Ȼ˵��long��int֮����Խ���
//	��ʽ������ת����������������һ������˵���ǲ������õ�
//}


//int main()
//{
//	int a = 10;
//	int& ra = a;  //ra��a�ı���
//	cout << &ra << "=" << &a << endl;
//	ra = 20;  //�ı���ra��ͬʱ����ôa��ֵҲ�ǻᷢ���ı��
//
//	int& rb = a;  //rbҲ������a ��һ�����������ж������
//	rb = 30;  //��ô�޸�rb��ͬʱ��ra��aҲ�������˸ı�
//
//	int& rra = ra;
//	rra = 40;   //��ô���ᷢ���ı�
//	//��Ϊ�õĶ���ͬһ��ռ�
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
//	ra = b;  //�������õĲ����������ٽ��и�ֵ�Ĳ���
//	//��������rbȥ���������ı�����
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	const int a = 10;   //��C�����У�const�����ε�����ʵ����һ��������ֻ������������ܱ��޸�
//	//���ǣ���C++�У�const�����ε��������Ѿ���һ�������ˣ����ܱ��޸�
//	//ͬʱ���к곣��������
//	//���֪����C++�У�const�����ε����ǳ�������������ȥ��⣬������ʾ��
//	//int array[a];  //���Ƿ����ͨ������
//
//
//	//int& ra = a;  //ra��ֵ�ǿ����޸ĵ�
//	//��ʱ�����޷�ͨ������ģ���Ϊa��const���͵�
//	//��ra����ͨ���͵�
//	//��ô������޸ģ������ô���ͨ�������أ�
//	//ֻ��Ҫ��ǰ�����const �Ϳ�����
//	const int& ra = a;  //��Ϊconst���͵����ã����߳�����
//
//	double d = 12.34;
//	const int& rd = d;  //(��Ȼ����ͨ�����룿��)  ����const�ǲ���ͨ������� 
//	cout << &rd << " " << &d << " " << endl;
//	//���Ǵ�ӡ�ĵ�ַ�ǲ�һ���ģ�˵��rd���õľͲ���d
//	//ԭ���ǣ��������ᴴ��һ����ʱ��������double���εĲ��ַ�����ʱ������
//	//��rd������ʱ������������d����ʱ�����Ǳ�����������
//	//���ǲ�֪����������Ҳ��֪�����ĵ�ַ�������������޷����������κ��޸ĵ�
//	//��Ȼ�Ĳ��ɣ��Ǿ�˵������ռ䱾���;��г���
//	//���Լ���const�Ϳ���ͨ��������
//	return 0;
//}


//void Swap(int& ra, int& rb)    //ra��a�ı�����rb��b�ı���
//{
//	int temp = ra;
//	ra = rb;
//	rb = temp;
//	//ͨ�������βΣ�Ҳ���൱���ǽ���ʵ����
//}
//int main()
//{
//	int a = 1;
//	int b = 2;
//	Swap(a, b);
//	cout << a << " " << b << " " << endl;
//	return 0;
//}
////����Ҫ�пգ�Ҳ����Ҫ�����ã�ʹ������ʮ�ֵķ��㣬Ч�ʱȽϸ�


//int& Add(int left, int right)  //�������õķ�ʽ����
//{
//	int ret = left + right;
//	return ret;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int& retVal = Add(a, b);
//	Add(100, 200);   //������˵����һ����û�з���ֵ������
//	//����ͨ���������������Կ���retVal��ֵ����Ǳ��300��
//	//ԭ������retVal��ret�ı�����һֱ�ǿռ�ı������ռ�û�з����仯������
//	//�൱�����Զ��仯��
//	return 0;
//}
////����ʵ���ϣ���һ�δ�����������ģ�ret���˺�����������ֻ�ᣬ�ͻ�ѿռ�黹������ϵͳ�ˣ���ôretValue��������ret�����൱������������Ч�Ŀռ�


//#include <time.h>
//struct A
//{
//	int a[10000];
//};
//void TestFunc1(A a)
//{
//	//ֵ����
//}
//void TestFunc2(A& a)
//{
//	//���ô���
//}
//void TestFunc3(A* a)
//{
//	//ַ����
//}
//void TestRefAndValue()
//{
//	A a;
//	// ��ֵ��Ϊ��������
//	size_t begin1 = clock();
//	for (size_t i = 0; i < 10000; ++i)
//		TestFunc1(a);
//	size_t end1 = clock();
//
//	// ��������Ϊ��������
//	size_t begin2 = clock();
//	for (size_t i = 0; i < 10000; ++i)
//		TestFunc2(a);
//	size_t end2 = clock();
//
//	//�Ե�ַΪ����
//	size_t begin3 = clock();
//	for (size_t i = 0; i < 10000; ++i)
//		TestFunc3(&a);
//	size_t end3 = clock();
//
//	// �ֱ���������������н������ʱ��
//	cout << "TestFunc1(int)-time:" << end1 - begin1 << endl;
//	cout << "TestFunc2(int&)-time:" << end2 - begin2 << endl;
//	cout << "TestFunc3(int*)-time:" << end3 - begin3 << endl;
//
//}
//
//// ���ж�Σ����ֵ�������ڴ��η����Ч������
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
////��ӡ�Ľ��Ϊ1��4


////C�������к곣���ͺ꺯��
////��C++����const����ʹ��
////��C++�У�const�����ε������Ѿ���һ�������ˣ���ô��ôȥ��֤�ǳ����أ��Ϳ���������
////#include<iostream>
////using namespace std;
////int main()
////{
////	const int a = 10;
////	int array[a] = { 0 };  //����ȫ����ͨ�������,��Ϊa�ǳ���
////	return 0;
////}
////ͬʱconst�����к곣��������(��Ԥ�����׶ξ��Ѿ��滻����)��const���͵��滻
////�����ڱ���׶Σ�const���͵ĳ������Բ�����룬��ȫ���ǱȽϸߵġ�


//int main()
//{
//	const int a = 10;
//	//int array[a];
//	int* pa = (int*)& a;
//
//	*pa = 100;
//	cout << a << endl;
//	cout << *pa << endl;
//	return 0;
//}