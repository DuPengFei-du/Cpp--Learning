#include<iostream>
using namespace std;
int main()
{
	cout << "Hello world" << endl;
	return 0;
}


#include<iostream>
using namespace std;
int main()
{
	int a, b;
	int c;
	cin >> a >> b;
	c = a + b;
	cout << c << endl;
	return 0;
}


#include<iostream>
using namespace std;
int Add(int x, int y)
{
	return x + y;
}
int main()
{
	int a, b;
	int c;
	cin >> a >> b;
	c = Add(a, b);
	cout << c << endl;
	return 0;
}


#include<iostream>
using namespace std;
int Max(int x, int y)
{
	return x > y ? x : y;
}
int main()
{
	int a, b;
	cin >> a >> b;
	int c;
	c = Max(a, b);
	cout << c << endl;
	return 0;
}


//�����õĽ�һ��˵��
/*
1.���ܽ���void���͵�����
��Ϊ�κ�ʵ�ʴ��ڵı����������ڷ�void���͵ģ�void�ĺ����������ͻ��߿�����
voidֻ�����﷨���൱��һ�����Ͷ���
2.���ܽ������õ�����
��ͼ����һ������6��Ԫ�ص����������ǲ����Եģ�������ֻ�Ǵ���������Ԫ�صĵ�ַ
��������һ��ռ�д洢�ռ�ı���
3.���Խ����������õĵ�ַ��ֵ��һ��ָ�룬��ʱָ��ָ�����ԭ���ı���
���ǲ��ܶ���ָ���������͵�ָ�����
�������ò���һ�ֶ������������ͣ���˲��ܽ���ָ���������͵�ָ�����
4.���Խ���ָ�����������
5.������const�����ü������ƣ���ʾ�������޸Ĵ����õ�ֵ
*/


/*
��������
���ú���ʱ��Ҫһ����ʱ���������Щ������ҪƵ����ʹ�ã�Ҳ�����ۼ�ʹ��ʱ���ܳ�
�Ӷ����ʹ����ִ��Ч�ʡ�C++�ṩһ�����Ч�ʵķ�����Ҳ�����ڱ���ʱ�������ú�������Ƕ�뵽����������
����Ƕ�뵽���������еĺ�����֮Ϊ��������
ָ�����������ķ����ܼ򵥣�ֻ��ѽ�ں������е���˼���һ��inline�ؼ��־Ϳ�����
*/
#include<iostream>
using namespace std;
inline int max(int a, int b, int c)
{
	if (b > a)
		a = b;
	if (c > a)
		a = c;
	return a;
}
int main()
{
	int i = 7, j = 10, k = 25, m;
	m = max(i, j, k);
	cout << m << endl;
	return 0;
}

/*
������������#define����ʵ�ֵĴ��κ궨����Щ���ƣ���Ҳ����ȫ��ͬ
�궨��ʵ�ڱ�����Ԥ����������Ԥ����ģ���ֻ�Ǽ򵥵��ַ��û����������
�﷨��飬������������벻���Ĵ���
ʹ�������������Խ�ʡ���е�ʱ�䣬��ȴ������Ŀ�����ĳ��ȣ�����˵
ֻ�й�ģ��С����Ƶ��ʹ�õĺ������ſ��Դ��������е�Ч��
*/


//�������޶���
/*
ÿһ��������������Ч��������ֻ���ڱ�������������ʹ�øñ���������ֱ��ʹ��
�����������еı���
*/
#include<iostream>
using namespace std;
float a = 3.5;
int main()
{
	int a = 2;
	cout << a << endl;
	return 0;
}
//����Ľ����2
//main�����еľֲ�������������ȫ�ֱ�������������Ľ����2
//C++�ṩ::��������ָ������Ҫ��������һ��Ĭ��Ϊȫ�ֱ���

#include<iostream>
using namespace std;
float a = 3.5;
int main()
{
	int a = 2;
	cout << a << endl;
	cout << ::a << endl;
	return 0;
}