#include<iostream>

using namespace std;

class A
{
	int a;

	public:

	void setVal(int);
	void val() const; // constant member function!!
	void display();
};

void A::setVal(int v)
{
	a=v;
}

void A::val() const
{
//	a=21; // should show an error, because const member functions cannot modify data members
	cout<<"\n\nHi! I am a const member function! I cannot modify the data members of my class. :(\n\n";
}

void A::display()
{
	cout<<"Value of a: "<<a<<endl;
}

int main(void)
{
	A a;
	a.setVal(10);
	a.val();
	a.display();

	return 0;
}
