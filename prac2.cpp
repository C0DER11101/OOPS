#include<iostream>

using namespace std;

class A
{
	static int count; // static variable declaration!!
	
	public:
	void countObj(); // to count the number of objects!!
	static void display(); // static member functions have access to only static data members!!
};

int A::count; // static variable definition, variable is automatically initialized to 0

void A::countObj()
{
	count++;
}

void A::display()
{
	cout<<count<<" objects"<<endl;

}

int main(void)
{
	A a, b, c;

	a.countObj();
	b.countObj();
	c.countObj();
	A::display(); // this is how a static member function is called!!!
	return 0;
}
