#include<iostream>
#include<string.h>

using namespace std;

class String
{
	char s[500];

	public:

	String()
	{
		strcpy(s, "NULL");
	}

	String(char*str)
	{
		strcpy(s, str);
	}

	friend String addstr(String, String); // to add two strings
	void display();
};

String addstr(String s1, String s2)
{
	String s3;
	strcat(s1.s, s2.s);
	s3=s1;

	return s3;
}

void String::display()
{
	cout<<s<<endl;
}

int main(void)
{
	String s1, s3; // creating un-initialized string!
	cout<<"Null string:\n\n";
	s1.display();
	s3.display();

	String s2("Well Done. "); // creating initialized string!
	String s4("Nice!!!");
	cout<<"Initialized strings:\n\n";
	s2.display();
	s4.display();

	s3=addstr(s2, s4); // calling friend function to add two strings!!!

	cout<<"\n\nconcatenated string:\n\n\n";

	s3.display();

	s1=s2; // initializing one string object to other member-by-member!!!

	cout<<"copied string:\n\n";
	s1.display();

	return 0;
}
