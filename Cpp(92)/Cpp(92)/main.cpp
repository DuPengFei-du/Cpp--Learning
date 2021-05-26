#define _CRT_SECURE_NO_WARNINGS 1



//#include<iostream>
//#include<string>
//#include<assert.h>
////ģ��ʵ��һ��string��
//using namespace std;
//
//namespace bite
//{
//	class string
//	{
//		typedef char* iterator;
//	public:
//
//		//���캯��
//		string(const char* str="")
//		{
//			if (str == nullptr)
//				str = "";
//			_size = strlen(str);
//			_capacity = _size <= 15 ? 15 : strlen(str);
//			//���ٿռ�
//			_str = new char[strlen(str) + 1];
//			strcpy(_str, str);
//		}
//
//		//��������
//		~string()
//		{
//			if (_str)
//			{
//				delete[] _str;
//				_str = nullptr;
//				_size = 0;
//				_capacity = 0;
//			}
//		}
//
//		//�������캯��
//		string(const string& s)
//			:_str(nullptr)
//		{
//			string strTemp(s._str);
//			this->swap(strTemp);
//		}
//
//		//��ֵ���������
//		string& operator=(const string& s)
//		{
//			//������Ҫ�����ж�һ���ǲ����Լ����Լ���ֵ
//			if (this != &s)
//			{
//				string strTemp(s._str);
//				this->swap(strTemp);
//			}
//		}
//
//		size_t size()const
//		{
//			return _size;
//		}
//
//		size_t capacity()const
//		{
//			return _capacity;
//		}
//
//		bool empty()const
//		{
//			return 0 == _size;
//		}
//
//		//ȥд���ݵĲ���
//		//reverse����
//		//������һ���µ�����
//		void reverse(size_t newcapacity)
//		{
//			size_t oldcapacity = capacity();
//			if (newcapacity > oldcapacity)
//			{
//				//����Ҫȥ���пռ������Ĳ�����
//				//����ռ�
//				char* temp = new char[newcapacity + 1];
//				strncpy(temp, _str, _size);
//				delete[] _str;
//				_str = temp;
//				_capacity = newcapacity;
//			}
//		}
//
//		//resize---�ı���ЧԪ�صĸ���
//		void resize(size_t newsize, char ch)
//		{
//			size_t oldsize = size();
//			if (newsize > oldsize)
//			{
//				if (newsize > capacity())
//				{
//					reverse(newsize);
//				}
//				memset(_str + _size, ch, newsize - oldsize);
//			}
//			_size = newsize;
//			_str[_size] = '\0';
//		}
//
//		void resize(size_t newsize)
//		{
//			//��������ķ���
//			//������Ŀռ���0�������
//			resize(newsize, 0);
//		}
//
//		void clear()
//		{
//			_size = 0;
//			*_str = '\0';
//		}
//
//		iterator begin()
//		{
//			return _str;
//		}
//
//		iterator end()
//		{
//			return _str + _size;
//		}
//
//		//�±����ò�����
//		char& operator[](size_t index)
//		{
//			assert(index < _size);
//			return _str[index];
//		}
//
//		const char& operator[](size_t index)const
//		{
//			assert(index < _size);
//			return _str[index];
//		}
//
//		void swap(string &s)
//		{
//			std::swap(_str, s._str);
//			std::swap(_size, s._size);
//			std::swap(_capacity, s._capacity);
//		}
//
//	private:
//		char* _str;
//		size_t _size;
//		size_t _capacity;
//	};
//}
//
//int main()
//{
//	string s1;
//
//	string s2("hello");
//
//	return 0;
//}


//vector


//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
//
//	vector<int> v1;
//
//	vector<int> v2(arr, arr + sizeof(arr) / sizeof(arr[0]));
//
//	for (auto e : v2)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	vector<int> v3(v2);
//
//	for (auto e : v3)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//	
//	vector<int> v4(10, 5);
//
//	for (auto e : v4)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	vector<int> v5{ 1,2,3,4,5,6 };
//
//	for (auto e : v5)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//}


//#include<iostream>
//#include<vector>
//using namespace std;
//void TestVector2()
//{
//	vector<int> v{ 1,2,3,4,5 };
//	cout << v.size() << endl;
//	cout << v.capacity() << endl;
//
//	for (auto e : v)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	v.resize(10, 6);
//
//	cout << v.size() << endl;
//	cout << v.capacity() << endl;
//
//	for (auto e : v)
//	{
//		cout << e << " ";;
//	}
//	cout << endl;
//
//	v.resize(3, 6);
//
//	cout << v.size() << endl;
//	cout << v.capacity() << endl;
//
//	for (auto e : v)
//	{
//		cout << e << " ";;
//	}
//	cout << endl;
//
//	v.reserve(20);  //�ڶ����������û�д��ݣ���ôʹ��0���������
//	cout << v.size() << endl;
//	cout << v.capacity() << endl;
//
//	for (auto e : v)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	v.reserve(8);  //�ڶ����������û�д��ݣ���ôʹ��0���������
//
//	for (auto e : v)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//}
//int main()
//{
//	TestVector2();
//	return 0;
//}


//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//class Date
//{
//public:
//	Date(int year=1, int month=1, int day=1)
//		:_year(year)
//		, _month(month)
//		, _day(day)
//	{
//
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//
//	Date d(2021, 4, 2);
//
//	vector<Date> vd;
//
//	vd.resize(10, d);
//
//	vd.resize(20);
//
//	return 0;
//}


//#include<iostream>
//#include<vector>
//using namespace std;
//void TestVector3()
//{
//	vector<int> v1;
//	v1.reserve(10);
//	//ע�⣺���д�������
//	//ԭ��reserve(10)ֻ�ǽ������Ĵ�С����10��������������ЧԪ�صĸ���
//	//����v1����ЧԪ�صĸ�����Ȼ��0����ô��Ҫȥ����0��λ�õĴ����ǿ϶��������
//	cout << v1[0] << endl;
//
//	vector<int> v2;
//	v2.resize(10);
//	//��������������û��ʲô�����
//	cout << v2[0] << endl;
//}
//int main()
//{
//	TestVector3();
//	return 0;
//}


//#include<iostream>
//#include<vector>
//using namespace std;
//void TestVector4()
//{
//	vector<int> v;
//	size_t sz = v.capacity();
//	for (size_t i = 0; i < 100; i++)
//	{
//		v.push_back(i);
//		if (sz != v.capacity())
//		{
//			sz = v.capacity();
//			cout << sz << endl;
//		}
//	}
//	for (auto e : v)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//}
//int main()
//{
//	TestVector4();
//	return 0;
//}


//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//void TestVector4()
//{
//	vector<int> v;
//
//	v.reserve(100);
//
//	size_t sz = v.capacity();
//	for (size_t i = 0; i < 100; i++)
//	{
//		v.push_back(i);
//		if (sz != v.capacity())
//		{
//			sz = v.capacity();
//			cout << sz << endl;
//		}
//	}
//	for (auto e : v)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//}
//int main()
//{
//	TestVector4();
//	return 0;
//}


//ģ��ʵ��string��

//#include<iostream>
//#include<string>
//using namespace std;
//namespace bite
//{
//	class string
//	{
//	public:
//		string(const char* str="")
//		{
//			if (str == nullptr)
//			{
//				_str = "";
//			}
//			_size = strlen(str);
//			_capacity = _size <= 15 ? 15 : strlen(str);
//			_str = new char[strlen(str)+1];
//			strcpy(_str, str);
//			}
//
//		}
//
//		//��������
//		string(const string& s)
//			:_str(nullptr)
//		{
//			string strTemp(s._str);
//			swap(_str, strTemp._str)
//		}
//
//		//��ֵ�����������
//		string& operator=(const string& s)
//		{
//			if (this != &s)
//			{
//				//����ռ䣬����Ԫ�أ��ͷžɵĿռ�
//				char* temp = new char[strlen(s._str) + 1];
//				strcpy(temp, s._str);
//				delete[] _str;
//				_str = temp;
//			}
//			return *this;
//		}
//
//		~string()
//		{
//			delete[] _str;
//			_str = nullptr;
//			_size = 0;
//			_capacity = 0;
//		}
//
//		void swap(string& s)
//		{
//			std::swap(_str, s._str);
//			std::swap(_size, s._size);
//			std::swap(_capacity, s._capacity);
//		}
//
//	private:
//		char* _str;
//		size_t _size;
//		size_t _capacity;
//	}
//};
//
////void TestString()
////{
////	bite::string s1;  //������ȥ����һ���յ��ַ���
////	bite::string s2("hello");
////	bite::string s3(s2);
////
////	s1 = s2;
////}
////int main()
////{
////	TestString();
////
////	return 0;
////}



//#include<iostream>
//#include<string>
//
//namespace bite
//{
//	class string
//	{
//	public:
//		string(const char* str = "")
//		{
//			if (str == nullptr)
//				str = "";
//			_size = strlen(str);
//			_capacity = _size <= 15 ? 15 : strlen(str);
//			_str = new char[strlen(str) + 1];
//			strcpy(_str, str);
//		}
//
//		//��������
//		string(const string& s)
//			:_str(nullptr)
//		{
//			string strTemp(s._str);
//			this->swap(strTemp);
//		}
//
//		//��ֵ���������
//		string& operator=(const string& s)
//		{
//			if (this != &s)
//			{
//				string strTemp(s._str);
//				this->swap(strTemp);
//			}
//			return *this;
//		}
//
//		~string()
//		{
//			if (_str)
//			{
//				delete[] _str;
//				_str = nullptr;
//				_size = 0;
//				_capacity = 0;
//			}
//		}
//
//		size_t size()const
//		{
//			return _size;
//		}
//
//		size_t capacity()const
//		{
//			return _capacity;
//		}
//
//		bool empty()const
//		{
//			return 0 == _size;
//		}
//
//		void swap(string& s)
//		{
//			std::swap(_str, s._str);
//			std::swap(_size, s._size);
//			std::swap(_capacity, s._capacity);
//		}
//
//	private:
//		char* _str;
//		size_t _size;
//		size_t _capacity;
//	};
//}
//
//int main()
//{
//	return 0;
//}


//#include<vector>
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	vector<int> v1;
//
//	vector<int> v2(10, 5);
//
//	int arr[5] = { 1,2,3,4,5 };
//
//	vector<int> v3(arr, arr + sizeof(arr) / sizeof(arr[0]));
//
//	for (auto e : v2)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	for (auto e : v3)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	vector<int> v4{ 8,8,8,8 };
//
//	for (auto e : v4)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//}


//#include<iostream>
//#include<vector>
//using namespace std;
//void TestVector2()
//{
//	vector<int> v{ 1,2,3,4,5 };
//	cout << v.size() << endl;
//	cout << v.capacity() << endl;
//
//	for (auto e : v)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	v.resize(10, 6);
//
//	cout << v.size() << endl;
//	cout << v.capacity() << endl;
//
//	for (auto e : v)
//	{
//		cout << e << " ";;
//	}
//	cout << endl;
//
//	v.resize(3, 6);
//
//	cout << v.size() << endl;
//	cout << v.capacity() << endl;
//
//	for (auto e : v)
//	{
//		cout << e << " ";;
//	}
//	cout << endl;
//
//	v.reserve(20);  //�ڶ����������û�д��ݣ���ôʹ��0���������
//	cout << v.size() << endl;
//	cout << v.capacity() << endl;
//
//	for (auto e : v)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	v.reserve(8);  
//
//	for (auto e : v)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//}
//int main()
//{
//	TestVector2();
//	return 0;
//}


//#include<iostream>
//#include<vector>
//using namespace std;
//void TestVector5()
//{
//	vector<int> v{ 1,2,3,4,5 };
//	//������3���ڵ�λ�ò���0
//	//vector�б�����û���ṩfind�ķ�����,��ô����ֻ��ʹ�ñ�׼���е�find������
//	auto pos = find(v.begin(), v.end(), 3);
//	if (pos != v.end())
//	{
//		v.insert(pos, 0);
//	}
//	v.insert(v.begin(), 5, 0);
//
//	//��Ȼ��Ҳ���Բ���һ�������Ŀռ�
//	vector<int> vv{ 11,22,33 };
//
//	v.insert(v.end(), vv.begin(), vv.end());
//
//	for (auto e : v)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//}
//int main()
//{
//	TestVector5();
//	return 0;
//}


//#include<iostream>
//#include<vector>
//using namespace std;
//void TestVector6()
//{
//	vector<int> v{ 1,2,3,4,5, };
//	v.erase(v.begin());
//
//	//�൱���Ǵ�v.clear()
//	v.erase(v.begin(), v.end());
//}
//int main()
//{
//	TestVector6();
//	return 0;
//}


//#include<iostream>
//#include<vector>
//using namespace std;
//void TestVector7()
//{
//	vector<int> v{ 1,2,3,4,5 };
//
//	auto it = v.begin();
//
//	v.push_back(6);
//	v.push_back(7);
//
//	while (it != v.end())
//	{
//		cout << *it << " ";
//		it++;
//	}
//	cout << endl;
//
//}
//int main()
//{
//	TestVector7();
//	return 0;
//}


//#include<iostream>
//#include<vector>
//using namespace std;
//void TestVector8()
//{
//	//����:ÿ�е�Ԫ�ظ���������ͬ��
//	//���磺5��6�еĶ�ά����
//	vector<vector<int>> v1;
//
//	//��ά�����ܹ���5�У�����ÿ�л�û�пռ�
//	v1.resize(5);
//
//	cout << v1[0].size() << endl;
//	cout << v1[0].capacity() << endl;
//
//	//��������ã��������������д����Ļ�����ʵ�ǻ���ɴ���ı�����
//	//ԭ�����ڣ�v1[0]��vector��û����ЧԪ�أ������޷�����0��λ�õ�Ԫ��
//	//v1[0][0] = 10;
//
//	for (size_t i = 0; i < v1.size(); i++)
//	{
//		v1[i].resize(6);
//		for (size_t j = 0; j < v1[i].size(); ++j)
//		{
//			v1[i][j] = j + 1;
//		}
//	}
//}
//int main()
//{
//	TestVector8();
//	return 0;
//}


////vector��ģ��ʵ��
//#include<iostream>
//using namespace std;
//namespace bite
//{
//	template<class T>
//	class vector
//	{
//	public:
//		typedef T* iterator;
//
//		//�������캯��
//		vector()
//			:start(nullptr)
//			,finish(nullptr)
//			,end_of_storage(nullptr)
//		{
//
//		}
//
//		vector(size_t n, const T& data = T())
//		{
//			start = new T[n];
//			for (int i = 0; i < n; i++)
//			{
//				start[i] = n;
//			}
//			finish = start + n;
//			end_of_storage = finish;
//		}
//
//		//����һ�������ռ�Ĺ���
//		template<class Iterator>
//		vector(Iterator first, Iterator last)
//		{
//			//���ȼ��������οռ���Ԫ�صĸ���
//			size_t size = 0;
//			auto it = first;
//			while (it++ != last)
//			{
//				size++;
//			}
//			//���ռ�
//			start = new T[size];
//			finish = start;
//			while (first != last)
//			{
//				*finish++ = *first++;
//			}
//			end_of_storage = finish;
//		}
//
//		//��������
//		vector(const vector<T>& v)
//		{
//			//��ȥ���ٿռ�
//			//����Ŀ�������ķ�ʽ��ʵ���ǰ�������ķ�ʽ����������
//			//��Ϊ�Ҹ��µĶ�������ȥnew�ռ��ˣ������൱��������ķ�ʽ
//			start = new T[v.size()];
//			finish = start;
//			auto it = v.begin();
//			while (it != v.end())
//			{
//				//�ռ俪�ٺ���֮����ֻ��Ҫ��v�����Ԫ��һ��һ���Ž�ȥ��ʵ�ͺ���
//				*finish++ = *it++;
//			}
//			end_of_storage = finish;
//		}
//
//
//
//	private:
//		iterator start;
//		iterator finish;
//		iterator end_of_storage;
//
//	};
//}


//#include<iostream>
//using namespace std;
//
//void TestFunc1()
//{
//	throw 1;
//}
//
//bool TestFunc2()
//{
//	return false;
//}
//
////�������������������������һ��������Լ����������ǰ��ֹ��������
////�㶼��Ҫ�Կ��ٵ��ڴ�ռ��Լ��򿪵��ļ�ָ������ͷ��Լ��رյĲ���
////��ô��ʵ�ظ��Ĳ����͸���̫�����
//void TestFunc()
//{
//	int* p = new int[10];
//	FILE* fp = fopen("666.txt", "rb");
//
//	if (nullptr == fp)
//	{
//		delete[] p;
//		return;
//	}
//
//	try
//	{
//		TestFunc1();
//	}
//	catch (...)
//	{
//		delete[] p;
//		fclose(fp);
//		return;
//	}
//
//	if (!TestFunc2())
//	{
//		delete[] p;
//		fclose(fp);
//		return;
//	}
//
//	delete[] p;
//	fclose(fp);
//}
//int main()
//{
//	return 0;
//}


//#include<iostream>
//using namespace std;
//template<class T>
//class SmartPtr
//{
//public:
//	SmartPtr(T* ptr=nullptr)  //����û�û���ṩ�Ļ����ҽ������һ������ʵ��ok
//		:_ptr(ptr)
//	{
//
//	}
//
//	~SmartPtr()
//	{
//		//����������Ҫȥ��һ�����ָ�뵽����û�й�����Դ
//		if (_ptr)
//		{
//			delete _ptr;
//		}
//	}
//
//protected:
//	T* _ptr;
//};
//
//void TestFunc()
//{
//	SmartPtr<int> sp(new int);  //���ھ��൱���Ǵ�����һ��SmartPtr��Ķ���sp
//	//��ô��ʵ����Ŀռ���ͷžͲ���Ҫ�������ٵ����Ľ��д�����
//	//��Ϊ�ٵ���SmartPtr������������ʱ���ǻ������ǰѶ������Դ�ͷŵ���
//}
//
//int main()
//{
//	TestFunc();
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//template<class T>
//class SmartPtr
//{
//public:
//	SmartPtr(T* ptr = nullptr)  //����û�û���ṩ�Ļ����ҽ������һ������ʵ��ok
//		:_ptr(ptr)
//	{
//
//	}
//
//	~SmartPtr()
//	{
//		//����������Ҫȥ��һ�����ָ�뵽����û�й�����Դ
//		if (_ptr)
//		{
//			delete _ptr;
//		}
//	}
//
//	T& operator*()
//	{
//		return *_ptr;
//	}
//
//	T* operator->()
//	{
//		//ֻ��Ҫ�ѵ�ַ���ػ�ȥ�Ϳ�����
//		return _ptr;
//	}
//
//protected:
//	T* _ptr;
//};
//
//void TestFunc()
//{
//	SmartPtr<int> sp(new int);  //���ھ��൱���Ǵ�����һ��SmartPtr��Ķ���sp
//	//��ô��ʵ����Ŀռ���ͷžͲ���Ҫ�������ٵ����Ľ��д�����
//	//��Ϊ�ٵ���SmartPtr������������ʱ���ǻ������ǰѶ������Դ�ͷŵ���
//}
//
//int main()
//{
//	TestFunc();
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//template<class T>
//class SmartPtr
//{
//public:
//	SmartPtr(T* ptr = nullptr)  //����û�û���ṩ�Ļ����ҽ������һ������ʵ��ok
//		:_ptr(ptr)
//	{
//
//	}
//
//	~SmartPtr()
//	{
//		//����������Ҫȥ��һ�����ָ�뵽����û�й�����Դ
//		if (_ptr)
//		{
//			delete _ptr;
//		}
//	}
//
//	T& operator*()
//	{
//		return *_ptr;
//	}
//
//	T* operator->()
//	{
//		//ֻ��Ҫ�ѵ�ַ���ػ�ȥ�Ϳ�����
//		return _ptr;
//	}
//
//protected:
//	T* _ptr;
//};
//
//void TestFunc()
//{
//	SmartPtr<int> sp(new int);  //���ھ��൱���Ǵ�����һ��SmartPtr��Ķ���sp
//	//��ô��ʵ����Ŀռ���ͷžͲ���Ҫ�������ٵ����Ľ��д�����
//	//��Ϊ�ٵ���SmartPtr������������ʱ���ǻ������ǰѶ������Դ�ͷŵ���
//}
//
//int main()
//{
//	TestFunc();
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//namespace bite
//{
//	//���ȣ�����ָ����Ҫͨ��RAII�ķ�ʽ��Ȼ���ټ��Ͼ���ָ����Ϊ�Ĳ���
//	//ͬʱ��Ҫ���ǳ����������
//	template<class T>
//	class auto_ptr
//	{
//	public:
//
//		//������RAII��˼��
//		auto_ptr(T* ptr = nullptr)
//			:_ptr(ptr)
//		{
//
//		}
//
//		~auto_ptr()
//		{
//			if (_ptr)
//			{
//				delete _ptr;
//			}
//		}
//
//		//Ȼ��ȥ��������
//		T& operator*()
//		{
//			return *_ptr;
//		}
//
//		T* operator->()
//		{
//			return _ptr;
//		}
//	protected:
//		T* _ptr;
//	};
//}
//
//void TestFunc()
//{
//	bite::auto_ptr<int> sp1(new int);
//
//	//Ȼ��������ϣ����sp1ȥ��������sp2
//	bite::auto_ptr<int> sp2(sp1);
//	//���ǣ�����������û����ʾ�����������캯���������õľ���ǳ�����ķ�ʽ
//
//}
//
//int main()
//{
//	return 0;
//}


//#include<iostream>
//using namespace std;
//namespace bite
//{
//	//���ȣ�����ָ����Ҫͨ��RAII�ķ�ʽ��Ȼ���ټ��Ͼ���ָ����Ϊ�Ĳ���
//	//ͬʱ��Ҫ���ǳ����������
//	template<class T>
//	class auto_ptr
//	{
//	public:
//
//		//������RAII��˼��
//		auto_ptr(T* ptr = nullptr)
//			:_ptr(ptr)
//		{
//
//		}
//
//		auto_ptr(auto_ptr<T>& ap)
//		{
//			_ptr = ap._ptr;
//			//��Ϊap����Ķ�������ʹ���ˣ�����ֱ�Ӱ�ap����Դ����nullptr��ʵ���ǿ��Ե���
//			ap._ptr = nullptr;
//		}
//
//		auto_ptr<T>& operator=(auto_ptr<T>& sp)
//		{
//			if (this != &sp)
//			{
//				//�������Ҫ����ֵ�Ķ��������пռ�ģ� ��ô������
//				//��Ҫ�����Ŀռ��ͷŵ�����Ȼ�ͻ���ɴ���������������
//				if(_ptr)
//					delete _ptr;
//				_ptr = sp._ptr;
//				sp._ptr = nullptr;
//			}
//			return *this;
//		}
//
//		~auto_ptr()
//		{
//			if (_ptr)
//			{
//				delete _ptr;
//			}
//		}
//
//		//Ȼ��ȥ��������
//		T& operator*()
//		{
//			return *_ptr;
//		}
//
//		T* operator->()
//		{
//			return _ptr;
//		}
//	protected:
//		T* _ptr;
//	};
//}
//
//void TestFunc()
//{
//	bite::auto_ptr<int> sp1(new int);
//
//	//Ȼ��������ϣ����sp1ȥ��������sp2
//	bite::auto_ptr<int> sp2(sp1);
//	//���ǣ�����������û����ʾ�����������캯���������õľ���ǳ�����ķ�ʽ
//
//	sp1 = sp2;
//
//}
//
//int main()
//{
//	TestFunc();
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//namespace bite
//{
//	//���ȣ�����ָ����Ҫͨ��RAII�ķ�ʽ��Ȼ���ټ��Ͼ���ָ����Ϊ�Ĳ���
//	//ͬʱ��Ҫ���ǳ����������
//	template<class T>
//	class auto_ptr
//	{
//	public:
//
//		//������RAII��˼��
//		auto_ptr(T* ptr = nullptr)
//			:_ptr(ptr)
//			,_owner(false)   //֮���Ը���false����Ϊ�����ڲ���
//			//֪�������ָ�뵽������Ч�Ļ�����Ч��
//		{
//			if (_ptr)
//				_owner = true;
//		}
//
//		auto_ptr(const auto_ptr<T>& ap)
//			:_ptr(ap._ptr)
//			,_owner(ap._owner)
//		{
//			ap._owner = false;
//		}
//
//		auto_ptr<T>& operator=(const auto_ptr<T>& ap)
//		{
//			if (this != &ap)
//			{
//				//�������Ҫ����ֵ�Ķ��������пռ�ģ� ��ô������
//				//��Ҫ�����Ŀռ��ͷŵ�����Ȼ�ͻ���ɴ���������������
//				Release();
//				_ptr = ap._ptr;
//				_owner = ap._owner;
//				ap._owner = false;
//			}
//			return *this;
//		}
//
//		~auto_ptr()
//		{
//			if (_ptr&&&_owner)
//			{
//				delete _ptr;
//			}
//		}
//
//		//Ȼ��ȥ��������
//		T& operator*()
//		{
//			return *_ptr;
//		}
//
//		T* operator->()
//		{
//			return _ptr;
//		}
//
//	private:
//		void Release()
//		{
//			if (_ptr && _owner)
//			{
//				delete _ptr;
//			}
//		}
//
//	private:
//		T* _ptr;
//		mutable bool _owner;
//	};
//}
//
//void TestFunc()
//{
//	bite::auto_ptr<int> ap1(new int);
//
//	//Ȼ��������ϣ����sp1ȥ��������sp2
//	bite::auto_ptr<int> ap2(ap1);
//	//���ǣ�����������û����ʾ�����������캯���������õľ���ǳ�����ķ�ʽ
//
//}
//
//int main()
//{
//	TestFunc();
//
//	return 0;
//}


//#include<iostream>
//#include<memory>
//
//using namespace std;
//
//namespace bite
//{
//	template<class T>
//	class unique_ptr
//	{
//	public:
//		unique_ptr(T* ptr = nullptr)
//			:_ptr(ptr)
//		{
//
//		}
//
//		~unique_ptr()
//		{
//			if (_ptr)
//			{
//				delete _ptr;
//			}
//		}
//
//		T& operator*()
//		{
//			return *_ptr;
//		}
//			
//		T* operator->()
//		{
//			return _ptr;
//		}
//
//		//�����������ֹ����
//		//C++98���������Ľ����ʽ��ʵ����
//	//private:
//		//unique_ptr(const unique_ptr<T>&);
//	    //unique_ptr<T>& operator=(const unique_ptr<T>&);
//
//
//	    //C++11
//		unique_ptr(const unique_ptr<T>&)=delete;
//		unique_ptr<T>& operator=(const unique_ptr<T>&)= delete;
//	private:
//		T* _ptr;
//	};
//}
//
//int main()
//{
//	bite::unique_ptr<int> up1(new int);
//	bite::unique_ptr<int> up2(up1);
//
//	return 0;
//
//}


//#include<iostream>
//#include<memory>
//using namespace std;
//
//
//namespace bite
//{
//	template<class T>
//
//	class shared_ptr
//	{
//	public:
//
//		shared_ptr(T* ptr = nullptr)
//			:_ptr(ptr)
//			,_pCount(nullptr)
//		{
//			if (ptr)
//				_pCount = new int(1);
//		}
//
//		shared_ptr(const shared_ptr<T>& sp)
//			:_ptr(sp._ptr)
//			,_pCount(sp._pCount)
//		{
//			if(_ptr)
//				++(*_pCount);
//		}
//
//		//��ֵ�����������
//		shared_ptr& operator=(const shared_ptr<T>& sp)
//		{
//			if (this != &sp)
//			{
//				Release();
//
//				//��sp������
//				_ptr = sp._ptr;
//				_pCount = sp._pCount;
//
//				//sp����Դ���˵�ǰ����ȥ����
//				if (_ptr)
//				{
//					++(*_pCount);
//				}
//			}
//			return *this;
//		}
//
//
//		~shared_ptr()
//		{
//			Release();
//		}
//
//		T& operator*()
//		{
//			return *_ptr;
//		}
//			
//		T* operator->()
//		{
//			return _ptr;
//		}
//
//		int usecount()
//		{
//			return *_pCount;
//		}
//	private:
//		void Release()
//		{
//			if (_ptr && 0 == --(*_pCount))
//			{
//				delete _ptr;
//				delete _pCount;
//			}
//		}
//	private:
//		T* _ptr;
//		int* _pCount;
//	};
//}
//
//void TestFunc()
//{
//	bite::shared_ptr<int> sp1(new int);
//	bite::shared_ptr<int> sp2(sp1);
//
//	bite::shared_ptr<int> sp3(new int);
//	bite::shared_ptr<int> sp4(sp3);
//
//	sp4 = sp1;
//
//
//}
//
//int main()
//{
//	TestFunc();
//	return 0;
//}


//#include<iostream>
//#include<memory>
//using namespace std;
//
//template<class T>
//class DFDel
//{
//public:
//	void operator()(T* p)
//	{
//		delete p;
//		p = nullptr;
//	}
//};
//
//template<class T>
//class Free
//{
//public:
//	void operator()(T* p)
//	{
//		if (p)
//		{
//			free(p);
//			p = nullptr;
//		}
//	}
//};
//
//class FClose
//{
//public:
//	void operator()(FILE* p)
//	{
//		if (p)
//		{
//			fclose(p);
//			p = nullptr;
//		}
//	}
//};
//
//
//namespace bite
//{
//	template<class T,class DF= DFDel<T>>
//
//	class shared_ptr
//	{
//	public:
//
//		shared_ptr(T* ptr = nullptr)
//			:_ptr(ptr)
//			,_pCount(nullptr)
//		{
//			if (ptr)
//				_pCount = new int(1);
//		}
//
//		shared_ptr(const shared_ptr<T>& sp)
//			:_ptr(sp._ptr)
//			,_pCount(sp._pCount)
//		{
//			if(_ptr)
//				++(*_pCount);
//		}
//
//		//��ֵ�����������
//		shared_ptr& operator=(const shared_ptr<T>& sp)
//		{
//			if (this != &sp)
//			{
//				Release();
//
//				//��sp������
//				_ptr = sp._ptr;
//				_pCount = sp._pCount;
//
//				//sp����Դ���˵�ǰ����ȥ����
//				if (_ptr)
//				{
//					++(*_pCount);
//				}
//			}
//			return *this;
//		}
//
//
//		~shared_ptr()
//		{
//			Release();
//		}
//
//		T& operator*()
//		{
//			return *_ptr;
//		}
//			
//		T* operator->()
//		{
//			return _ptr;
//		}
//
//		int usecount()
//		{
//			return *_pCount;
//		}
//	private:
//		void Release()
//		{
//			if (_ptr && 0 == --(*_pCount))
//			{
//				//delete _ptr;
//
//				//DF��һ������
//				//DF()�Ǵ���һ�������Ķ���
//				DF()(_ptr);
//				delete _pCount;
//			}
//		}
//	private:
//		T* _ptr;
//		int* _pCount;
//	};
//}
//
//void TestFunc()
//{
//	bite::shared_ptr<int,Free<int>> sp1((int*)malloc(sizeof(int)));
//	bite::shared_ptr<FILE,FClose> sp2(fopen("666.txt","rb"));
//
//	//���������д����ʵ�ǲ�ok�ģ���Ϊ��C++11�е�����ָ����ʵ���ǲ��ܹ��������Ŀռ��
//	//ԭ��������Ϊ�ڱ�׼��������ʵ�Ѿ�����һ�����Թ��������ռ�Ķ���
//	//��ʵ����vector
//	//bite::shared_ptr<int> sp3(new int[10]);
//}
//
//int main()
//{
//	TestFunc();
//	return 0;
//}


//#include<iostream>
//#include<memory>
//#include<mutex>
//using namespace std;
//
//template<class T>
//class DFDel
//{
//public:
//	void operator()(T* p)
//	{
//		delete p;
//		p = nullptr;
//	}
//};
//
//template<class T>
//class Free
//{
//public:
//	void operator()(T* p)
//	{
//		if (p)
//		{
//			free(p);
//			p = nullptr;
//		}
//	}
//};
//
//class FClose
//{
//public:
//	void operator()(FILE* p)
//	{
//		if (p)
//		{
//			fclose(p);
//			p = nullptr;
//		}
//	}
//};
//
//
//namespace bite
//{
//	template<class T,class DF= DFDel<T>>
//
//	class shared_ptr
//	{
//	public:
//
//		shared_ptr(T* ptr = nullptr)
//			:_ptr(ptr)
//			,_pCount(nullptr)
//			,_pMutex(new mutex)
//		{
//			if (ptr)
//				_pCount = new int(1);
//		}
//
//		shared_ptr(const shared_ptr<T>& sp)
//			:_ptr(sp._ptr)
//			,_pCount(sp._pCount)
//		{
//			AddRefCount();
//		}
//
//		//��ֵ�����������
//		shared_ptr& operator=(const shared_ptr<T>& sp)
//		{
//			if (this != &sp)
//			{
//				Release();
//
//				//��sp������
//				_ptr = sp._ptr;
//				_pCount = sp._pCount;
//
//				//sp����Դ���˵�ǰ����ȥ����
//				AddRefCount();
//			}
//			return *this;
//		}
//
//
//		~shared_ptr()
//		{
//			Release();
//		}
//
//		T& operator*()
//		{
//			return *_ptr;
//		}
//			
//		T* operator->()
//		{
//			return _ptr;
//		}
//
//		int usecount()
//		{
//			return *_pCount;
//		}
//	private:
//		void Release()
//		{
//			//����
//			_pMutex->lock();
//			if (_ptr && 0 == --(*_pCount))
//			{
//				//delete _ptr;
//
//				//DF��һ������
//				//DF()�Ǵ���һ�������Ķ���
//				DF()(_ptr);
//				delete _pCount;
//			}
//			//����
//			//����뿪��ʱ�򲻽��н����Ļ�����ô�ͻ����������
//			_pMutex->unlock();
//		}
//
//		void AddRefCount()
//		{
//			_pMutex->lock();
//			if (_ptr)
//				++(*_pCount);
//			_pMutex->unlock();
//
//		}
//
//	private:
//		T* _ptr;
//		int* _pCount;
//		mutex* _pMutex;
//	};
//}
//
//void TestFunc()
//{
//	bite::shared_ptr<int,Free<int>> sp1((int*)malloc(sizeof(int)));
//	bite::shared_ptr<FILE,FClose> sp2(fopen("666.txt","rb"));
//
//	//���������д����ʵ�ǲ�ok�ģ���Ϊ��C++11�е�����ָ����ʵ���ǲ��ܹ��������Ŀռ��
//	//ԭ��������Ϊ�ڱ�׼��������ʵ�Ѿ�����һ�����Թ��������ռ�Ķ���
//	//��ʵ����vector
//	//bite::shared_ptr<int> sp3(new int[10]);
//}
//
//int main()
//{
//	TestFunc();
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//
////����
//class Base
//{
//public:
//	void SetBase(int pri, int pro, int pub)
//	{
//		_pri = pri;
//		_pro = pro;
//		_pub = pub;
//	}
//
//	void PrintBase()
//	{
//		cout << _pri << "-" << _pro << "-" << _pub << endl;
//	}
//
//private:
//	int _pri;
//protected:
//	int _pro;
//public:
//	int _pub;
//};
//
//
////�����̳л���
//class Derived :protected Base
//{
//public:
//	void TestDerived()
//	{
//		_pub = 100;
//		_pro = 200;
//	}
//public:
//	int _pubD;
//};
//
//class B :public Derived
//{
//	void Test()
//	{
//		_pub = 100;
//	}
//};
//
//int main()
//{
//	cout << sizeof(Derived) << endl;
//
//	//����Ķ���
//	Derived d;
//
//	//�����̳еķ�ʽ���еĳ�Ա����Ҳ�޷���������з��ʵĲ�����
//	//d._pub = 1000;
//
//	return 0;
//
//}


