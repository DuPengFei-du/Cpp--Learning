//#include<iostream>
//using namespace std;
//
//
////����������Ҫȥ��װһ����̬���͵�����
//
//namespace bite
//{
//	template<class T,size_t N>
//	class array
//	{
//	private:
//		T _array[N];    //��ô����Ҫ���ȡȷ������Ĵ�С����
//		//��Ϊ�Ͼ�����ͬ���˸���������Ĵ�С�ǲ�һ����
//		//���ǿ�����ģ������б��������һ��size_t ��N
//		//��������Ļ�����ô�����ڶ�������Ĵ�С��ʱ��Ϳ���ֱ�Ӿͽ�N����ȥ��
//		//��ôsize_t ��N��ʵ�������ǿ�����ģ�����͵Ĳ���
//	};  
//}
//int main()
//{
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//
////����������Ҫȥ��װһ����̬���͵�����
//
//namespace bite
//{
//	template<class T, double N>
//	class array
//	{
//	private:
//		T _array[N];    //��ô����Ҫ���ȡȷ������Ĵ�С����
//		//��Ϊ�Ͼ�����ͬ���˸���������Ĵ�С�ǲ�һ����
//		//���ǿ�����ģ������б��������һ��size_t ��N
//		//��������Ļ�����ô�����ڶ�������Ĵ�С��ʱ��Ϳ���ֱ�Ӿͽ�N����ȥ��
//		//��ôsize_t ��N��ʵ�������ǿ�����ģ�����͵Ĳ���
//	};
//}
//int main()
//{
//	bite::array<int, 10.0> arr;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//template<class T>
//
////��������ȥ������������Ƿ�����ȵ�
//bool IsEquals(const T& left, const T& right)
//{
//	return left == right;
//}
//
//int main()
//{
//	cout << IsEquals(10, 10) << endl;
//	cout << IsEquals(10, 20) << endl;
//
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//
//template<class T>
//
////��������ȥ������������Ƿ�����ȵ�
////�����������û�кܺõ�չʾ��������Ҫ���Ķ���
//bool IsEquals(const T& left, const T& right)
//{
//	return left == right;
//}
//
//int main()
//{
//	cout << IsEquals(10, 10) << endl;
//	cout << IsEquals(10, 20) << endl;
//
//	string s1("hello");
//	string s2("hello");
//
//	cout << IsEquals(s1, s2) << endl;
//
//	const char* p1 = "hello";
//	const char* p2 = "word";
//
//	cout << IsEquals(p1, p2) << endl;
//
//
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//
//template<class T>
////������������Ҫ�ҳ������ַ�������ϴ����һ��
//
////Max��һ��ģ�����͵ĺ������������Ͷ��ǿ��Խ��д���ģ����Ƕ���ĳЩ���������
////������Ľ�����ܾ���һ������Ľ��
//
////�����������ڵ�maxҪȥ�Ƚ�char*���͵��ַ��������ܾͻ���ִ�����
//T& Max(T& left, T& right)
//{
//	return left > right ? left : right;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	cout << Max(a, b) << endl;
//
//	//string�಻����ִ����ԭ������
//	//string���ڲ��Ѿ�����Щ�Ƚϴ�С�ķ���������������
//	string s1("world");
//	string s2("hello");
//
//	cout << Max(s1, s2) << endl;
//
//
//	/*const char* p1 = "world";
//	const char* p2 = "hello";*/
//
//	//��ô���ڣ����޸�һ��p1��p2�Ķ���������������������
//
//	//�����ָ��Ļ�����ô���൱���Ƕ�����ָ��ĵ�ַ�ٽ��бȽ���
//	//��û�а��������ַ����Ĺ���ȥ���бȽϵĲ���
//	//���õ�ַ��ֵ�ڽ��бȽϵģ���ô�ͺ���������Ľ�����ܻ��г�����
//	const char* p1 = "world";
//	const char* p2 = "hello";
//	cout << Max(p1, p2) << endl;
//
//	//���Ƿ��֣��ڵ�������ε�˳��֮�����ǵĴ���Ľ�������˴���
//	//��Ȼ���Ƕ�֪����hello��world����������϶���world�����һЩ��������δ������е�
//	//�������ʾ����������ȴ��hello����һЩ
//	//��ô�����ʵ���ǲ��Ե���
//
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//
//template<class T>
////������������Ҫ�ҳ������ַ�������ϴ����һ��
//
////Max��һ��ģ�����͵ĺ������������Ͷ��ǿ��Խ��д���ģ����Ƕ���ĳЩ���������
////������Ľ�����ܾ���һ������Ľ��
//
////�����������ڵ�maxҪȥ�Ƚ�char*���͵��ַ��������ܾͻ���ִ�����
//T& Max(T& left, T& right)
//{
//	return left > right ? left : right;
//}
//
////���Max�ĺ���ģ�尴��char*�ķ�ʽ�������ػ�
//template<>
//
//const char*& Max(const char*& left, const char*& right)
//{
//	if (strcmp(left,right)>0)
//		return left;
//	return right;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	cout << Max(a, b) << endl;
//
//	//string�಻����ִ����ԭ������
//	//string���ڲ��Ѿ�����Щ�Ƚϴ�С�ķ���������������
//	string s1("world");
//	string s2("hello");
//
//	cout << Max(s1, s2) << endl;
//
//
//	/*const char* p1 = "world";
//	const char* p2 = "hello";*/
//
//	//��ô���ڣ����޸�һ��p1��p2�Ķ���������������������
//
//	//�����ָ��Ļ�����ô���൱���Ƕ�����ָ��ĵ�ַ�ٽ��бȽ���
//	//��û�а��������ַ����Ĺ���ȥ���бȽϵĲ���
//	//���õ�ַ��ֵ�ڽ��бȽϵģ���ô�ͺ���������Ľ�����ܻ��г�����
//	const char* p1 = "world";
//	const char* p2 = "hello";
//	cout << Max(p1, p2) << endl;
//
//	//���Ƿ��֣��ڵ�������ε�˳��֮�����ǵĴ���Ľ�������˴���
//	//��Ȼ���Ƕ�֪����hello��world����������϶���world�����һЩ��������δ������е�
//	//�������ʾ����������ȴ��hello����һЩ
//	//��ô�����ʵ���ǲ��Ե���
//
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//template<class T1, class T2>
//class Data
//{
//public:
//	Data() 
//	{ 
//		cout << "Data<T1, T2>" << endl; 
//	}
//private:
//	T1 _d1;
//	T2 _d2;
//};
//
//
////ȫ�ػ�---���ǽ���Ҫ�ػ���ģ������б������е����Ͷ����廯
////��������Ҫ��ָ������Ҳ����˵���ҵļ���������ʲô�����÷�����
////����ֻ��Ҫ��������Ҫָ��������ֱ�ӷ������ǵ�����֮����ʵ���ǿ��Ե���
//
////ȫ�ػ����������ڣ�����ٸ���ģ�屻ʵ����ΪDate<int,char>���ͣ�������ػ��İ汾
////����Ļ��͵���û���ػ���ģ��
//template<>
//class Data<int, char>
//{
//public:
//	Data() 
//	{ 
//		cout << "Data<int, char>" << endl; 
//	}
//private:
//	int _d1;
//	char _d2;
//};
//void TestVector()
//{
//	Data<int, int> d1;    //���������ػ������Ͳ�һ������ô������ʵ�ͻ��ߵ������ػ���ģ��Ĳ���
//	Data<int, char> d2;   //�������ػ��İ汾һֱ���ͻ��ߵ��������ػ��İ汾
//}
//
//int main()
//{
//	TestVector();
//}


//#include<iostream>
//#include<string>
//using namespace std;
//template<class T1, class T2>
//class Data
//{
//public:
//	Data() 
//	{ 
//		cout << "Data<T1, T2>" << endl; 
//	}
//private:
//	T1 _d1;
//	T2 _d2;
//};
//// ���ڶ��������ػ�Ϊint
//template <class T1>
//class Data<T1, int>
//{
//public:
//	Data() 
//	{ 
//		cout << "Data<T1, int>" << endl; 
//	}
//private:
//	T1 _d1;
//	int _d2;
//};
//int main()
//{
//	return 0;
//}


//��������ƫ�ػ�Ϊָ������
//#include<iostream>
//#include<string>
//using namespace std;

//template<class T1, class T2>
//class Data
//{
//public:
//	Data() 
//	{ 
//		cout << "Data<T1, T2>" << endl; 
//	}
//private:
//	T1 _d1;
//	T2 _d2;
//};
//
//template <typename T1, typename T2>
//class Data <T1*, T2*>
//{
//public:
//	Data() 
//	{ 
//		cout << "Data<T1*, T2*>" << endl; 
//	}
//private:
//	T1 _d1;
//	T2 _d2;
//};
//
////��������ƫ�ػ�Ϊ��������
//template <typename T1, typename T2>
//class Data <T1&, T2&>
//{
//public:
//	Data(const T1& d1, const T2& d2)
//		: _d1(d1)
//		, _d2(d2)
//	{
//	cout << "Data<T1&, T2&>" << endl;
//	}
//private:
//	const T1& _d1;
//	const T2& _d2;
//};
//void test2()
//{
//	Data<double, int> d1; // �����ػ���int�汾
//	Data<int, double> d2; // ���û�����ģ��
//	Data<int*, int*> d3; // �����ػ���ָ��汾
//	Data<int&, int&> d4(1, 2); // �����ػ���ָ��汾
//}
//int main()
//{
//	test2();
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
////������ȡ
////����һ���ṹ��
////�����������Ӧ��������
//struct TrueType
//{
//	static bool Get()
//	{
//		return true;
//	}
//};
////����һ���ṹ��
////�����������Ӧ�Զ�������
//struct FalseType
//{
//	static bool Get()
//	{
//		return false;
//	}
//};
//
////��������Ҳ��һ����ģ��
////�����ģ�����������Ӧ���������
////��ô��Ȼ�������������������ˣ���ô����ʵҲ�������Զ������ͺ���������
////�Ǿ�����ȥ�������е��Զ�������
//template<class T>
//struct TypeTrait   //����һ����ģ�壬ֻ�������ģ������ʲô��û��
//	//ֻ��ȥ��һ������
//{
//	typename FalseType IsPODType;
//};
//
////��ô��������Ӧ����δ����أ�
//template<>
//struct TypeTrait<int>
//{
//	typename TrurType IsPODType;
//
//};
//
//
//template<class T>   //��ô�����Ұ�T������֮���ҵ�����ô����֪��T����ʱʲô���͵�
////���ǲ�֪��T�������Զ������ͻ����������͵�
//void Copy(T* dest, const T* source, size_t size)
//{
//	if ()
//	{
//		//memcpy�Ŀ�����ʽʱǳ�����Ŀ�����ʽ���������������ʱһ��������������
//		//����������Զ������͵Ļ����������ʹ��memcpy�Ļ�����ô��ʵ���ǻ���ִ�����
//		memcpy(dest, source, sizeof(T) * size);
//	}
//	else
//	{
//		//��ô��������ʵ����������һ�ֿ����ķ�ʽ
//		for (int i = 0; i < size; i++)
//		{
//			dest[i] = source[i];
//		}
//	}
//	
//}
//int main()
//{
//	return 0;
//}


#include<iostream>
using namespace std;
int main()
{
	//ΪʲôC�������Ѿ�����һ���Լ�����������ķ�ʽ
	//C++�л�Ҫ�����Լ�������������أ�
	//ԭ�������C��������������������Щ���������ʹ��������ʵ��������ô�ķ���

	int a = 0;
	//C���Ե����룬����������Ҫ�����ʱ������Ҫ֪������������������������ʲô���͵�����
	//Ҫ������ʽ���ƣ��������͵�������ʽ���ƶ��ǲ�һ����
	scanf("%d", &a);
	printf("%d", a);

	//������ΪC�����е���������кܶ��ȱ��
	//����C++���ָ�����һ���Լ���I/0��
	//�������¸�����Լ���һ����������ķ�ʽ
	//�ṩ���û�ʹ��

	return 0;
}