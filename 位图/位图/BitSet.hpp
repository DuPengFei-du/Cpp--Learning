#pragma once 

#include<bitset>
#include<iostream>

using namespace std;

//void TestBitSet()
//{
//	std::bitset<100> bt;  //˵�������ڸ���100������λ
//
//	//���÷����Ѷ�Ӧ�ı���λ��Ϊ1
//
//	bt.set(12);  //���ǰ�12�������λ��Ϊ1
//	bt.set(23);
//	bt.set(45);
//	bt.set(78);
//	bt.set(90);
//
//	cout << bt.size() << endl;
//	cout << bt.count() << endl;   //����Ϊ1�ı���λ�ĸ���
//
//	//test������������Ӧ�ı���λ�ϵ�ֵ������0����1
//	if (bt.test(12))
//	{
//		cout << "12 bit is 1" << endl;
//	}
//	else
//	{
//		cout << "12 bit is 0" << endl;
//	}
//
//	//reset�Ĺ����ǽ���Ӧ�ı���λ��0
//
//	bt.reset(12);
//
//	if (bt.test(12))
//	{
//		cout << "12 bit is 1" << endl;
//	}
//	else
//	{
//		cout << "12 bit is 0" << endl;
//	}
//}


#include<vector>
namespace bite
{
	template<size_t N>
	class bitset
	{
	public:
		//����λͼ�Ĺ���
		bitset()
		{
			_bst.resize((N >> 3) + 1);   //ΪʲôҪ����+1�Ĳ����أ���Ϊ���ڼ���˵
			//ֻ��6������λ�Ļ�%8�ǲ����ģ�������Ҫ����+1�Ĳ�����ʹ���Ϊ1���ֽ�
		}

		//set����Ӧ�ı���λ������1�Ĳ���
		bitset<N>& set(size_t pos)
		{
			size_t index = pos / 8;
			size_t which = pos % 8;

			_bst[index] |= (1 << which);

			++bit1Count;

			return *this;
		}

		//reset����Ӧ�ı���λ������0�Ĳ���
		bitset<N>& reset(size_t pos)
		{
			size_t index = pos / 8;
			size_t which = pos % 8;

			_bst[index] &= ~(1 << which);

			--bit1Count;
			return *this;
		}

		//size���ص����ܵı���λ�ĸ���
		size_t size()const
		{
			return N;
		}
		
		//����Ϊ1�ı���λ����
		size_t count()const
		{
			return bit1Count;
		}

		//test��������������λ������0����1
		bool test(size_t pos)const
		{
			if (pos > N)
				return false;
			size_t index = pos / 8;
			size_t which = pos % 8;

			return _bst[index] & (1 << which);
		}
	private:
		vector<unsigned char> _bst;
		size_t bit1Count;
	};
}

void TestBitSet()
{
	bite::bitset<100> bt;  //˵�������ڸ���100������λ

	//���÷����Ѷ�Ӧ�ı���λ��Ϊ1

	bt.set(12);  //���ǰ�12�������λ��Ϊ1
	bt.set(23);
	bt.set(45);
	bt.set(78);
	bt.set(90);

	cout << bt.size() << endl;
	cout << bt.count() << endl;   //����Ϊ1�ı���λ�ĸ���

	//test������������Ӧ�ı���λ�ϵ�ֵ������0����1
	if (bt.test(12))
	{
		cout << "12 bit is 1" << endl;
	}
	else
	{
		cout << "12 bit is 0" << endl;
	}

	//reset�Ĺ����ǽ���Ӧ�ı���λ��0

	bt.reset(12);

	if (bt.test(12))
	{
		cout << "12 bit is 1" << endl;
	}
	else
	{
		cout << "12 bit is 0" << endl;
	}
}