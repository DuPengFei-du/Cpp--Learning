#define _CRT_SECURE_NO_WARNINGS 1


//��ǰ��ͬѧ�����Թ��ʵ��������ʵ��һ��ͨ�õļٷ�����
//�е��˸���������Ĵ�
//���������ú���������ʵ��һ��ͨ�õļӷ�����

int Add(int x, int y)
{
	return x + y;
}

double Add(double x, double y)
{
	return x + y;
}

short Add(short x, short y)
{
	return x + y;
}

float Add(float x, float y)
{
	return x + y;
}

int main()
{
	Add(1,2);

	Add(1.0, 2.0);

	return 0;
}


//����ģ��
//�û���һ����«����������ư
#include<stdio.h>
int Add(int x, int y)
{
	return x + y;
}
T Add(T x, T y)
{
	return x + y;
}
//���ʱ��T���״������ʲô���ͣ�������ʵ�ǲ�֪����
//���ң����ʱ�����ֱ��ȥ����Ļ���������һ���ᱨ���
//��Ϊ������T�����Ǹ�ʲô����������������ʵ�ǲ���֪����
//���Կ϶��ǻᱨ���
//������������Ҫ���߱�������������һ��ʲô����
int main()
{
	return 0;
}


//����ģ��
//�û���һ����«����������ư
#include<stdio.h>
template<typename T>
T Add(T x, T y)
{
	return x + y;
}
//������������Ҫ���߱�������������һ��ʲô����
int main()
{
	Add(1.0, 2.0);
	Add(1, 2);
	return 0;
}


//����ģ��
//�û���һ����«����������ư
#include<stdio.h>
template<typename T>
T Add(T x, T y)
{
	return x + y;
}

template<typename T,U>
T Add(T x, U y)
{
	return x + y;
}
int main()
{
	Add(1.0, 2.0);
	Add(1, 2);
	//���������������������������Ͷ���һ��һ���ģ���ô����
	//����˵�Ҹ������������������ǲ�һ�����������ô�������Դ�����
	Add(1, 2.0);
	//���ʱ������ȥ���б��룬�ͻᷢ�ֱ��������
	//�����ԭ������ڣ����������������������������ǲ�һ����
	//��ô���������ھ���Ҫһ���µ�ģ����
	//��������U�Ǹ�ģ�廹�ǻᱨ���
	//�����ԭ�����ڣ����ģ�������ж��������ÿ��������ǰ��
	//����Ҫ����typename��
	return 0;
}


//����ģ��
//�û���һ����«����������ư
#include<stdio.h>
template<typename T>
T Add(T x, T y)
{
	return x + y;
}

template<typename T, typename U>
T Add(T x, U y)
{
	return x + y;
}
int main()
{
	Add(1.0, 2.0);
	Add(1, 2);
	//���������������������������Ͷ���һ��һ���ģ���ô����
	//����˵�Ҹ������������������ǲ�һ�����������ô�������Դ�����
	Add(1, 2.0);
	//���ʱ������ȥ���б��룬�ͻᷢ�ֱ��������
	//�����ԭ������ڣ����������������������������ǲ�һ����
	//��ô���������ھ���Ҫһ���µ�ģ����
	//��������U�Ǹ�ģ�廹�ǻᱨ���
	//�����ԭ�����ڣ����ģ�������ж��������ÿ��������ǰ��
	//����Ҫ����typename��
	return 0;
}


#include<iostream>
using namespace std;
template <typename T>
T Add(T x, T y)
{
	return x + y;
}
int main()
{
	cout << Add(1, 2) << endl;
	cout << Add(1.0, 2.0) << endl;
	return 0;
}


#include<iostream>
using namespace std;
template <typename T>
T Add(T x, T y)
{
	return x + y;
}
/*
�ڱ������У�����ͨ�����Դ��룬����Add(1,2)��Add(1.0,2.0)��������
�����������ĺ���ģ��
������ʵ�أ�����˵���Ǵ���ģ��ǲ����Ե��ú���ģ���
��Ϊ����ģ�岻�������ĺ���
ֻ�Ǳ��������ɴ���Ĺ���
��������ִ���˺�������
��ʵ������������(�㿴���Ķ�������ʵ����һ������ʵ���ڵ�)
�������Ҫ������Ļ�����Ҫ֪��������鱳�󣬵�������ʲô����
*/
int main()
{
	cout << Add(1, 2) << endl;
	cout << Add(1.0, 2.0) << endl;
	return 0;
}


template<class T>
T Add(const T& left, const T& right)
{
	return left + right;
}
int main()
{
	int a1 = 10, a2 = 20;
	double d1 = 10.0, d2 = 20.0;
	Add(a1, a2);
	Add(d1, d2);
	/*
	����䲻��ͨ�����룬��Ϊ�ڱ����ڼ䣬��������������ʵ����ʱ����Ҫ������ʵ������
	ͨ��ʵ��a1��T����Ϊint��ͨ��ʵ��d1��T����Ϊdouble���ͣ���ģ������б���ֻ��һ��T��
	�������޷�ȷ���˴����׸ý�Tȷ��Ϊint ���� double���Ͷ�����
	ע�⣺��ģ���У�������һ�㲻���������ת����������Ϊһ��ת�������⣬����������Ҫ���ڹ�
	Add(a1, d1);
	*/
	// ��ʱ�����ִ���ʽ��1. �û��Լ���ǿ��ת�� 2. ʹ����ʽʵ����
	Add(a1, (int)d1);
	return 0;
}



#include<iostream>
using namespace std;
template<typename T>
//ע�⣬��ģ���У�һ������´��ݵĲ�����������
//�������ͨ���β����޸�ʵ�εĻ�����ô
//����const���þͿ�����
//ΪʲôҪʹ�����ô��ݵģ���ΪT�п������Զ������ͣ�����Զ�������
//��ʹ��ֵ���ݵĻ�����Ч��û����ô����
//����һ������¾�ʹ��const�����������в����Ĵ���
T Add(const T& left, const T& right)
{
	return left + right;
}
int Add(const int& left, const int& right)
{
	return left + right;
}
int main()
{
	Add(1, 2); //ͨ������ĵ��ԣ�������һ�������int����һ�δ���
	// ���ģ�庯��ƥ�䣬����������Ҫ�ػ�
	//������ȥ������ͨ���͵ĺ����������ͨ���͵ĺ���
	//������ƥ��Ļ����Ż�ȥ����ģ�����
	//�����Ҫʹ��ģ��Ļ�����ô����ֻ��Ҫ�Դ��������ʾʵ�����Ϳ�����
	Add<int>(1, 2);    // ���ñ������ػ���Add�汾
	return 0;
}


// ר�Ŵ���int�ļӷ�����
int Add(int left, int right)
{
	return left + right;
}
// ͨ�üӷ�����
template<class T1, class T2>
T1 Add(T1 left, T2 right)
{
	return left + right;
}
void Test()
{
	Add(1, 2); // ��Ǻ���ģ��������ȫƥ�䣬����Ҫ����ģ��ʵ����
	Add(1, 2.0); // ģ�庯���������ɸ���ƥ��İ汾������������ʵ�����ɸ���ƥ���Add����
}


template<class T1, class T2, ..., class Tn>
class ��ģ����
{
	// ���ڳ�Ա����
};


// ��̬˳���
// ע�⣺Vector���Ǿ�����࣬�Ǳ��������ݱ�ʵ�������������ɾ������ģ��
template<class T>
class Vector
{
public:
	Vector(size_t capacity = 10)
		: _pData(new T[capacity])
		, _size(0)
		, _capacity(capacity)
	{}
	// ʹ������������ʾ�������������������ⶨ�塣
	~Vector();
	void PushBack(const T& data)��
		void PopBack()��
		// ...
		size_t Size() { return _size; }
	T& operator[](size_t pos)
	{
		assert(pos < _size);
		return _pData[pos];
	}
private:
	T* _pData;
	size_t _size;
	size_t _capacity;
};
// ע�⣺��ģ���к�������������ж���ʱ����Ҫ��ģ������б�
template <class T>
Vector<T>::~Vector()
{
	if (_pData)
		delete[] _pData;
	_size = _capacity = 0;
}


template<typename T>
T Add(const T &x,const T &y)
{
	return x + y;
}

int Add(const int& x, const int& y)
{
	return x + y;
}

int main()
{
	Add(1, 2);  //���ȵ�����ͨ��Add��������Ϊ��ͨ��Add��������ȫ����������

	Add(1, 2.0);   
	//��������£�������ȥѰ��Add(int,double)��������ͨ����
	//�ҵ��˵Ļ�����ȥ���������ӵĺ��������û���ҵ��Ļ�
	//��ȥ���Ƿ��������������Ͳ�ͬ�ĺ���ģ�壬����еĻ���������һ�����͸�����ƥ��ĺ���
	//���ô���ҵ��Ļ�����ȥ���Ƿ����ͨ����ʽ����ת��֮����ƥ��ĺ���������У������
	//���û�еĻ����ͱ���

	return 0;
}


template<typename T>
T Add(const T& x, const T& y)
{
	return x + y;
}

template<typename T,typename U>
U Add(const T& x, const U& y)
{
	return x + y;
}


int Add(const int& x, const int& y)
{
	return x + y;
}

int main()
{
	Add(1, 2);  //���ȵ�����ͨ��Add��������Ϊ��ͨ��Add��������ȫ����������

	Add(1, 2.0);

	return 0;
}


//Ϊ����˳����п��Դ洢�������͵�Ԫ��
template<class T>
//�������仰����˵����T�Ǵ�����һ�����͵�
class SeqList
{
public:
	SeqList(int capacity = 10)
	{
		capacity = capacity < 10 ? 10 : capacity;
		array = new T[capacity];
		_capacity = capacity;
		_size = 0;
	}

	void PushBack(const T& data);   //���԰�������������ж���
	
	~SeqList()
	{
		if (array)
		{
			delete[] array;
			array = NULL;
			_capacity = 0;
			_size = 0;
		}
	}
private:
	//int* array;
	//�����ʱ�����ǰ�int����T֮�󣬾Ϳ��Դ洢�������͵�������
	T* array;
	size_t _size;
	size_t _capacity;
};


//�����������ж���Ļ�����ʵ����T��û�б�ʶ���
//�����ҪT��ʶ��Ļ�����Ҫ�ٸ���һ��ģ��
//���ȣ���Ҫ�ٺ������Ƶ�ǰ������������
template<class T>

void SeqList<T>::PushBack(const T& data)
{
	//Ҫ����Ԫ�ز����ʱ��������Ҫ���һ���Ƿ���Ҫ����
	_CheckCapacity();

	array[_size] = data;

	size++;
}
int main()
{
	return 0;
}