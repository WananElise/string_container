#include<iostream>
using namespace std;

void test01()
{
	string s1;//默认构造

	const char* str = "hello word";//利用字符串初始化
	string s2 = str;

	cout << s2 <<endl;

	string s3(s2);//拷贝构造
	cout << s3 << endl;

	string s4(10, 'a');
	cout << s4 << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}