#define _CRT_SECURE_NO_WARNINGS 1



//ģ��ʵ��string��
#include<iostream>
using namespace std;
namespace bite
{
	//string����ʵ�൱���Ƕ�̬���͵��ַ�˳���
	class string
	{
	public:
		//���캯��
		string(const char* str = "")   //��C���͵��ַ�������string�����͵Ķ��������г�ʼ��
		//����һ��Ĭ�ϵĲ����൱���Ǽ����û�в����Ĺ��캯��
		{
			if (nullptr == str)
			{
				//�����λ�ã��ܶ��˿���������
				//�����Ȼ�Ѿ�������һ��ģ������ˣ���ô����ط�Ϊʲô����Ҫ
				//�����ǲ��ǿյ��жϣ��ؼ�����
				//��Щ���ڴ��ݲ�����ʱ�򣬺��п��ܸ��㴫��һ��nullptr����
				//���������λ����Ҫ�ж�һ���ַ����ǲ��ǿյ�
				//�������Ǹ����пղ�������������жϴ��������ַ����ǿյ��ַ����Ļ�
				//��ô�����Ǿ�ȥ����һ���յ��ַ����Ϳ�����
				_str = new char;

				//Ȼ��\0���õ��ַ��ռ���
				//ͨ�������÷�����һ���ֿռ�����
				*_str = '\0';

				//����˵��������仰����ʵ�����������һ�仰�����и���
				//_str = new char('\0');
			}
			else
			{
				//������һ���ռ��Ŀ�����ڴ��\0
				_str = new char[strlen(str) + 1];
				strcpy(_str, str);
			}
		}

		//����
		~string()
		{
			if (_str)
			{
				delete[] _str;
				_str = nullptr;
			}
		}


	private:
		char* _str;
	};
}
int main()
{
	string s1;
	string s2("1111");	
	string s3(nullptr);

	return 0;
}


//ģ��ʵ��string��
#include<iostream>
using namespace std;
namespace bite
{
	//string����ʵ�൱���Ƕ�̬���͵��ַ�˳���
	class string
	{
	public:
		//���캯��
		string(const char* str = "")   //��C���͵��ַ�������string�����͵Ķ��������г�ʼ��
		//����һ��Ĭ�ϵĲ����൱���Ǽ����û�в����Ĺ��캯��
		{
			if (nullptr == str)
			{
				//�����λ�ã��ܶ��˿���������
				//�����Ȼ�Ѿ�������һ��ģ������ˣ���ô����ط�Ϊʲô����Ҫ
				//�����ǲ��ǿյ��жϣ��ؼ�����
				//��Щ���ڴ��ݲ�����ʱ�򣬺��п��ܸ��㴫��һ��nullptr����
				//���������λ����Ҫ�ж�һ���ַ����ǲ��ǿյ�
				//�������Ǹ����пղ�������������жϴ��������ַ����ǿյ��ַ����Ļ�
				//��ô�����Ǿ�ȥ����һ���յ��ַ����Ϳ�����
				_str = new char[1];

				//Ȼ��\0���õ��ַ��ռ���
				//ͨ�������÷�����һ���ֿռ�����
				*_str = '\0';

				//����˵��������仰����ʵ�����������һ�仰�����и���
				//_str = new char('\0');
			}
			else
			{
				//������һ���ռ��Ŀ�����ڴ��\0
				_str = new char[strlen(str) + 1];
				strcpy(_str, str);
			}
		}

		//����
		~string()
		{
			if (_str)
			{
				delete[] _str;
				_str = nullptr;
			}
		}


	private:
		char* _str;
	};
}
void TestString()
{
	bite::string s1;  //������ȥ����һ���յ��ַ���
	bite::string s2("hello");

}
int main()
{
	TestString();

	return 0;
}


//ģ��ʵ��string��
#include<iostream>
using namespace std;
namespace bite
{
	//string����ʵ�൱���Ƕ�̬���͵��ַ�˳���
	class string
	{
	public:
		//���캯��
		string(const char* str = "")   //��C���͵��ַ�������string�����͵Ķ��������г�ʼ��
		//����һ��Ĭ�ϵĲ����൱���Ǽ����û�в����Ĺ��캯��
		{
			if (nullptr == str)
			{
				//�����λ�ã��ܶ��˿���������
				//�����Ȼ�Ѿ�������һ��ģ������ˣ���ô����ط�Ϊʲô����Ҫ
				//�����ǲ��ǿյ��жϣ��ؼ�����
				//��Щ���ڴ��ݲ�����ʱ�򣬺��п��ܸ��㴫��һ��nullptr����
				//���������λ����Ҫ�ж�һ���ַ����ǲ��ǿյ�
				//�������Ǹ����пղ�������������жϴ��������ַ����ǿյ��ַ����Ļ�
				//��ô�����Ǿ�ȥ����һ���յ��ַ����Ϳ�����
				_str = new char[1];

				//Ȼ��\0���õ��ַ��ռ���
				//ͨ�������÷�����һ���ֿռ�����
				*_str = '\0';

				//����˵��������仰����ʵ�����������һ�仰�����и���
				//_str = new char('\0');
			}
			else
			{
				//������һ���ռ��Ŀ�����ڴ��\0
				_str = new char[strlen(str) + 1];
				strcpy(_str, str);
			}
		}

		//����
		~string()
		{
			if (_str)
			{
				delete[] _str;
				_str = nullptr;
			}
		}

		//�������������������ĺ�����ʽ�����ǻ���ɴ��������
		//����൱���Ǳ������������Ŀ������캯������ʽ
		string(const string& s)
			:_str(s._str)
		{
			
		}

		//�������������ĸ�ֵ����������ص���ʽ
		string operator=(const string& s)
		{
			_str = s._str;
			return *this;
		}

	private:
		char* _str;
	};
}
void TestString()
{
	bite::string s1;  //������ȥ����һ���յ��ַ���
	bite::string s2("hello");
	//bite::string s3(s2);

	s1 = s2;
}
int main()
{
	TestString();

	return 0;
}


#include<iostream>
#include<string>
using namespace std;
namespace bite
{
	//string����ʵ�൱���Ƕ�̬���͵��ַ�˳���
	class string
	{
	public:
		//���캯��
		string(const char* str = "")   //��C���͵��ַ�������string�����͵Ķ��������г�ʼ��
		//����һ��Ĭ�ϵĲ����൱���Ǽ����û�в����Ĺ��캯��
		{
			if (nullptr == str)
			{
				//�����λ�ã��ܶ��˿���������
				//�����Ȼ�Ѿ�������һ��ģ������ˣ���ô����ط�Ϊʲô����Ҫ
				//�����ǲ��ǿյ��жϣ��ؼ�����
				//��Щ���ڴ��ݲ�����ʱ�򣬺��п��ܸ��㴫��һ��nullptr����
				//���������λ����Ҫ�ж�һ���ַ����ǲ��ǿյ�
				//�������Ǹ����пղ�������������жϴ��������ַ����ǿյ��ַ����Ļ�
				//��ô�����Ǿ�ȥ����һ���յ��ַ����Ϳ�����
				_str = new char[1];

				//Ȼ��\0���õ��ַ��ռ���
				//ͨ�������÷�����һ���ֿռ�����
				*_str = '\0';

				//����˵��������仰����ʵ�����������һ�仰�����и���
				//_str = new char('\0');
			}
			else
			{
				//������һ���ռ��Ŀ�����ڴ��\0
				_str = new char[strlen(str) + 1];
				strcpy(_str, str);
			}
		}

		//����
		~string()
		{
			if (_str)
			{
				delete[] _str;
				_str = nullptr;
			}
		}

		string(const string& s)
			:_str(new char[strlen(s._str) + 1])
		{
			strcpy(_str, s._str);
		}

		string& operator=(const string& s)
		{
			//��һ���ǲ����Լ����Լ���ֵ
			//������Լ����Լ���ֵ�Ļ�����ʵ��ûʲô��Ҫ��
			if (this != &s)
			{
				char* temp = new char[strlen(s._str) + 1];
				strcpy(temp, s._str);
				delete[] _str;
				_str = temp;
			}
			return *this;
		}
	private:
		char* _str;
	};
}
void TestString()
{
	bite::string s1;  //������ȥ����һ���յ��ַ���
	bite::string s2("hello");
	bite::string s3(s2);

	s1 = s2;
}
int main()
{
	TestString();

	return 0;
}



#include<iostream>
#include<string>
using namespace std;
namespace bite
{
	//string����ʵ�൱���Ƕ�̬���͵��ַ�˳���
	class string
	{
	public:
		//���캯��
		string(const char* str = "")   //��C���͵��ַ�������string�����͵Ķ��������г�ʼ��
		//����һ��Ĭ�ϵĲ����൱���Ǽ����û�в����Ĺ��캯��
		{
			if (nullptr == str)
			{
				//�����λ�ã��ܶ��˿���������
				//�����Ȼ�Ѿ�������һ��ģ������ˣ���ô����ط�Ϊʲô����Ҫ
				//�����ǲ��ǿյ��жϣ��ؼ�����
				//��Щ���ڴ��ݲ�����ʱ�򣬺��п��ܸ��㴫��һ��nullptr����
				//���������λ����Ҫ�ж�һ���ַ����ǲ��ǿյ�
				//�������Ǹ����пղ�������������жϴ��������ַ����ǿյ��ַ����Ļ�
				//��ô�����Ǿ�ȥ����һ���յ��ַ����Ϳ�����
				_str = new char[1];

				//Ȼ��\0���õ��ַ��ռ���
				//ͨ�������÷�����һ���ֿռ�����
				*_str = '\0';

				//����˵��������仰����ʵ�����������һ�仰�����и���
				//_str = new char('\0');
			}
			else
			{
				//������һ���ռ��Ŀ�����ڴ��\0
				_str = new char[strlen(str) + 1];
				strcpy(_str, str);
			}
		}

		//����
		~string()
		{
			if (_str)
			{
				delete[] _str;
				_str = nullptr;
			}
		}

		string(const string& s)
			:_str(nullptr)
		{
			string strTemp(s._str);
			swap(_str, strTemp._str);
		}

		string& operator=(string s)
		{
			//��һ���ǲ����Լ����Լ���ֵ
			//������Լ����Լ���ֵ�Ļ�����ʵ��ûʲô��Ҫ��
			swap(_str, s._str);
			return *this;
		}
	private:
		char* _str;
	};
}
void TestString()
{
	bite::string s1;  //������ȥ����һ���յ��ַ���
	bite::string s2("hello");
	bite::string s3(s2);

	s1 = s2;
}
int main()
{
	TestString();

	return 0;
}


#include<iostream>
#include<string>
using namespace std;
namespace bite
{
	//string����ʵ�൱���Ƕ�̬���͵��ַ�˳���
	class string
	{
	public:
		//���캯��
		string(const char* str = "")   
		{
			if (nullptr == str)
			{
				_str = new char[1];
				*_str = '\0';

			}
			else
			{
				//������һ���ռ��Ŀ�����ڴ��\0
				_str = new char[strlen(str) + 1];
				strcpy(_str, str);
			}
		}

		//����
		~string()
		{
			if (_str)
			{
				delete[] _str;
				_str = nullptr;
			}
		}

		string(const string& s)
			:_str(nullptr)
		{
			string strTemp(s._str);
			swap(_str, strTemp._str);
		}

		//string& operator=(string s)
		//{
		//	//��һ���ǲ����Լ����Լ���ֵ
		//	//������Լ����Լ���ֵ�Ļ�����ʵ��ûʲô��Ҫ��
		//	swap(_str, s._str);
		//	return *this;
		//}

		string& operator=(const string& s)
		{
			//һ���������ж�һ���ǲ����Լ����Լ����з�ָ�Ĳ���
			if (this != &s)
			{
				string strTemp(s);
				swap(_str, strTemp._str);
			}
			return *this;
		}

	private:
		char* _str;
	};
}
void TestString()
{
	bite::string s1;  //������ȥ����һ���յ��ַ���
	bite::string s2("hello");
	bite::string s3(s2);

	s1 = s2;
}
int main()
{
	TestString();

	return 0;
}


#include<iostream>
#include<string>
using namespace std;
namespace bite
{
	//string����ʵ�൱���Ƕ�̬���͵��ַ�˳���
	class string
	{
	public:
		//���캯��
		string(const char* str = "")   
		{
			if (str == nullptr)
			{
				str = "";
			}
			_size = strlen(str);
			//��׼����string��������û����\0�Ŀռ��
			_capacity = _size < 15 ? 15 : strlen(str);
			//+1����ΪҪ���\0�Ŀռ��
			_str = new char[_capacity + 1];
			strcpy(_str, str);
		}

		//����
		~string()
		{
			if (_str)
			{
				delete[] _str;
				_str = nullptr;
				_capacity = 0;
				_size = 0;
			}
		}

		string(const string& s)
			:_str(nullptr)
		{
			string strTemp(s._str);
			this->swap(strTemp);
		}

		//string& operator=(string s)
		//{
		//	//��һ���ǲ����Լ����Լ���ֵ
		//	//������Լ����Լ���ֵ�Ļ�����ʵ��ûʲô��Ҫ��
		//	swap(_str, s._str);
		//	return *this;
		//}

		string& operator=(const string& s)
		{
			//һ���������ж�һ���ǲ����Լ����Լ����з�ָ�Ĳ���
			if (this != &s)
			{
				string strTemp(s._str);
				this->swap(strTemp);
			}
			return *this;
		}


		///////////////////////////////////////////
		size_t size()const
		{
			return _size;
		}

		size_t capacity()const
		{
			return _capacity;
		}

		bool empty()const
		{
			return 0 == _size;
		}

		void reserve(size_t newCapacity)
		{
			size_t oldCapacity = capacity();
			if (newCapacity > oldCapacity)
			{
				//ֻ�д��ڵ�ʱ��Ż�ȥ�������ݵĲ����������С��
				//�ͺ��Դ˴ε����ݲ���
				char* temp = new char[newCapacity + 1];
				strcpy(temp, _str);
				delete[] _str;
				_str = temp;
				_capacity = newCapacity;
			}
		}

		void resize(size_t newsize, char ch)
		{
			/*
			size_t oldsize = size();
			if (newsize <= oldsize)
			{
				_size = newsize;
				_str[_size] = '\0';
			}
			else if (newsize < capacity())
			{
				//ֱ�����
				memset(_str+_size, ch, newsize - oldsize);
				_size = newsize;
				_str[_size] = '\0';
			}
			else
			{
				//��ȥ���ٿռ�
				reserve(newsize);
				memset(_str + _size, ch, newsize - oldsize);
				_size = newsize;
				_str[_size] = '\0';
			}
			*/
			//������������ִ�����Ҫ�����ȥ���ۣ�����д������ʵ��һЩ����
			//��ô����ʵ�������и�����һ��д���ģ�������ʾ

			size_t oldsize = size();
			if (newsize > oldsize)
			{
				if (newsize > capacity())
				{
					reserve(newsize);
				}
				memset(_str + _size, ch, newsize - oldsize);
			}
			_size = newsize;
			_str[_size] = '\0';
		}

		void resize(size_t newsize)
		{
			//��������ķ���
			//������Ŀռ���0�������
			resize(newsize, 0);
		}

		void swap(string& s)
		{
			std::swap(_str, s._str);
			std::swap(_size, s._size);
			std::swap(_capacity, s._capacity);

		}

	private:
		char* _str;
		size_t _capacity;
		size_t _size;
	};
}
int main()
{
	return 0;
}