//��������

/*
���鲻�������ɼ򵥱������(������������ÿһ��Ԫ�ض������α���)
Ҳ��������������(���������ÿһ��Ԫ�ض���ͬ��Ķ���)

�ڽ�������ʱ��ͬ����Ҫ���ù��캯���������50�����󣬾���Ҫ����
50�ι��캯��������Ҫʱ�����ڶ�������ʱ�ṩʵ�δӶ�ʵ�ֳ�ʼ���Ĳ���
������캯��ֻ��һ��ʵ�Σ��ڶ�������ʱ����ֱ���ڵȺź���Ļ�����
���ṩʵ�Σ�����˵
*/
Student std[3] = { 60,70,78 };

/*
������캯���ж��ʵ�Σ������ö�������ʱֱ���ṩ����ʵ�εķ���
��Ϊһ�������ж��Ԫ�أ���ÿ��Ԫ���ṩ���ʵ�Σ�����ٿ��ǵ����캯��
��Ĭ�ϲ�����������������ʵ�����βζ�Ӧ���������������Ӷ���������
������

����ϵͳֻΪÿ������Ԫ�صĹ��캯������һ��ʵ�Σ������ڶ�������ʱ
�ṩ��ʵ�θ������ܳ�������Ԫ�صĸ���������
*/
Student std[3] = { 60,70,78,45 };//���ǲ��Ϸ��ĵģ�ʵ�εĸ��������˶��������Ԫ�ظ���


/*
��ô��������캯���ж��ʵ�Σ��ڶ����������ʱӦ������ʵ�ֳ�ʼ���أ�
���ǣ��ڻ������зֱ�д�����캯������������������ָ��ʵ��
������캯����������������ô�������������������
*/
Student std[3] = { Student(1001,18,87),Student(1002,38,85) ,Student(1003,45) };
/*
�ڽ�����������ʱ���ֱ���ù��캯������ÿ��Ԫ�ؽ��г�ʼ���Ĳ���
ÿһ��Ԫ�ص�ʵ�ηֱ������Ű���������Ӧ���캯����һ��ʵ�Σ��������
*/


//����ָ��

/*
C��ѧϰ�˱������Ǹ���ָ�룬Ҳѧϰ�˽ṹ��ָ�룬ָ��
��������ָ����ͨ�ı�����ͬ��Ҳ����ָ�����

�ڽ�������ʱ������ϵͳ��Ϊÿһ���������һ���Ĵ洢�ռ䣬���������
���ݳ�Ա��ֵ��һ������洢�ռ����ʼ��ַ���Ƕ����ָ�룬���Զ���һ��ָ��
������������Ŷ���ĵ�ַ�������ָ������ָ�����
*/
class Time
{
public:
	int hour;
	int minute;
	int sec;
	void get_time();
};
void Time::get_time()
{
	cout << hour << ":" << minute << ":" << sec << endl;
}
//������Ļ����ϣ�����������
Time* pt;
Time t1;
pt = &t1;
//����pt����ָ��Time������ָ���������ָ�����t1


//����ָ��������ָ�����һ����ʽΪ
//���� *����ָ����

//������Ļ����ϣ�����ͨ������ָ��pt�����ʶ���Ͷ����Ա


//*pt;
//(*pt).hour;
//pt->hour;
//(*pt).get_time()
//pt->get_time()


//#include<iostream>
//
//�����ռ䲻�����ͣ���һ��������
//C��������ȫ��������;ֲ�������
//���������ռ��൱���Ƕ�����һ���µ�������
//namespace N1
//{
//	���Զ��������Ҳ���Զ��庯��
//	int a = 1;
//	int b = 2;
//	int Add(int left, int right)
//	{
//		return left + right;
//	}
//}
//
//int a = 20;  //��ô�������Ҫ��ӡȫ���������е�a�Ļ�����Ҫ��ô��ӡ��
//printf("%d\n", ::a); 
//
//int main()
//{
//	int a = 30;
//	printf("%d\n", a);  //�����ʱ�����printf������ӡ�Ŀ϶����������е�a
//	printf("%d\n", ::a);  //::Ϊ�������޶����������һ������ǰ��
//	������::�ʹ��������ڷ��ʵ���ȫ���������еı���
//	printf("%d\n", N1::a);
//	���������ռ��a��ֻ��Ҫ���������޶�����ǰ����������ռ�����ƾͿ�����
//	return 0;
//}
//����a�ֱ�����������ͬ�����������Ա��������ǲ������κ������
//��ô����ʲô����»���������ģ�
//������ͬһ�������ռ�����������ͬ�ı�����ʱ�����ʱ�����������


//namespace N1   //ǰ���Ѿ��й�N1
////��������ռ���������ظ��Ļ����Ƿ����ͨ�����룿
////���ǿ���ͨ�������
////���������ͬ���Ƶ������ռ䣬������������Ǻϲ���һ��
//{
//	int c = 30;
//	int d = 40;
//	int Div(int left, int right)
//	{
//		return left / right;   //��֤rightҪ��Ϊ0
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
////ʹ�÷��㣬���ǳ�ͻ�ͻ��


//#include<iostream>
//using namespace std;
//int main()
//{
//	//C�������ǲ����printf���������﷨����
//	//printf("%d %d %d", 10);    //�������ǲ��ᱨ����
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

//
//int Add(int left, int right)
//{
//	return left + right;
//}
//
//double Add(double left, double right)
//{
//	return left + right;
//}
////�����б���һ��
////����Ϊ��������
////���õ�ʱ�򣬵������ֵģ��������ֵ�
////�������ڱ����ʱ��Ҫ���в������͵����ݣ���Ҫȷ���������Ĳ���������ʲô���͵�
//int main()
//{
//	Add(1, 2);
//	Add(1.2, 3.4);  //�����ǿ���ͨ������ģ����Ǽ����ֵ�ǲ��Ե�
//	c�����ǲ����������ĺ�����
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
//	int& ra = a;
//	int b = 20;
//	ra = b;  //�������õĲ����������ٽ��и�ֵ�Ĳ���
//	//��������rbȥ���������ı�����
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


//#include<iostream>
//using namespace std;
//#define MAX(a,b) (((a)>(b))?(a):(b))
//int main()
//{
//	int a = 10;
//	int b = 20;
//	cout << MAX(a, b) << endl;
//	return 0;
//}


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
//	cout << Add(a, b) << endl;    //�滻�����ڱ���׶�
//	cout << Add(a, ++b) << endl;    //�滻�����ڱ���׶�
//	//��Ϊ�滻�����ڱ���׶Σ�����������뵽������������ȥ����������Ч�ʻ�Ƚϸ�
//	//����û��չ���Ϳ�����������û��ֱ�ӵ�����������Ϳ�����
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	auto a = 10;  //�ǽ����������� (��������Ҫȥ����a������)
//	auto b = 12.34;   ////�ǽ������Ǹ�����
//	auto c = a + b;   //�������Լ�ȥ���
//	cout << typeid(a).name() << endl;
//	cout << typeid(b).name() << endl;
//	cout << typeid(c).name() << endl;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	auto a = 1, b = 2;
//	auto c = 12, d = 12.34;  //��һ�оͻ��������Ϊֻ��һ��auto�����׸���ʲô����
//	//���Ǳ������޷�ȷ����
//}


//void TestFor()
//{
//	int array[] = { 1, 2, 3, 4, 5 };
//	for (auto& e : array)
//	{
//		e *= 2;
//	}
//	for (auto e : array)
//	{
//		cout << e << endl;
//	}
//	return 0;
//}


//void f(int)
//{
//	cout << "f(int)" << endl;
//}
//void f(int*)
//{
//	cout << "f(int*)" << endl;
//}
//int main()
//{
//	f(0);
//	f(NULL);
//	f((int*)NULL);
//	return 0;
//}