//��������Ͷ���Ķ���

/*
ÿһ��ʵ�嶼�Ƕ�����һЩ�����Ǿ�����ͬ�Ľṹ�����Ե�
��C++�У���������ͳ�Ϊ�࣬�������ĳһ������Ĺ�ͬ����
���Ƕ���ĳ������������ľ���ʵ��
��C++�У���ĵ�λ�����úͽṹ�����ƣ��������Ĺ�ϵ�൱�ڽṹ�����ͺͽṹ������Ĺ�ϵһ��
��C++�У�Ҳ��Ҫ������һ��������ͣ�Ȼ������ȥ�������ɸ�ͬ���͵Ķ���
�������ĳһ�������͵ı���
*/


//���ǳ���ģ���ռ���ڴ棬�������Ǿ���ģ���ռ�ô洢�ռ��

//�����������
/*
�����û����������ͣ������������Ҫ�õ��࣬�����Լ������Լ�����Ҫ������������
����ʹ�ñ����Ѿ��������ࡣC++��׼��ʡ�����ṩ�ֳɵ�������ƣ��ṹ������
��C++������һ���࣬��ʵ��C�������ṹ�������Ƶ�
*/
//����һ����
class Student
{
	int num;
	char name[20];
	char sex;
	void dispaly()   //����ǳ�Ա����
	{

	}
};
Student std1��std2;  //����������Student��Ķ���


class Student
{
private:
	int num;
	char name[20];
	char sex;
public:
	void dispaly()   //����ǳ�Ա����
	{

	}
};
Student std1��std2;  //����������Student��Ķ���
/*
����������display�����ǹ��еģ����Ϳ��Ե������������
�������Ķ����У��Ȳ�ָ��privateҲ��ָ��public����ϵͳ��Ĭ��Ϊ��˽�е�
��һ�ε����������������Ĭ�ϵ������Ĭ����˽�е�
*/


/*
private��public��Ϊ��Ա�����޶���������������������Ա�ķ�������
������Ϊ˽�еĳ�Ա��ֻ�ܱ������еĳ�Ա�������ã����ⲻ�ܵ���(������Ԫ��������)
������Ϊ���еĳ�Ա���ȿ��Ա�����ĳ�Ա���������ã������Ա�����������ڵ�������������
����private��public������һ�ֳ�Ա�����޶���protected����protected�����ĳ�Ա��Ϊ�ܱ����ĳ�Ա
�����ܱ�����ķ���(�����˽�г�Աһ��),�����Ա�������ĳ�Ա����
��C++�����о������õ��࣬Ϊ���û����㣬C++����ϵͳ�������û��ṩ���(��������C++���Ա�������ɲ���)
��װ����ʹ�õĻ������࣬���û�ʹ�á�
*/


//�������ķ���
//�����������ͣ�Ȼ���ٶ������
Student std1, std2��
//��C++�У���������������֮�󣬶��������������ʽ
class Student std1, std2;
//��class��Student��������Ϊһ�������������������
Student std1,std2
//ֱ����������������������ַ����ǵ�Ч��


//ͬ���ģ����������������ͬʱ������󣬾���ṹ�嶨��ȫ�ֵĶ���һ��
class Student
{
private:
	int num;
	char name[20];
	char sex;
public:
	void dispaly()   //����ǳ�Ա����
	{

	}
}std1,std2;
//�ڶ���Student��ͬʱ��������std1��std2��������


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
////����swap�γ�������
//
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