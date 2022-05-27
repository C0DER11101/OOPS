#include<iostream>
#include<string.h>

using namespace std;

class String
{
	char*s;
	int len;

	public:

	String()
	{
		s=NULL;
	}

	String(char*str, int l)
	{
		len=l;

		s=new char[len];
		strcpy(s, str);
	}


	~String()
	{
		cout<<"GOOD BYE!!!\n\n";
		delete s;
	}

	void disp();
	friend void operator==(String, String);
};

void String::disp()
{
	cout<<s<<endl;
}
void operator==(String s1, String s2)
{
	if(strcmp(s1.s, s2.s)==0)
	{
		cout<<"\n\nthe strings are equal!!\n\n";
	}
	else
	{
		cout<<"\n\nthe strings are not equal!!!\n\n";
	}
}


int main(void)
{
	String s1("Hello", 10), s2("Hello", 10);

	s1.disp();
	//s2=String("hello", 10); // explicit call to constructor which will result in the calling of the destructor!!
	/*
	   when the constructor is called in the time of declaration, the destructor is not called
	   but when the constructor is called explicitly, then the that second call to the constructor acts as
	   function block and not as constructor and the destructor is called when the control leaves a block, or a function or
	   exits from the program and that's why s2's string gets deleted because it calls the constructor String(char*, int)
	   explicitly
	*/
	s2.disp();

	s1==s2;

	return 0;
}
