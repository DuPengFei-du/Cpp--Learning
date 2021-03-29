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
#include<stdlib.h>
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
#include <crtdbg.h>
using namespace std;
class Test
{
public:
	Test()
	{
		cout << "Test():" << this << endl;
	}

	//�������������ε�
	// 	~Test()
	// 	{
	// 		cout << "~Test():" << this << endl;
	// 	}

private:
	int _data;   //û���漰����Դ�Ĺ���
};

void TestFunc()
{
	//û�б���
	Test* p1 = (Test*)malloc(sizeof(Test));
	delete p1;

	//û�б���
	Test* p2 = (Test*)malloc(sizeof(Test));
	delete[] p2;

	//û�б���
	Test* p3 = new Test;
	free(p3);
	_CrtDumpMemoryLeaks();

	//û�б���
	Test* p4 = new Test;
	delete[] p4;

	//û�б���
	Test* p5 = new Test[10];
	free(p5);

	//û�б���
	Test* p6 = new Test[10];
	delete p6;
}

int main()
{
	TestFunc();
	return 0;
}


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