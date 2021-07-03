#define _CRT_SECURE_NO_WARNINGS 1


//#include<iostream>
//#include<string>
//#include<assert.h>
////模拟实现一个string类
//using namespace std;
//
//namespace bite
//{
//	class string
//	{
//		typedef char* iterator;
//	public:
//
//		//构造函数
//		string(const char* str="")
//		{
//			if (str == nullptr)
//				str = "";
//			_size = strlen(str);
//			_capacity = _size <= 15 ? 15 : strlen(str);
//			//开辟空间
//			_str = new char[strlen(str) + 1];
//			strcpy(_str, str);
//		}
//
//		//析构函数
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
//		//拷贝构造函数
//		string(const string& s)
//			:_str(nullptr)
//		{
//			string strTemp(s._str);
//			this->swap(strTemp);
//		}
//
//		//赋值运算符重载
//		string& operator=(const string& s)
//		{
//			//首先需要进来判断一下是不是自己给自己赋值
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
//		//去写扩容的操作
//		//reverse方法
//		//给进来一个新的容量
//		void reverse(size_t newcapacity)
//		{
//			size_t oldcapacity = capacity();
//			if (newcapacity > oldcapacity)
//			{
//				//就需要去进行空间的申请的操作了
//				//申请空间
//				char* temp = new char[newcapacity + 1];
//				strncpy(temp, _str, _size);
//				delete[] _str;
//				_str = temp;
//				_capacity = newcapacity;
//			}
//		}
//
//		//resize---改变有效元素的个数
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
//			//调用上面的方法
//			//多出来的空间用0进行填充
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
//		//下标引用操作符
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
//	v.reserve(20);  //第二个参数如果没有传递，那么使用0来进行填充
//	cout << v.size() << endl;
//	cout << v.capacity() << endl;
//
//	for (auto e : v)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	v.reserve(8);  //第二个参数如果没有传递，那么使用0来进行填充
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
//	//注意：改行代码会崩溃
//	//原因：reserve(10)只是将容量的大小扩大到10，并不会增加有效元素的个数
//	//现在v1中有效元素的个数仍然是0，那么你要去访问0号位置的代码是肯定会崩溃的
//	cout << v1[0] << endl;
//
//	vector<int> v2;
//	v2.resize(10);
//	//下面的这个代码是没有什么问题的
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


//模拟实现string类

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
//		//拷贝构造
//		string(const string& s)
//			:_str(nullptr)
//		{
//			string strTemp(s._str);
//			swap(_str, strTemp._str)
//		}
//
//		//赋值运算符的重载
//		string& operator=(const string& s)
//		{
//			if (this != &s)
//			{
//				//申请空间，拷贝元素，释放旧的空间
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
////	bite::string s1;  //我们先去构造一个空的字符串
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
//		//拷贝构造
//		string(const string& s)
//			:_str(nullptr)
//		{
//			string strTemp(s._str);
//			this->swap(strTemp);
//		}
//
//		//赋值运算符重载
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
//	v.reserve(20);  //第二个参数如果没有传递，那么使用0来进行填充
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
//	//需求，在3所在的位置插入0
//	//vector中本身是没有提供find的方法的,那么我们只能使用标准库中的find方法了
//	auto pos = find(v.begin(), v.end(), 3);
//	if (pos != v.end())
//	{
//		v.insert(pos, 0);
//	}
//	v.insert(v.begin(), 5, 0);
//
//	//当然，也可以插入一段连续的空间
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
//	//相当于是从v.clear()
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
//	//矩阵:每行的元素个数都是相同的
//	//比如：5行6列的二维数组
//	vector<vector<int>> v1;
//
//	//二维数组总共有5行，现在每行还没有空间
//	v1.resize(5);
//
//	cout << v1[0].size() << endl;
//	cout << v1[0].capacity() << endl;
//
//	//经典的误用，如果像下面这样写代码的话，其实是会造成代码的崩溃的
//	//原因在于，v1[0]该vector还没有有效元素，所以无法访问0号位置的元素
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


////vector的模拟实现
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
//		//给出构造函数
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
//		//给出一段连续空间的构造
//		template<class Iterator>
//		vector(Iterator first, Iterator last)
//		{
//			//首先计算出来这段空间中元素的个数
//			size_t size = 0;
//			auto it = first;
//			while (it++ != last)
//			{
//				size++;
//			}
//			//开空间
//			start = new T[size];
//			finish = start;
//			while (first != last)
//			{
//				*finish++ = *first++;
//			}
//			end_of_storage = finish;
//		}
//
//		//拷贝构造
//		vector(const vector<T>& v)
//		{
//			//先去开辟空间
//			//这里的拷贝构造的方式其实就是按照深拷贝的方式所给出来的
//			//因为我给新的对象重新去new空间了，所以相当于是深拷贝的方式
//			start = new T[v.size()];
//			finish = start;
//			auto it = v.begin();
//			while (it != v.end())
//			{
//				//空间开辟好了之后，我只需要把v里面的元素一个一个放进去其实就好了
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
////但是如果像下面这样，出现了一场情况，以及代码可能以前终止掉的情乱
////你都需要对开辟的内存空间以及打开的文件指针进行释放以及关闭的操作
////那么其实重复的操作就干了太多次了
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
//	SmartPtr(T* ptr=nullptr)  //如果用户没有提供的话，我将其给成一个空其实就ok
//		:_ptr(ptr)
//	{
//
//	}
//
//	~SmartPtr()
//	{
//		//我们首先需要去看一下这个指针到底有没有管理资源
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
//	SmartPtr<int> sp(new int);  //现在就相当于是创建了一个SmartPtr类的对象sp
//	//那么其实对象的空间的释放就不需要我们来再单独的进行处理了
//	//因为再调用SmartPtr的析构函数的时候，是会替我们把对象的资源释放掉的
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
//	SmartPtr(T* ptr = nullptr)  //如果用户没有提供的话，我将其给成一个空其实就ok
//		:_ptr(ptr)
//	{
//
//	}
//
//	~SmartPtr()
//	{
//		//我们首先需要去看一下这个指针到底有没有管理资源
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
//		//只需要把地址返回会去就可以了
//		return _ptr;
//	}
//
//protected:
//	T* _ptr;
//};
//
//void TestFunc()
//{
//	SmartPtr<int> sp(new int);  //现在就相当于是创建了一个SmartPtr类的对象sp
//	//那么其实对象的空间的释放就不需要我们来再单独的进行处理了
//	//因为再调用SmartPtr的析构函数的时候，是会替我们把对象的资源释放掉的
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
//	SmartPtr(T* ptr = nullptr)  //如果用户没有提供的话，我将其给成一个空其实就ok
//		:_ptr(ptr)
//	{
//
//	}
//
//	~SmartPtr()
//	{
//		//我们首先需要去看一下这个指针到底有没有管理资源
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
//		//只需要把地址返回会去就可以了
//		return _ptr;
//	}
//
//protected:
//	T* _ptr;
//};
//
//void TestFunc()
//{
//	SmartPtr<int> sp(new int);  //现在就相当于是创建了一个SmartPtr类的对象sp
//	//那么其实对象的空间的释放就不需要我们来再单独的进行处理了
//	//因为再调用SmartPtr的析构函数的时候，是会替我们把对象的资源释放掉的
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
//	//首先，智能指针需要通过RAII的方式，然后再加上具有指针行为的操作
//	//同时需要解决浅拷贝的问题
//	template<class T>
//	class auto_ptr
//	{
//	public:
//
//		//首先是RAII的思想
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
//		//然后去进行重载
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
//	//然后我现在希望用sp1去拷贝构造sp2
//	bite::auto_ptr<int> sp2(sp1);
//	//但是，现在我们又没有显示给出拷贝构造函数，所以用的就是浅拷贝的方式
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
//	//首先，智能指针需要通过RAII的方式，然后再加上具有指针行为的操作
//	//同时需要解决浅拷贝的问题
//	template<class T>
//	class auto_ptr
//	{
//	public:
//
//		//首先是RAII的思想
//		auto_ptr(T* ptr = nullptr)
//			:_ptr(ptr)
//		{
//
//		}
//
//		auto_ptr(auto_ptr<T>& ap)
//		{
//			_ptr = ap._ptr;
//			//因为ap里面的东西不再使用了，所以直接把ap的资源给成nullptr其实就是可以的了
//			ap._ptr = nullptr;
//		}
//
//		auto_ptr<T>& operator=(auto_ptr<T>& sp)
//		{
//			if (this != &sp)
//			{
//				//如果即将要被赋值的东西他是有空间的， 那么你首先
//				//需要把他的空间释放掉，不然就会造成代码崩溃的问题产生
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
//		//然后去进行重载
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
//	//然后我现在希望用sp1去拷贝构造sp2
//	bite::auto_ptr<int> sp2(sp1);
//	//但是，现在我们又没有显示给出拷贝构造函数，所以用的就是浅拷贝的方式
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
//	//首先，智能指针需要通过RAII的方式，然后再加上具有指针行为的操作
//	//同时需要解决浅拷贝的问题
//	template<class T>
//	class auto_ptr
//	{
//	public:
//
//		//首先是RAII的思想
//		auto_ptr(T* ptr = nullptr)
//			:_ptr(ptr)
//			,_owner(false)   //之所以给成false是因为我现在并不
//			//知道上面的指针到底是有效的还是无效的
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
//				//如果即将要被赋值的东西他是有空间的， 那么你首先
//				//需要把他的空间释放掉，不然就会造成代码崩溃的问题产生
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
//		//然后去进行重载
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
//	//然后我现在希望用sp1去拷贝构造sp2
//	bite::auto_ptr<int> ap2(ap1);
//	//但是，现在我们又没有显示给出拷贝构造函数，所以用的就是浅拷贝的方式
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
//		//现在我让其防止拷贝
//		//C++98中所给出的解决方式其实就是
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
//		//赋值运算符的重载
//		shared_ptr& operator=(const shared_ptr<T>& sp)
//		{
//			if (this != &sp)
//			{
//				Release();
//
//				//与sp所共享
//				_ptr = sp._ptr;
//				_pCount = sp._pCount;
//
//				//sp的资源多了当前对象去共享
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
//		//赋值运算符的重载
//		shared_ptr& operator=(const shared_ptr<T>& sp)
//		{
//			if (this != &sp)
//			{
//				Release();
//
//				//与sp所共享
//				_ptr = sp._ptr;
//				_pCount = sp._pCount;
//
//				//sp的资源多了当前对象去共享
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
//				//DF是一个类型
//				//DF()是创建一个无名的对象
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
//	//下面的这种写法其实是不ok的，因为在C++11中的智能指针其实都是不能管理连续的空间的
//	//原因在于因为在标准库里面其实已经有了一个可以管理连续空间的东西
//	//其实就是vector
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
//		//赋值运算符的重载
//		shared_ptr& operator=(const shared_ptr<T>& sp)
//		{
//			if (this != &sp)
//			{
//				Release();
//
//				//与sp所共享
//				_ptr = sp._ptr;
//				_pCount = sp._pCount;
//
//				//sp的资源多了当前对象去共享
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
//			//上锁
//			_pMutex->lock();
//			if (_ptr && 0 == --(*_pCount))
//			{
//				//delete _ptr;
//
//				//DF是一个类型
//				//DF()是创建一个无名的对象
//				DF()(_ptr);
//				delete _pCount;
//			}
//			//解锁
//			//如果离开的时候不进行解锁的话，那么就会造成死锁了
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
//	//下面的这种写法其实是不ok的，因为在C++11中的智能指针其实都是不能管理连续的空间的
//	//原因在于因为在标准库里面其实已经有了一个可以管理连续空间的东西
//	//其实就是vector
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
////基类
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
////保护继承基类
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
//	//子类的对象
//	Derived d;
//
//	//保护继承的方式公有的成员变量也无法在类外进行访问的操作了
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
////这段代码什么都不会打印 第二个else会在编译器中主动和第二个if靠近
////所以代码什么都不会打印，没有符号的条件。


//#include<stdio.h>
//int main()
//{
//	int age = 10;
//	if (age == 5)
//		printf("age==5\n");
//	return 0;
//}
////屏幕上什么都不会打印，因为age！=5；


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
//		{//switch允许嵌套使用
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
////打印结果为1，2，3，4
////break永久的跳出循环，停止后期的所有循环，永久的终止循环


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
////打印结果是1，2，3，4，4，4，4，4...死循环


//#include<stdio.h>
//int main()
//{
//	int ch = getchar();
//	putchar(ch);
//	return 0;
//}
////输入什么字符就会输出相应的字符


////EOF为end of file
//#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//		putchar(ch);
//	return 0;
//}
////用ctrl+z来停下来。


////对素数进行一个结果的输出
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


////对素数进行一个结果的输出
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
//			printf("找到了，下标为:%d\n", mid);
//			break;
//		}
//	}
//	return -1;
//}


////模拟进行程序的登录
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char passwd[20] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码\n");
//		(void)scanf("%s", passwd);
//		if (0 == strcmp(passwd, "123456"))
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码不正确，请重新进行登录的操作\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("无法再进行登录\n");
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
//		printf("素数\n");
//	else
//		printf("不是素数\n");
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
//	//数组也是一种自定义类型
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));                //40
//	printf("%d\n", sizeof(int[10]));          //40
//	int a = 10;
//	sizeof(int);  //可以的
//	sizeof(a);    //可以的
//	//那么问题来了，数组的类型是什么呢？
//	//数组的类型，就是数组去掉数组名剩下的部分
//	//比如上述对数组的声明 int arr[10],那么数组的类型就是int [10]
//}



//#include<stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	//0x11223344放在a里面是刚刚好的
//	//因为11是一个字节，22是一个字节，33是一个字节，44是一个字节
//	//通过监视看：转换到16进制，观察到a的值为0x11223344
//	//通过内存看：输入&a，可以观察到，a显示为44332211
//	return 0;
//}

//
//#include<stdio.h>
//int main()
//{
//	//加入说我想算一个1-1的结果是多少
//	//但是遗憾的是，计算机不能算减法
//	//那我只好把减法转换为加法的形式
//	//1 - 1;
//	1 + (-1);
//	//如果按原码来计算的话
//	// 1的原码
//	//00000000000000000000000000000001
//	//-1的原码
//	//10000000000000000000000000000001
//	//两个码相加的结果为
//	//10000000000000000000000000000010
//	//如果按照原码直接相加的话，结果就为-2，这显然是不正确的
//	//所以科学家们推出了补码的概念
//	//用补码来算的时候，可以算出正确的结果
//}


////通过代码判断一台机器的大小端
//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	char* pa = (char*)& a;
//	if (*pa == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
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
//		printf("小端\n");
//	else
//		printf("大端\n");
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
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}


//#include<stdio.h>
//void menu()
//{
//	printf("**********************\n");
//	printf("*** 欢迎来到计算器 ***\n");
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
//		printf("请选择:>");
//		(void)scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("请输入:>\n");
//			(void)scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("%d\n", ret);
//			break;
//		case 2:
//			printf("请输入:>\n");
//			(void)scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("请输入:>\n");
//			(void)scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			printf("请输入:>\n");
//			(void)scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("%d\n", ret);
//			break;
//		default:
//			printf("输入错误，请重新输入\n");
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
////打印结果为1，2，3，4
////break永久的跳出循环，停止后期的所有循环，永久的终止循环


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
////打印结果是1，2，3，4，4，4，4，4...死循环


////找出素数
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
////找出素数
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


////n的阶乘
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


////猜数字游戏的实现
//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//void menu()
//{
//	printf("***** 欢迎来到猜数字游戏！*****\n");
//	printf("*****        1. play      *****\n");
//	printf("*****        0. exit      *****\n");
//	printf("***** 欢迎来到猜数字游戏！*****\n");
//}
//void game()
//{
//	int guess = 0;
//	int ret = rand() % 100 + 1;
//	while (1)
//	{
//		printf("请输入所猜测的数字:>\n");
//		(void)scanf("%d", &guess);
//		if (guess > ret)
//			printf("猜大了\n");
//		else if (guess < ret)
//			printf("猜小了\n");
//		else
//		{
//			printf("猜对了\n");
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
//		printf("请选择:>\n");
//		(void)scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，请重新选择\n");
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


////用函数判断是否是素数
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
//		printf("素数\n");
//	else
//		printf("不是素数\n");
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
//		printf("是素数\n");
//	}
//	else
//	{
//		printf("不是素数\n");
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
////针对于除法操作，与他存储的是什么类型是没有关系的
////主要是看两个除法的操作数到底是什么类型的，如果有一个是浮点型的，得到的结果就会是浮点型的结果


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
////宏的替换是直接替换的，不经运算，直接替换。


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
//			printf("找到了，下标为:%d\n", mid);
//			break;
//		}
//	}
//	return -1;
//}


//char *strcpy(char *dest,const char *source)


////写一个函数判断一个数字是不是素数
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
//		printf("素数\n");
//	else
//		printf("不是素数\n");
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
////这两个数组的是不一样的
////arr1是不可以看成数组的，因为它没有\0，\0是字符串的结束标志
////如果没有\0是不可以看成字符串的
////arr2是可以看成字符串的，c后面还有一个隐藏的\0


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
//	//<<左移操作符
//	//左边丢弃，右边补0
//	printf("%d\n", b);
//	printf("%d\n", a);
//	return 0;
//}


//#include <stdio.h>
//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));//(2)   //用指针接收的，大小为4
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//(4)  //这里是一个易错的点，他是用指针接收的
//	//所以大小还是4，与char是没有任何关系的
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
////打印的值为1 3 3 4


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
////打印结果为c
////另外两个都发生整形提升了
////只要参与了运算都会发生整型提升


////求字符串的长度
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


////求字符串的长度
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
//		printf("小端\n");
//	else
//		printf("大端\n");
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
//		printf("小端\n");
//	else
//		printf("大端\n");
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
		printf("小端\n");
	else
		printf("大端\n");
	return 0;
}