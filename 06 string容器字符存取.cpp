#include<iostream>
using namespace std;

void test01()
{
	string str = "hello";
	//�����ַ���ȡ
	//1.ͨ��[]���ʵ����ַ�
	for (int i = 0 ; i < str.size(); i++)
	{
		cout << str[i] << " ";
	}
	cout << endl;

	//2.ͨ��at��ʽ���ʵ����ַ�
	for (int i = 0; i < str.size(); i++)
	{
		cout << str.at(i) << " ";
	}
	cout << endl;

	//�޸ĵ����ַ�
	str[0] = 'x';
	cout << str << endl;
	str.at(1) = 'x';
	cout << str << endl;
}

int main()
{

	test01();



	system("Pause");
	return 0;
}