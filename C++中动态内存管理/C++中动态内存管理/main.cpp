////new��delete�����������
//#include<iostream>
//using namespace std;
//int main()
//{
//	//���뵥��Ԫ�صĿռ�
//	int* p1 = new int;  //Ҫnew����ʲô���͵Ŀռ䣬ֱ�ӽ��������͸���new�ĺ���Ϳ�����
//	//new������ϵĶ������͵�����
//	//ʹ�����ַ����ĺô������ڲ���Ҫ����ǿ������ת��
//	//Ҳ����Ҫ�û�ȥ������Ҫ���ٶ���ڴ�ռ�Ŀռ�
//
//	int* p2 = new int(10);
//	//������new���뵥���ռ�Ļ���������Ϊ��οռ���г�ʼ���Ĳ���
//	//���ھ���������һ�����εĿռ䣬Ȼ����������εĿռ��ֵΪ10
//	//Ҳ����˵ʹ��new���Գ�ʼ����������ϣ������ʼ����Ϊ��ֵ
//	//������C���������ǲ��еģ�C��������ֻ�ܳ�ʼ����0
//
//	//���������Ŀռ�
//	int* p3 = new int[10];  //���ǿ�����һ��10�����ε������ռ�
//	//��������new�����������ռ��ʱ�򣬿���ͬʱ������г�ʼ���Ĳ���������
//	int* p4 = new int[4]{ 1,2,3,4 };   //������ȫ����ͨ�������
//	return 0;
//}


////new��delete�����������
//#include<iostream>
//using namespace std;
//int main()
//{
//	//���뵥��Ԫ�صĿռ�
//	int* p1 = new int;  //Ҫnew����ʲô���͵Ŀռ䣬ֱ�ӽ��������͸���new�ĺ���Ϳ�����
//	//new������ϵĶ������͵�����
//	//ʹ�����ַ����ĺô������ڲ���Ҫ����ǿ������ת��
//	//Ҳ����Ҫ�û�ȥ������Ҫ���ٶ���ڴ�ռ�Ŀռ�
//
//	int* p2 = new int(10);
//	//������new���뵥���ռ�Ļ���������Ϊ��οռ���г�ʼ���Ĳ���
//	//���ھ���������һ�����εĿռ䣬Ȼ����������εĿռ��ֵΪ10
//	//Ҳ����˵ʹ��new���Գ�ʼ����������ϣ������ʼ����Ϊ��ֵ
//	//������C���������ǲ��еģ�C��������ֻ�ܳ�ʼ����0
//
//	//���������Ŀռ�
//	int* p3 = new int[10];  //���ǿ�����һ��10�����ε������ռ�
//	//��������new�����������ռ��ʱ�򣬿���ͬʱ������г�ʼ���Ĳ���������
//	int* p4 = new int[4]{ 1,2,3,4 };   //������ȫ����ͨ�������
//
//	//�ռ���ͷ�
//	delete p1;
//	delete p2;
//
//	//���delete�ͷŵ���һ�������Ŀռ�Ļ�����Ҫ��delte[]�������ͷ�
//
//	delete[] p3;
//	delete[] p4;
//
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
//	Test* pt2 = new Test[10];
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
//void TestFunc()
//{
//	//����
//	//���������ԭ�����ڣ�ʹ��malloc��������ռ��ʱ��malloc��û�е��ù��캯����
//	//���������delete�ǻ�ȥ�������������ģ���ô��ʱ���û�ж�����ȷ��ָ�򣬵������������Ļ�
//	//��һ���������
//	//��������ptr��thisָ���Ǵ��ڵģ�����thisָ����ָ������������ֵ�����Բ��ܶ�������ͷ�
//	//һ�ͷžͻᷢ�����������
// 	Test* p1 = (Test*)malloc(sizeof(Test));
// 	delete p1;
//
//	//����
//	//�����������ǲ��ģ�ͬ����delete[]Ҳ�ǻ�ȥ��������������
//	//������ʹ��malloc�Ļ���������ʵ��û�еģ���Ϊmalloc����ȥ���ù��캯����
//	//û��������󻹷�Ҫȥ�ͷŵĻ�����ô��һ���ᷢ��������
// 	Test* p2 = (Test*)malloc(sizeof(Test));
// 	delete[] p2;
//
//	//�ڴ�й©
//	//ԭ��������newȥ����ռ�Ļ����ǻ�ȥ���ù��캯���ģ���ôthisָ��ʵ���Ͼ����൱������
//	//��ȷ��ָ���ˣ��������ͷŶ������Դ��ʱ��ʹ����free
//	//free�ǲ���ȥ�������������ģ����Զ������Դ��ʵ��û�б��ͷŵ���
//	//�����ǻ�����ڴ�й©��
// 	Test* p3 = new Test;
//	//p3�Ŀռ�����ջ�ϵģ�p3��ָ����������Ŀռ����ڶ��ϵ�
// 	free(p3);
// 	_CrtDumpMemoryLeaks();   
//	//�������������������ڴ��Ƿ�й¶��
//	//����ȱ�����ڣ�������������ǣ��ڴ����е��ĸ�λ���ڴ�й©��
//
//	//����
// 	Test* p4 = new Test;
// 	delete[] p4;
//
//	//�ڴ�й©+����
// 	Test* p5 = new Test[10];
// 	free(p5);
//
//	//����+�ڴ�й©
// 	Test* p6 = new Test[10];
// 	delete p6;
//}
////�漰��[]��λ�ö�����������
//int main()
//{
//	TestFunc();
//	return 0;
//}


//// ���û��ƥ��ʹ�ã���������ʲô���⣿
//// ���ۣ������������ͣ��Ƿ�ƥ��ʹ��û��ʲôӰ��
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
//}
//
//int main()
//{
//	TestFunc();
//	_CrtDumpMemoryLeaks();
//	return 0;
//}


//#include<iostream>
//#include <crtdbg.h>
//using namespace std;
//class Test
//{
//public:
//	Test()
//	{
//		cout << "Test()" << endl;
//	}
//
//	~Test()
//	{
//		cout << "~Test():" << this << endl;
//	}
//
//private:
//	int _data;
//};
//
//void TestFunc()
//{
//	//����û���κε����⣬ԭ����������ֻ��һ�����ݳ�Ա����û����Ƶ���Դ�Ĺ���
//	//���������Ƶ�����Դ�Ĺ���Ļ���new��delete����Ҫƥ��ʹ�òſ���
//	Test* p1 = (Test*)malloc(sizeof(Test));
//	delete p1;
//
//	 //����
//	 Test* p2 = (Test*)malloc(sizeof(Test));
//	 delete[] p2;
//
//	//û�з����ڴ�й©
//	 //��Ϊ����û���漰����Դ�Ĺ���
//	 //�ͺñ�˵�������࣬��ʵ�������Ƿ����������������û��ʲôӰ���
//	Test* p3 = new Test;
//	free(p3);
//	_CrtDumpMemoryLeaks();
//
//	//����
//	Test* p4 = new Test;
//	delete[] p4;
//
//	//����
//	Test* p5 = new Test[10];
//	free(p5);
//
//	//����
//	Test* p6 = new Test[10];
//	delete p6;
//}


//#include<iostream>
//#include <crtdbg.h>
//using namespace std;
//class Test
//{
//public:
//	Test()
//	{
//		cout << "Test():" << this << endl;
//	}
//
//	//�������������ε�
//	// 	~Test()
//	// 	{
//	// 		cout << "~Test():" << this << endl;
//	// 	}
//
//private:
//	int _data;   //û���漰����Դ�Ĺ���
//};
//
//void TestFunc()
//{
//	//û�б���
//	Test* p1 = (Test*)malloc(sizeof(Test));
//	delete p1;
//
//	//û�б���
//	 Test* p2 = (Test*)malloc(sizeof(Test));
//	 delete[] p2;
//
//	 //û�б���
//	Test* p3 = new Test;
//	free(p3);
//	_CrtDumpMemoryLeaks();
//
//	//û�б���
//	Test* p4 = new Test;
//	delete[] p4;
//
//	//û�б���
//	Test* p5 = new Test[10];
//	free(p5);
//
//	//û�б���
//	Test* p6 = new Test[10];
//	delete p6;
//}
//
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