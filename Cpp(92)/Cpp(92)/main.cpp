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


//#include<iostream>
//using namespace std;
//int main()
//{
//	cout << "hello world\n" << endl;
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	return 0;
//}
////��δ���ʲô�������ӡ �ڶ���else���ڱ������������͵ڶ���if����
////���Դ���ʲô�������ӡ��û�з��ŵ�������


//#include<stdio.h>
//int main()
//{
//	int age = 10;
//	if (age == 5)
//		printf("age==5\n");
//	return 0;
//}
////��Ļ��ʲô�������ӡ����Ϊage��=5��


//#include<stdio.h>
//int main()
//{
//	int count = 0;
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n");
//	printf("%d\n", count);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch (n)
//		{//switch����Ƕ��ʹ��
//		case 1:	n++;
//		case 2:m++; n++;	break;
//		}
//	case 4:m++; break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
////��ӡ���Ϊ1��2��3��4
////break���õ�����ѭ����ֹͣ���ڵ�����ѭ�������õ���ֹѭ��


//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
////��ӡ�����1��2��3��4��4��4��4��4...��ѭ��


//#include<stdio.h>
//int main()
//{
//	int ch = getchar();
//	putchar(ch);
//	return 0;
//}
////����ʲô�ַ��ͻ������Ӧ���ַ�


////EOFΪend of file
//#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//		putchar(ch);
//	return 0;
//}
////��ctrl+z��ͣ������


////����������һ����������
//#include<stdio.h>
//int main()
//{
//	int count = 0;
//	int j = 0;
//	for (int i = 100; i <= 200; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (i == j)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n");
//	printf("%d\n", count);
//	return 0;
//}


////����������һ����������
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int count = 0;
//	int j = 0;
//	for (int i = 100; i <= 200; i++)
//	{
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j > sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n");
//	printf("%d\n", count);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int j = 0;
//	int count = 0;
//	for (int i = 100; i <= 200; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j == i)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n");
//	printf("%d\n", count);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n= 0;
//	(void)scanf("%d", &n);
//	for (int a = 1; a <= n; a++)
//	{
//		for (int b = 1; b <= a; b++)
//		{
//			printf("%d * %d=%2d ", a, b, a * b);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int temp = 0;
//	(void)scanf("%d %d", &a, &b);
//	temp = a;
//	a = b;
//	b = temp;
//	printf("%d %d", a, b);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	(void)scanf("%d %d", &a, &b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("%d %d", a, b);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	(void)scanf("%d %d", &a, &b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d", a, b);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 1;
//	(void)scanf("%d %d", &a, &b);
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("%d ", b);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int x = 0;
//	int y = 0;
//	for (x = 0, y = 0; x < 2, y < 5; ++x, ++y)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int sum = 1;
//	(void)scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		sum *= i;
//	}
//	printf("%d", sum);
//}


//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int sum = 0;
//	int ret = 1;
//	(void)scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		ret *= i;
//		sum += ret;
//	}
//	printf("%d", sum);
//}


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int key = 6;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < key)
//			left = mid + 1;
//		else if (arr[mid] > key)
//			right = mid - 1;
//		else
//		{
//			printf("�ҵ��ˣ��±�Ϊ:%d\n", mid);
//			break;
//		}
//	}
//	return -1;
//}


////ģ����г���ĵ�¼
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char passwd[20] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������\n");
//		(void)scanf("%s", passwd);
//		if (0 == strcmp(passwd, "123456"))
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("���벻��ȷ�������½��е�¼�Ĳ���\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("�޷��ٽ��е�¼\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	(void)scanf("%d %d", &a, &b);
//	if (a > b)
//		printf("%d", a);
//	else
//		printf("%d", b);
//	return 0;
//}


//#include<stdio.h>
//int Max(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	(void)scanf("%d %d", &a, &b);
//	c = Max(a, b);
//	printf("%d", c);
//	return 0;
//}


//#include<stdio.h>
//void Swap(int* x, int* y)
//{
//	int temp = *x;
//	*x = *y;
//	*y = temp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	(void)scanf("%d %d", &a, &b);
//	Swap(&a, &b);
//	printf("%d %d", a, b);
//	return 0;
//}


//#include<stdio.h>
//int is_prime(int n)
//{
//	for (int i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int n = 0;
//	(void)scanf("%d", &n);
//	if (is_prime(n) == 1)
//		printf("����\n");
//	else
//		printf("��������\n");
//	return 0;
//}


//#include<stdio.h>
//void Print(int n)
//{
//	if (n > 9)
//		Print(n / 10);
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int n = 0;
//	(void)scanf("%d", &n);
//	Print(n);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	//����Ҳ��һ���Զ�������
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));                //40
//	printf("%d\n", sizeof(int[10]));          //40
//	int a = 10;
//	sizeof(int);  //���Ե�
//	sizeof(a);    //���Ե�
//	//��ô�������ˣ������������ʲô�أ�
//	//��������ͣ���������ȥ��������ʣ�µĲ���
//	//������������������� int arr[10],��ô��������;���int [10]
//}



//#include<stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	//0x11223344����a�����Ǹոպõ�
//	//��Ϊ11��һ���ֽڣ�22��һ���ֽڣ�33��һ���ֽڣ�44��һ���ֽ�
//	//ͨ�����ӿ���ת����16���ƣ��۲쵽a��ֵΪ0x11223344
//	//ͨ���ڴ濴������&a�����Թ۲쵽��a��ʾΪ44332211
//	return 0;
//}

//
//#include<stdio.h>
//int main()
//{
//	//����˵������һ��1-1�Ľ���Ƕ���
//	//�����ź����ǣ���������������
//	//����ֻ�ðѼ���ת��Ϊ�ӷ�����ʽ
//	//1 - 1;
//	1 + (-1);
//	//�����ԭ��������Ļ�
//	// 1��ԭ��
//	//00000000000000000000000000000001
//	//-1��ԭ��
//	//10000000000000000000000000000001
//	//��������ӵĽ��Ϊ
//	//10000000000000000000000000000010
//	//�������ԭ��ֱ����ӵĻ��������Ϊ-2������Ȼ�ǲ���ȷ��
//	//���Կ�ѧ�����Ƴ��˲���ĸ���
//	//�ò��������ʱ�򣬿��������ȷ�Ľ��
//}


////ͨ�������ж�һ̨�����Ĵ�С��
//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	char* pa = (char*)& a;
//	if (*pa == 1)
//		printf("С��\n");
//	else
//		printf("���\n");
//	return 0;
//}


//#include<stdio.h>
//int CheckSystem(int a)
//{
//	char* pa = (char*)& a;
//	if (*pa == 1)
//		return 1;
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int ret = CheckSystem(a);
//	if (ret == 1)
//		printf("С��\n");
//	else
//		printf("���\n");
//	return 0;
//}


//#include<stdio.h>
//int CheckSystem(int a)
//{
//	union Un
//	{
//		int i;
//		char c;
//	}u;
//	u.i = 1;
//	return u.c;
//}
//int main()
//{
//	int a = 1;
//	int ret = CheckSystem(a);
//	if (ret == 1)
//		printf("С��\n");
//	else
//		printf("���\n");
//	return 0;
//}


//#include<stdio.h>
//void menu()
//{
//	printf("**********************\n");
//	printf("*** ��ӭ���������� ***\n");
//	printf("***  1.Add   2.Sub ***\n");
//	printf("***  3.Mul   4.Div ***\n");
//	printf("**********************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void test()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		(void)scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("������:>\n");
//			(void)scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("%d\n", ret);
//			break;
//		case 2:
//			printf("������:>\n");
//			(void)scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("������:>\n");
//			(void)scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			printf("������:>\n");
//			(void)scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("%d\n", ret);
//			break;
//		default:
//			printf("�����������������\n");
//		}
//	} while (input);
//}
//int main()
//{
//	test();
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
////��ӡ���Ϊ1��2��3��4
////break���õ�����ѭ����ֹͣ���ڵ�����ѭ�������õ���ֹѭ��


//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
////��ӡ�����1��2��3��4��4��4��4��4...��ѭ��


////�ҳ�����
//#include<stdio.h>
//int main()
//{
//	int count = 0;
//	int j = 0;
//	for(int i=100;i<=200;i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j == i)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n");
//	printf("%d", count);
//	return 0;
//}

//
////�ҳ�����
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int count = 0;
//	int j = 0;
//	for(int i=100;i<=200;i++)
//	{
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j > sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n");
//	printf("%d", count);
//	return 0;
//}


////n�Ľ׳�
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int sum = 1;
//	(void)scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		sum *= i;
//	}
//	printf("%d", sum);
//	return 0;
//}


////��������Ϸ��ʵ��
//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//void menu()
//{
//	printf("***** ��ӭ������������Ϸ��*****\n");
//	printf("*****        1. play      *****\n");
//	printf("*****        0. exit      *****\n");
//	printf("***** ��ӭ������������Ϸ��*****\n");
//}
//void game()
//{
//	int guess = 0;
//	int ret = rand() % 100 + 1;
//	while (1)
//	{
//		printf("���������²������:>\n");
//		(void)scanf("%d", &guess);
//		if (guess > ret)
//			printf("�´���\n");
//		else if (guess < ret)
//			printf("��С��\n");
//		else
//		{
//			printf("�¶���\n");
//			break;
//		}
//	}
//}
//void test()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��:>\n");
//		(void)scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����������ѡ��\n");
//			break;
//		}
//
//	} while (input);
//}
//int main()
//{
//	test();
//	return 0;
//}


////�ú����ж��Ƿ�������
//#include<stdio.h>
//int is_prime(int n)
//{
//	for (int i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int n = 0;
//	(void)scanf("%d", &n);
//	int ret = is_prime(n);
//	if (ret == 1)
//		printf("����\n");
//	else
//		printf("��������\n");
//	return 0;
//}

//#include<stdio.h>
//int is_prime(int i)
//{
//	int j = 0;
//	for (j = 2; j < i; j++)
//	{
//		if (i % j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int n = 0;
//	(void)scanf("%d", &n);
//	if (is_prime(n) == 1)
//	{
//		printf("������\n");
//	}
//	else
//	{
//		printf("��������\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	printf("%c\n", '\'');
//	printf("%s\n","\"");
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	(void)scanf("%d %d", &a, &b);
//	c = a + b;
//	printf("%d", c);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a1 = 5 / 2;
//	float a2 = 5 / 2;
//	float a3 = 5.0 / 2;
//	printf("%d\n", a1);
//	printf("%f\n", a2);
//	printf("%f\n", a3);
//	return 0;
//}
////����ڳ��������������洢����ʲô������û�й�ϵ��
////��Ҫ�ǿ����������Ĳ�����������ʲô���͵ģ������һ���Ǹ����͵ģ��õ��Ľ���ͻ��Ǹ����͵Ľ��


//#include<stdio.h>
//int main()
//{
//	int a = (1, 2, 3, 4, 5);
//	printf("%d\n", a);
//	return 0;
//}


//#include<stdio.h>
//#define ADD(X,Y) X+Y
//int main()
//{
//	printf("%d\n", 10 * ADD(2, 3));
//	return 0;
//}
////����滻��ֱ���滻�ģ��������㣬ֱ���滻��


//#include<stdio.h>
//int main()
//{
//	int j = 0;
//	int count = 0;
//	for (int i = 100; i <= 200; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j == i)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n");
//	printf("%d\n", count);
//	return 0;
//}


//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int j = 0;
//	int count = 0;
//	for (int i = 100; i <= 200; i++)
//	{
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j > sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n");
//	printf("%d\n", count);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 1;
//	(void)scanf("%d %d", &a, &b);
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("%d", b);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 1;
//	int sum = 1;
//	(void)scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum *= i;
//	}
//	printf("%d", sum);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int key = 6;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] > key)
//			right = mid - 1;
//		else if (arr[mid] < key)
//			left = mid + 1;
//		else
//		{
//			printf("�ҵ��ˣ��±�Ϊ:%d\n", mid);
//			break;
//		}
//	}
//	return -1;
//}


//char *strcpy(char *dest,const char *source)


////дһ�������ж�һ�������ǲ�������
//#include<stdio.h>
//int is_prime(int n)
//{
//	for (int i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int n = 0;
//	(void)scanf("%d", &n);
//	int ret = is_prime(n);
//	if (ret == 1)
//		printf("����\n");
//	else
//		printf("��������\n");
//	return 0;
//}


//#include<stdio.h>
//void Print(int n)
//{
//	if (n > 9)
//		Print(n / 10);
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int n = 0;
//	(void)scanf("%d", &n);
//	Print(n);
//	return 0;
//}


//#include<stdio.h>
//int my_strlen(const char* str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(str + 1);
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	char arr1[] = { 'a','b','c' };
//	char arr2[] = "abc";
//	printf("%s", arr1);
//	printf("\n");
//	printf("%s", arr2);
//	return 0;
//}
////������������ǲ�һ����
////arr1�ǲ����Կ�������ģ���Ϊ��û��\0��\0���ַ����Ľ�����־
////���û��\0�ǲ����Կ����ַ�����
////arr2�ǿ��Կ����ַ����ģ�c���滹��һ�����ص�\0


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	(void)scanf("%d %d", &a, &b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d", a, b);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int count = 0;
//	(void)scanf("%d", &n);
//	for (int i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = a << 1;
//	//<<���Ʋ�����
//	//��߶������ұ߲�0
//	printf("%d\n", b);
//	printf("%d\n", a);
//	return 0;
//}


//#include <stdio.h>
//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));//(2)   //��ָ����յģ���СΪ4
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//(4)  //������һ���״�ĵ㣬������ָ����յ�
//	//���Դ�С����4����char��û���κι�ϵ��
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//(1)
//	printf("%d\n", sizeof(ch));//(3)
//	test1(arr);
//	test2(ch);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ || ++b || d++;
//	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}
////��ӡ��ֵΪ1 3 3 4


//#include<stdio.h>
//int main()
//{
//	char a = 0xb6;//11000110
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//	system("pause");
//	return 0;
//}
////��ӡ���Ϊc
////������������������������
////ֻҪ���������㶼�ᷢ����������


////���ַ����ĳ���
//#include<stdio.h>
//int my_strlen(const char* str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(str + 1);
//}
//int main()
//{
//	char arr[] = "ABCDEF";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}


////���ַ����ĳ���
//#include<stdio.h>
//int my_strlen(const char* str)
//{
//	int count = 0;
//	while (*str)
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "ABCDEF";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "abcdef";
//	strncpy(arr1, arr2, 2);
//	printf("%s", arr1);
//	return 0;
//}

//
//#include<stdio.h>
//#include<assert.h>
//#include<string.h>
//char* my_strncpy(char* dest, const char* source, size_t count)
//{
//	assert(dest);
//	assert(source);
//	int sz = 0;
//	char* ret = dest;
//	if (strlen(source) < count)
//	{
//		sz = count - strlen(source);
//		count = strlen(source);
//
//	}
//	while (count--)
//	{
//		*dest++ = *source++;
//	}
//	while (sz--)
//	{
//		*dest = '\0';
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "abcdef";
//	my_strncpy(arr1, arr2, 2);
//	printf("%s", arr1);
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[20] = "hello";
//	char arr2[] = "world";
//	strncat(arr1, arr2, 2);
//	printf("%s", arr1);
//	return 0;
//}


//#include<stdio.h>
//#include<assert.h>
//char* my_strncat(char* dest, const char* source, size_t count)
//{
//	assert(dest);
//	assert(source);
//	char* ret = dest;
//	while (*dest )
//	{
//		dest++;
//	}
//	while (count--)
//	{
//		*dest++ = *source++;
//	}
//	*dest = '\0';
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "hello";
//	char arr2[] = "world";
//	my_strncat(arr1, arr2, 2);
//	printf("%s", arr1);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	char* pa = (char*)& a;
//	if (*pa == 1)
//		printf("С��\n");
//	else
//		printf("���\n");
//	return 0;
//}


//#include<stdio.h>
//int CheckSystem()
//{
//	int a = 1;
//	char* pa = (char*)& a;
//	if (*pa == 1)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int ret = CheckSystem();
//	if (ret == 1)
//		printf("С��\n");
//	else
//		printf("���\n");
//	return 0;
//}


#include<stdio.h>
int CheckSystem()
{
	union Un
	{
		int i;
		char c;
	}u;
	u.i = 1;
	return u.c;
}
int main()
{
	int ret = CheckSystem();
	if (ret == 1)
		printf("С��\n");
	else
		printf("���\n");
	return 0;
}