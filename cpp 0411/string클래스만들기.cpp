#include <iostream>
#include "MyString.h"


using namespace my;

int main()
{
	string str;
	string str1("I like ");
	string str2 = "string class";
	string str3 = str1 + str2;

	std::cout << str1 << std::endl;
	cout << str2 << endl;
	cout << str3 << endl;

	str1 += str2;
	if (str1 == str3)
		cout << "���� ���ڿ�!" << endl;
	else
		cout << "�������� ���� ���ڿ�!" << endl;

	string str4;
	cout << "���ڿ� �Է�: ";
	cin >> str4;
	cout << "�Է��� ���ڿ�: " << str4 << endl;

	string str5;
	std::cout << "���ڿ� �Է�: ";
	std::cin >> str5;
	std::cout << "�Է��� ���ڿ�: " << str5 << std::endl;

	//char strArr[MAX_STRING_LENGTH];
	//cout << "���ڿ� �Է�: ";
	//cin >> strArr;
	//cout << "�Է��� ���ڿ�: " << strArr << endl;

	return 0;
}