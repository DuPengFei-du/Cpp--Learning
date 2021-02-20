#include<iostream>
#include<string>
using namespace std;

void TestString1()
{
	string s1;   //������һ���յ��ַ���

	string s2("hello world");    //���Բ���C���Ը�ʽ���ַ��������й���
	//ֻ��Ҫ��һ��char * �Ĳ�����ʵ���ǿ��Ե�

	string s3(10, '$');   //���ַ����������10��$�ķ���

	string s4(s2);    //���ÿ������캯��

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
	//����������Ľ����һ��һ����

	cout << s1.capacity() << endl;

	if (s1.empty())
		cout << "���ַ���" << endl;
	else
		cout << "���ǿ��ַ���" << endl;

	s1.clear();

	if (s1.empty())
		cout << "���ַ���" << endl;
	else
		cout << "���ǿ��ַ���" << endl;
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

	//�������5���ַ���!�������
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

	//�������5���ַ���!�������
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

	//�������5���ַ���!�������
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



resize(newsize,ch):����string����ЧԪ�ظ���Ϊsize��������Ϊcapacity
1.newsize<size:ֻ�ǽ���ЧԪ�صĸ����ı䵽newsize���Ϳ�����,����ȥ��С����
2.size<newsize<capacity:ֱ�ӽ���ЧԪ�صĸ������ӵ�newsize
	�����newsize-size����ch������䣬���û�д���ch�Ļ�������0ȥ���
3.newsize>capacity:��Ҫ���������ˣ�����ռ䣬����Ԫ�أ��ͷžɿռ�
Ȼ����Ҫ����Ԫ�صĸ������ӵ�newsize����������ĺ�����Ĳ�����һ����


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

	//���s1�е���ĸ���Ǵ�д����ô���ǾͰ����ĳɴ�д
	for (size_t i = 0; i < s1.size(); i++)
	{
		if (s1[i] >= 'a' && s1[i] <= 'z')
		{
			s1[i] -= 32;
		}
	}
	//ʹ�õ��������д�ӡ�Ĳ���
	//�����������俴��һ��ָ����ʹ��
	string::iterator it = s1.begin();
	while (it != s1.end())
	{
		cout << *it << endl;
		++it;
	}
	cout << endl;

	//����ʹ�õ������ķ�ʽ���д�ӡ�����ǻ�����ʹ�û��ڷ�Χ��forѭ�������д�ӡ�Ĳ���
	//string�������һ����Χȷ��������
	//���Կ���֧�ַ�Χfor
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

	//���s1�е���ĸ���Ǵ�д����ô���ǾͰ����ĳɴ�д
	for (size_t i = 0; i < s1.size(); i++)
	{
		if (s1[i] >= 'a' && s1[i] <= 'z')
		{
			s1[i] -= 32;
		}
	}
	//ʹ�õ��������д�ӡ�Ĳ���
	//�����������俴��һ��ָ����ʹ��
	string::iterator it = s1.begin();
	while (it != s1.end())
	{
		cout << *it << endl;
		++it;
	}
	cout << endl;

	//����ʹ�õ������ķ�ʽ���д�ӡ�����ǻ�����ʹ�û��ڷ�Χ��forѭ�������д�ӡ�Ĳ���
	//string�������һ����Χȷ��������
	//���Կ���֧�ַ�Χfor
	for (auto c : s1)
	{
		cout << c << endl;
	}

	const string s2("world");  //��ô����Ļ�����ʵ���Ѿ�������s2�ֵ������ǲ����Ա��޸ĵ�

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
		//��Ҫע��һ�£��յ��ַ���Ҳ�ǻ����ַ���
		if (s.empty())
			return true;
		//��Ϊ�����������ַ����п����д�д����ĸ��Ҳ������Сд����ĸ
		//��ô������������Ҫ������ͳһһ�£�Ҳ����˵��������Ҫ�Ѵ�д��ĸת����
		//Сд��ĸ������˵��Сд����ĸת���ɴ�д����ĸ���Ӷ���ȥ���л��ĵ��ж�
		for (auto& ch : s)
		{
			if (ch >= 'A' && ch <= 'Z')
				ch += 32;
		}
		int begin = 0;
		int end = s.size() - 1;
		while (begin < end)
		{
			//begin��ǰ��������ĸ��������
			while (begin < end)
			{
				if (isalnum(s[begin]))
				{
					break;
				}
				begin++;
			}
			//end�Ӻ���ǰѰ��
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