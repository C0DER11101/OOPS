#include<iostream>

using namespace std;

class sample
{
	int a;
	int b;

	public:

	void getdata();
	void showdata();
	void modify(sample);
	void modifyRef(sample&);
};


void sample::getdata()
{
	cout<<"enter a: ";
	cin>>a;
	cout<<"enter b: ";
	cin>>b;
}

void sample::showdata()
{
	cout<<"Value of a = "<<a<<endl;
	cout<<"Value of b = "<<b<<endl;
}

void sample::modify(sample s)
{
	s.a=1000;
	s.b=0;
}

void sample::modifyRef(sample&s)
{
	s.a=1000;
	s.b=0;
}

int main(void)
{
	sample s1, s2;

	cout<<"enter data for s1: "<<endl;
	s1.getdata();
	cout<<"enter data for s2: "<<endl;
	s2.getdata();
	cout<<"\n\nValues of s1:\n\n\n";
	s1.showdata();
	cout<<"\n\nValues of s2:\n\n\n";
	s2.showdata();
	s1.modify(s2); // pass-by-value

	cout<<"\n\nValues of s2 after modifying contents of s2 using pass by value:\n\n\n";
	s2.showdata();
	s1.modifyRef(s2);
	cout<<"\n\nValues of s2 after modifying contents of s2 using pass by reference:\n\n\n";
	s2.showdata();
	return 0;
}
