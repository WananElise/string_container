#include<iostream>
using namespace std;
#include<string>
void test01()
{
	string str1 = "��";
	str1+="������Ϸ";
	cout << str1 << endl;
	string str2="lol dnf";
	str1.append(str2, 4,3);
	cout << str1 << endl;
}



int main()
{

	test01();



}