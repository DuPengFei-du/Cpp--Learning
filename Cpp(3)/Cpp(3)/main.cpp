//#include<iostream>
//using namespace std;
//int main()
//{
//	cout << "Change world" << endl;
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
//	c =Add(a,b);
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
//	cin >> a >> b;
//	int c;
//	c = MAX(a, b);
//	cout << c << endl;
//	return 0;
//}


//����������
/*
����ʱC++����C������
��C++�У����������þ��Ǳ����ı�������ˣ������ֱ���Ϊ�������������õ�������Ϊһ������������һ������
�Ա�����Ҫ��ʱ����Է��㣬ֱ�����øñ�������������õ�����
��һ�����������õ����в�����ʵ���Ͼ��Ƕ���������ı����Ĳ���
������һ������a���������һ������b����ô��������
int& b =a;
�����������b��a�����ã�Ҳ����a�ı�������������������֮��ʹ��a����b����������ͬ��
��������ͬһ��������ע�⣬�������������У�&��������ȡ��ַ
*/
/*
�ص㣺�Ա�������һ�����ã����������⿪���ڴ浥Ԫ��b��a���Ǵ���ͬһ���ڴ浥Ԫ
������һ�����õ�ʱ�򣬱��������г�ʼ��������Ҳ����������������һ������
�������ò��Ƕ����ı���������ϵͳ����������䵥�����ڴ浥Ԫ������ڽ�������ʱֻ��������û�ж���
������һ������������֮���ڱ�����ִ���ڼ䣬������һֱ�������ı�������ϵ����������Ϊ��������������
*/
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a = 10;
//	int& b = a;
//	a = a * a;
//	cout << a <<" "<< b;
//	cout << " " << endl;
//	b = b / 5;
//	cout << b <<<< endl;
//	return 0;
//}


/*
���ú���������ı�������ͬһ���ڴ浥Ԫ��ϵͳ����Ϊ����������ڴ浥Ԫ��ʵ����
����ϵͳʹ�����ú������ı���������ͬ�ĵ�ַ
*/
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a = 3;
//	int& b = a;
//	cout << &a << " " << &b << endl;
//	return 0;
//}


/*
�����õĳ�ʼ����������һ����������Ҳ����ʹ����һ�����ã����ǿ��Ե�
�����ٳ�ʼ��֮�����ڱ���������Ϊ��һ�ֱ����ı���
*/


//��������Ϊ�����Ĳ���
/*
C++�У�֮�����������ã���Ҫ��Ϊ����������Ϊ���������������亯���������ݵĹ���
��C�����У������Ĳ��������������������
*/


/*
����������Ϊʵ�ʲ���
��ʱ���ݸ��βε��Ǳ�����ֵ�������ǵĵ���ģ���ִ�к����ڼ䣬�βε�ֵ�����仯��������Ӱ��ʵ�ʲ���
��Ϊ�ں������õ�ʱ���βκ�ʵ�β���ͬһ���洢��Ԫ
*/
//#include<iostream>
//using namespace std;
//void Swap(int a, int b)
//{
//	int temp;
//	temp = a;
//	a = b;
//	b = temp;
//}
//int main()
//{
//	int i = 3, j = 5;
//	Swap(i, j);
//	cout << i << " " << j << endl;
//	return 0;
//}


//����ַ
//#include<iostream>
//using namespace std;
//void Swap(int *a, int *b)
//{
//	int temp;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}
//int main()
//{
//	int i = 3, j = 5;
//	Swap(&i, &j);
//	cout << i << " " << j << endl;
//	return 0;
//}


//���ñ���
//#include<iostream>
//using namespace std;
//void Swap(int &a, int &b)
//{
//	int temp;
//	temp = a;
//	a = b;
//	b = temp;
//}
//int main()
//{
//	int i = 3, j = 5;
//	Swap(i, j);
//	cout << i << " " << j << endl;
//	return 0;
//}