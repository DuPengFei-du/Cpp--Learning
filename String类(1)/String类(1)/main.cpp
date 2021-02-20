#include<iostream>
#include<string>
using namespace std;

void TestString1()
{
	string s1;   //构造了一个空的字符串

	string s2("hello world");    //可以采用C语言格式的字符串来进行构造
	//只需要给一个char * 的参数其实就是可以的

	string s3(10, '$');   //给字符串里面放下10个$的符号

	string s4(s2);    //利用拷贝构造函数

	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;
	cout << s4 << endl;

}

int main()
{
	TestString1();

	return 0;
}


#include<iostream>
#include<string>
using namespace std;
void TestString2()
{
	string s1("little bit,huge dream!!!");

	cout << s1.size() << endl;
	cout << s1.length() << endl;
	//两个求出来的结果是一摸一样的

	cout << s1.capacity() << endl;

	if (s1.empty())
		cout << "空字符串" << endl;
	else
		cout << "不是空字符串" << endl;

	s1.clear();

	if (s1.empty())
		cout << "空字符串" << endl;
	else
		cout << "不是空字符串" << endl;
}
int main()
{
	TestString2();

	return 0;
}


#include<iostream>
using namespace std;

void TestString3()
{
	string s("hello");
	cout << s << endl;
	cout << s.size() << endl;
	cout << s.capacity() << endl;

	s.reserve(20);
	cout << s << endl;
	cout << s.size() << endl;
	cout << s.capacity() << endl;

	s.reserve(10);
	cout << s << endl;
	cout << s.size() << endl;
	cout << s.capacity() << endl;
}

int main()
{
	TestString3();

	return 0;
}


#include<iostream>
using namespace std;

void TestString3()
{
	string s("hello");
	cout << s << endl;
	cout << s.size() << endl;
	cout << s.capacity() << endl;

	s.reserve(20);
	cout << s << endl;
	cout << s.size() << endl;
	cout << s.capacity() << endl;

	s.reserve(40);
	cout << s << endl;
	cout << s.size() << endl;
	cout << s.capacity() << endl;

	s.reserve(50);
	cout << s << endl;
	cout << s.size() << endl;
	cout << s.capacity() << endl;

	s.reserve(40);
	cout << s << endl;
	cout << s.size() << endl;
	cout << s.capacity() << endl;

	s.reserve(20);
	cout << s << endl;
	cout << s.size() << endl;
	cout << s.capacity() << endl;

	s.reserve(10);
	cout << s << endl;
	cout << s.size() << endl;
	cout << s.capacity() << endl;
}

int main()
{
	TestString3();

	return 0;
}


#include<iostream>
using namespace std;
void TestString4()
{
	string s("hello");
	cout << s.size() << endl;
	cout << s.capacity() << endl;
}
int main()
{
	TestString4();

	return 0;
}


#include<iostream>
using namespace std;
void TestString4()
{
	string s("hello");
	cout << s.size() << endl;
	cout << s.capacity() << endl;

	//多出来的5个字符用!进行填充
	s.resize(10,'!');

	cout << s.size() << endl;
	cout << s.capacity() << endl;
}
int main()
{
	TestString4();

	return 0;
}


#include<iostream>
using namespace std;
void TestString4()
{
	string s("hello");
	cout << s.size() << endl;
	cout << s.capacity() << endl;

	//多出来的5个字符用!进行填充
	s.resize(10, '!');

	cout << s.size() << endl;
	cout << s.capacity() << endl;

	s.resize(20, '$');

	cout << s.size() << endl;
	cout << s.capacity() << endl;

	s.resize(40, '&');

	cout << s.size() << endl;
	cout << s.capacity() << endl;
}
int main()
{
	TestString4();

	return 0;
}


#include<iostream>
using namespace std;
void TestString4()
{
	string s("hello");
	cout << s.size() << endl;
	cout << s.capacity() << endl;

	//多出来的5个字符用!进行填充
	s.resize(10, '!');

	cout << s.size() << endl;
	cout << s.capacity() << endl;

	s.resize(20, '$');

	cout << s.size() << endl;
	cout << s.capacity() << endl;

	s.resize(40, '&');

	cout << s.size() << endl;
	cout << s.capacity() << endl;

	s.resize(30);

	cout << s.size() << endl;
	cout << s.capacity() << endl;

	s.resize(20);

	cout << s.size() << endl;
	cout << s.capacity() << endl;

	s.resize(10);

	cout << s.size() << endl;
	cout << s.capacity() << endl;
}
int main()
{
	TestString4();

	return 0;
}



resize(newsize,ch):假设string类有效元素个数为size个，容量为capacity
1.newsize<size:只是将有效元素的个数改变到newsize个就可以了,不会去缩小容量
2.size<newsize<capacity:直接将有效元素的个数增加到newsize
	多出的newsize-size，用ch进行填充，如果没有传递ch的话，就用0去填充
3.newsize>capacity:就要进行扩容了，申请空间，拷贝元素，释放旧空间
然后需要将新元素的个数增加到newsize个，多出来的和上面的操作是一样的


#include<iostream>
using namespace std;
void TestPushBack()
{
	string s;
	size_t sz = s.capacity();
	cout << "making s grow:\n";
	for (int i = 0; i < 100; ++i)
	{
		s.push_back('c');
		if (sz != s.capacity())
		{
			sz = s.capacity();
			cout << "capacity changed: " << sz << '\n';
		}
	}
}
int main()
{
	TestPushBack();
	return 0;
}


#include<iostream>
#include<string>
using namespace std;
void TestString5()
{
	string s1("hello");
	cout << s1[0] << endl;
	s1[0] = 'H';
	cout << s1 << endl;

	//如果s1中的字母不是大写，那么我们就把他改成大写
	for (size_t i = 0; i < s1.size(); i++)
	{
		if (s1[i] >= 'a' && s1[i] <= 'z')
		{
			s1[i] -= 32;
		}
	}
	//使用迭代器进行打印的操作
	//迭代器，将其看成一个指针来使用
	string::iterator it = s1.begin();
	while (it != s1.end())
	{
		cout << *it << endl;
		++it;
	}
	cout << endl;

	//除了使用迭代器的方式进行打印，我们还可以使用基于范围的for循环来进行打印的操作
	//string本身就是一个范围确定的序列
	//所以可以支持范围for
	for (auto c : s1)
	{
		cout << c << endl;
	}
}
int main()
{
	TestString5();

	return 0;
}


#include<iostream>
#include<string>
using namespace std;
void TestString6()
{
	string s1("hello");
	cout << s1[0] << endl;
	s1[0] = 'H';
	cout << s1 << endl;

	//如果s1中的字母不是大写，那么我们就把他改成大写
	for (size_t i = 0; i < s1.size(); i++)
	{
		if (s1[i] >= 'a' && s1[i] <= 'z')
		{
			s1[i] -= 32;
		}
	}
	//使用迭代器进行打印的操作
	//迭代器，将其看成一个指针来使用
	string::iterator it = s1.begin();
	while (it != s1.end())
	{
		cout << *it << endl;
		++it;
	}
	cout << endl;

	//除了使用迭代器的方式进行打印，我们还可以使用基于范围的for循环来进行打印的操作
	//string本身就是一个范围确定的序列
	//所以可以支持范围for
	for (auto c : s1)
	{
		cout << c << endl;
	}

	const string s2("world");  //这么定义的话，其实就已经表明了s2种的内容是不可以被修改的

	s2[0] = 'W';
}
int main()
{
	TestString6();

	return 0;
}


#include<iostream>
using namespace std;
void TestString7()
{
	string s;

	s.push_back('I');

	s.append(" ");

	string ss("Love");

	s.append(ss);

	s += " ";

	s += "China";

	cout << s << endl;
}
int main()
{
	TestString7();

	return 0;
}


#include<iostream>
using namespace std;
void TestString7()
{
	string s;

	s.push_back('I');

	s.append(" ");

	string ss("Love");

	s.append(ss);

	s += " ";

	s += "China";

	s += " ";
	s.push_back('!');

	cout << s << endl;

	s.insert(s.find('!'), ":)");

	cout << s << endl;
}
int main()
{
	TestString7();

	return 0;
}


#include<iostream>
using namespace std;
void TestString9()
{
	string s1("hello");
	string s2(" world!!!");
	cout << s1 + s2 << endl;
}
int main()
{
	TestString9();
	return 0;
}


#include<iostream>
using namespace std;
void TestString9()
{
	string s1("hello");
	string s2(" world!!!");
	cout << s1 + s2 << endl;

	if (s1 < s2)
		cout << s1 << "<" << s2 << endl;
	else
		cout << s1 << ">=" << s2 << endl;
}
int main()
{
	TestString9();
	return 0;
}


class Solution {
public:
	string reverseOnlyLetters(string S)
	{
		int begin = 0, end = S.length() - 1;
		while (begin < end)
		{
			if (!isalpha(S[begin]))
				begin++;
			if (!isalpha(S[end]))
				end--;
			if (isalpha(S[begin]) && isalpha(S[end]))
				swap(S[begin++], S[end--]);
		}
		return S;
	}
};


#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	getline(cin, str);
	int count = 0;
	int len = str.length();
	for (int i = len - 1; i >= 0; --i)
	{
		if (str[i] != ' ')
			count++;
		else
			break;
	}
	cout << count << endl;
}
```
```cpp
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	while (getline(cin, s))
	{
		cout << s.substr(s.rfind(' ') + 1).size();
	}
}


class Solution {
public:
	bool isPalindrome(string s)
	{
		//需要注意一下，空的字符串也是回文字符串
		if (s.empty())
			return true;
		//因为，所给出的字符串有可能有大写的字母，也可能有小写的字母
		//那么，我们现在需要把他们统一一下，也就是说，我们需要把大写字母转化成
		//小写字母，或者说把小写的字母转换成大写的字母，从而再去进行回文的判断
		for (auto& ch : s)
		{
			if (ch >= 'A' && ch <= 'Z')
				ch += 32;
		}
		int begin = 0;
		int end = s.size() - 1;
		while (begin < end)
		{
			//begin从前往后找字母或者数字
			while (begin < end)
			{
				if (isalnum(s[begin]))
				{
					break;
				}
				begin++;
			}
			//end从后向前寻找
			while (begin < end)
			{
				if (isalnum(s[end]))
				{
					break;
				}
				end--;
			}
			if (s[begin] != s[end])
				return false;
			else
			{
				begin++;
				end--;
			}
		}
		return true;
	}
};


class Solution {
public:
	int firstUniqChar(string s)
	{
		unordered_map<int, int> mp;
		for (auto i : s)
		{
			mp[i]++;
		}
		for (int i = 0; i < s.size(); i++)
		{
			if (mp[s[i]] == 1)
				return i;
		}
		return -1;
	}
};