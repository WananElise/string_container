#include<iostream>
using namespace std;
#include<string>
void test01()//����
{
	string str = "abcdeefgde";
	int pos=str.find("de");
	if (pos == -1)
	{
		cout << "δ�ҵ����ַ���" << endl;
	}
	else
	{
		cout << "pos=" << pos << endl;
	}
	pos = str.rfind("de");
	cout << "pos=" << pos << endl;
}
void test02()//�滻
{
	string str = "11111";
	str.replace(1, 3, "222");
	cout << "str=" << str << endl;

}

int main()
{
	/*test01();*/
	test02();


	system("pause");
	return 0;
}
