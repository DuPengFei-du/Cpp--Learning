#pragma once 

#include<bitset>
#include<iostream>

using namespace std;

//void TestBitSet()
//{
//	std::bitset<100> bt;  //说明我现在给出100个比特位
//
//	//调用方法把对应的比特位置为1
//
//	bt.set(12);  //就是把12这个比特位置为1
//	bt.set(23);
//	bt.set(45);
//	bt.set(78);
//	bt.set(90);
//
//	cout << bt.size() << endl;
//	cout << bt.count() << endl;   //返回为1的比特位的个数
//
//	//test方法用来检测对应的比特位上的值到底是0还是1
//	if (bt.test(12))
//	{
//		cout << "12 bit is 1" << endl;
//	}
//	else
//	{
//		cout << "12 bit is 0" << endl;
//	}
//
//	//reset的功能是将对应的比特位置0
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
		//给出位图的构造
		bitset()
		{
			_bst.resize((N >> 3) + 1);   //为什么要进行+1的操作呢，因为现在假如说
			//只有6个比特位的话%8是不够的，所以需要进行+1的操作，使其成为1个字节
		}

		//set将对应的比特位进行置1的操作
		bitset<N>& set(size_t pos)
		{
			size_t index = pos / 8;
			size_t which = pos % 8;

			_bst[index] |= (1 << which);

			++bit1Count;

			return *this;
		}

		//reset将对应的比特位进行置0的操作
		bitset<N>& reset(size_t pos)
		{
			size_t index = pos / 8;
			size_t which = pos % 8;

			_bst[index] &= ~(1 << which);

			--bit1Count;
			return *this;
		}

		//size返回的是总的比特位的个数
		size_t size()const
		{
			return N;
		}
		
		//返回为1的比特位个数
		size_t count()const
		{
			return bit1Count;
		}

		//test方法用来检测比特位到底是0还是1
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
	bite::bitset<100> bt;  //说明我现在给出100个比特位

	//调用方法把对应的比特位置为1

	bt.set(12);  //就是把12这个比特位置为1
	bt.set(23);
	bt.set(45);
	bt.set(78);
	bt.set(90);

	cout << bt.size() << endl;
	cout << bt.count() << endl;   //返回为1的比特位的个数

	//test方法用来检测对应的比特位上的值到底是0还是1
	if (bt.test(12))
	{
		cout << "12 bit is 1" << endl;
	}
	else
	{
		cout << "12 bit is 0" << endl;
	}

	//reset的功能是将对应的比特位置0

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