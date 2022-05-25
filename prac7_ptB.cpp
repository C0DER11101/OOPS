#include<iostream>

using namespace std;

class A
{
	int a;

	public:

	A() // DEFAULT CONSTRUCTOR!!
	{
		cout<<"Default constructor called!!\n\n";
		a=0;
	}

	A(A&ob) // COPY CONSTRUCTOR!! CANNOT TAKE ARGUMENT OF CLASS TYPE, BUT CAN TAKE A REFERENCE TO CLASS TYPE AS ARGUMENT!!
	{
		cout<<"Copy constructor called!!\n\n";
		a=ob.a; // copying the value ob's a to invoking object's a
	}

/*	A(int val=0) // CONSTRUCTOR WITH DEFAULT ARGUMENTS!!
	{
		cout<<"Constructor with default argument called!!\n\n";
		a=val;
	}
*/

};

int main(void)
{
	A a; // calling the default constructor!!
	A b(a); // first way of calling copy constructor!!
	A c=a; // second way of calling copy constructor!!

	return 0;
}
