#include <iostream>
using namespace std;

//string���Ӵ�
void test01()
{
	string str1 = "123456";
	string substr = str1.substr(1, 3);
	cout << substr << endl;
}

//ʵ����;
void test02()
{
	string email = "97066921@qq.com";
	//�������� ��ȡ �û�����Ϣ
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