//#include<iostream>
//using namespace std;
//int main()
//{
//	int a, b;
//	int c;
//	cin >> a >> b;
//	c = a + b;
//	cout << c << endl;
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
//	c = Add(a,b);
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
//	int c;
//	cin >> a >> b;
//	c = MAX(a, b);
//	cout << c << endl;
//	return 0;
//}


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


//#include <iostream>
//using namespace std;
//
//// ��һ�������ռ�
//namespace first_space 
//{
//	void func() 
//	{
//		cout << "Inside first_space" << endl;
//	}
//}
//// �ڶ��������ռ�
//namespace second_space 
//{
//	void func() 
//	{
//		cout << "Inside second_space" << endl;
//	}
//}
//int main()
//{
//	// ���õ�һ�������ռ��еĺ���
//	first_space::func();
//
//	// ���õڶ��������ռ��еĺ���
//	second_space::func();
//
//	return 0;
//}


//����ʹ�� using namespace ָ�������ʹ�������ռ�ʱ�Ϳ��Բ�����ǰ����������ռ�����ơ�
//���ָ�����߱������������Ĵ��뽫ʹ��ָ���������ռ��е����ơ�
//#include <iostream>
//using namespace std;
//
//// ��һ�������ռ�
//namespace first_space 
//{
//	void func() 
//	{
//		cout << "Inside first_space" << endl;
//	}
//}
//// �ڶ��������ռ�
//namespace second_space 
//{
//	void func() 
//	{
//		cout << "Inside second_space" << endl;
//	}
//}
//using namespace first_space;
//int main()
//{
//	// ���õ�һ�������ռ��еĺ���
//	func();
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//// ��һ�������ռ�
//namespace first_space 
//{
//	void func() 
//	{
//		cout << "Inside first_space" << endl;
//	}
//	// �ڶ��������ռ�
//	namespace second_space 
//	{
//		void func() 
//		{
//			cout << "Inside second_space" << endl;
//		}
//	}
//}
//using namespace first_space::second_space;
//int main()
//{
//	// ���õڶ��������ռ��еĺ���
//	func();
//	return 0;
//}


//#include<iostream>
//using namespace std;
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
//int main()
//{
//	cout << N2::N3::a << endl;
//}


//int main()
//{
//	printf("%d\n", N1::a);
//	return 0;
//}
////ȱ�ݾ���ʹ��������Щ�鷳��ÿ�ζ�Ҫ���������޶���


//using N::b;  //�൱����ȫ�ֱ�����������ʱ���ٶ���һ��int b; ��ô�ͻ������
//int main()
//{
//	printf("%d\n", N::a);
//	printf("%d\n", b);
//}
////�ŵ���ʹ�÷��㣬ȱ�������������ͻ(������ʾ��int b);
////�����ͻ�ˣ�Ҳ�ܺý�����ٱ�����ǰ��������ռ�������ټ��ϾͿ����ˡ�


//using namespace N;
//int main()
//{
//	printf("%d\n", N::a);
//	printf("%d\n", b);
//	Add(10, 20);
//	return 0;
//}
////ʹ�÷��㣬���ǳ�ͻ�ͻ��



//#include<iostream>
//using namespace std;
//int main()
//{
//	//C�������ǲ����printf���������﷨����
//	//printf("%d %d %d", 10);    //�������ǲ��ᱨ���
//	//������ȫ����ͨ������ģ�ֻ�ǻ��о���
//	//���������ں�����������δ֪��
//	//ʹ��printf����һ����̫�õĵ����
//	//Ҫ���ʲô���͵����ݣ������ʽ���Ʒ�һ��Ҫ���ԣ�������Ҫ�����Լ�������
//	//Ҫ��ס�ܶ��ָ�ʽ�������׳���
//	//������C++������ʹ��cout
//	cout << "change world" << endl;
//	cout << 10 << " " << 12.34 << " " << 'a' << endl;
//	//�����ں�������Ķ�����������ʲô
//	return 0;
//}


//#include<iostream>
//using namespace std;
//void Test(int a = 10)   //������һ��Ĭ��ֵ���ô��������������治�ô�����
////����û��ٵ��ú�����ͬʱ�����˴��β�������ôʹ�õľ����û�������ȥ�Ĳ���
//{
//	cout << a << endl;
//}
//int main()
//{
//	Test();
//	Test(100);
//	return 0;
//}


//ȱʡ�����ķ���
//ȫȱʡ�����Ͱ�ȱʡ����
void TestFunc(int a = 1, int b = 2, int c = 3)
{
	//���в�������ȱʡֵ��Ϊȫȱʡ����
	cout << a << ' ' << b << ' ' << c << ' ' << endl;
}


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


//int Add(int left, int right)
//{
//	return left + right;
//}
//
//double Add(double left, double right)
//{
//	return left + right;
//}
////�����б�һ��
////����Ϊ��������
////���õ�ʱ�򣬵������ֵģ��������ֵ�
////�������ڱ����ʱ��Ҫ���в������͵����ݣ���Ҫȷ���������Ĳ���������ʲô���͵�
//int main()
//{
//	Add(1, 2);
//	Add(1.2, 3.4);  //�����ǿ���ͨ������ģ����Ǽ����ֵ�ǲ��Ե�
//	//c�����ǲ����������ĺ�����
//	return 0;
//}


//void TestFunc()
//{}
//void TestFunc(int a = 0)
//{}
//int main()
//{
//	TestFunc(10);  //�ǿ���ͨ������ģ������������ĸ�����
//	TestFunc();    //�ǲ���ͨ�������
//	//�����غ����ĵ��ò���ȷ����һ�����Ե��ã��ڶ���Ҳ���Ե���
//	return 0;
//}