#include <iostream>
using namespace std;

//string求子串
void test01()
{
	string str1 = "123456";
	string substr = str1.substr(1, 3);
	cout << substr << endl;
}

//实际用途
void test02()
{
	string email = "97066921@qq.com";
	//从邮箱中 获取 用户名信息
	int pos = email.find('@');
	cout << pos << endl;
	string emailName = email.substr(0, pos);
	cout << emailName << endl;

}


int main()
{
	//test01();
	test02();

	system("pause");
	return 0;
}