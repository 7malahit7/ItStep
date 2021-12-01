#include<iostream>
#include<string>

using namespace std;


int main()
{
	//char ch{ 'a' };
	//char16_t ch16{ u'a' };
	//char32_t ch32{ U'a' };
	//wchar_t chw{ L'a' };
	//string = > char;
	//wstring = > wchar_t;
	//u16string = > char16_t;
	// 
	//typedef basic_string<char> string;
	//
	//string text{ "hello" };
	//string name(8,'a');
	//string month = "March";
	//cout << text << endl;
	//cout << name << endl;
	//cout << month << endl;
	//getline(cin, text); cout << text;
	//
	//string name{ "12345678910" };
	//char c2 = name.at(10);
	//char c1 = name[10];
	//
	//string text{ "This is a c++ string" };
	//for (auto it = text.begin(); it < text.end(); it++) 
	//{
	//	if (!isalpha(*it) && !isspace(*it))
	//		cout << *it;
	//}
	//cout << endl;
	//
	//string text{ "This is a c++ string" };
	//cout << "\t" << text.find("is") << endl;
	//cout << "\t" << text.find("is",4) << endl;
	//cout << "\t" << text.rfind("is") << endl;
	//cout << "\t" << text.rfind("is",4) << endl;
	//cout << "\t" << text.find("strong",0,3) << endl;
	//cout << "\t" << text.find("strong") << endl;
	//
	//string text{ "This is a c++ string" };
	//cout << text << endl;
	//cout << text.find_first_not_of("abcdefghijklmopqrstuvwxyz ") << endl;
	//cout << text.find_last_of("abc") << endl;

	string text{ R"(We are mustering our IT skills every Monday and Wednesday. 
Besides, we do our homework when we have free time.
It is required for us to get our diplomas at the end of the education years. )" };
	string t;
	cout  << text << "\n\nEnter symbol that will be found in the text: ";
	getline(cin, t);
	cout << "Found 1st time on position: " << text.find_first_of(t)+1 << endl;
	cout << "Found last time on position: " << text.find_last_of(t)+1 << endl;
	

	return 0;
}
