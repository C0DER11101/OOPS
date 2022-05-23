#include<iostream>

using namespace std;

class Y; // FORWARD DECLARATION OF CLASS Y
class X
{
	int data;

	public:
	
	void getdata();
	int f(X, Y);
};

class Y
{
	int data;

	public:
	void getdata();
	friend int X::f(X, Y); // member function of class X made a friend function of class Y
};

void X::getdata()
{
	cout<<"enter value for data member of class X: ";
	cin>>data;
}

void Y::getdata()
{
	cout<<"enter value for data member of class Y: ";
	cin>>data;
}

int X::f(X x, Y y) // friend function can access the private members of the class it has declared in!!!
{
	cout<<"Data member of class X: "<<x.data<<endl;
	cout<<"Data member of class Y: "<<y.data<<endl;
	return 0;
}

int main(void)
{
	X x;
	Y y;
	x.getdata();
	y.getdata();
	x.f(x, y);
	//y.f(x, y); // Error statement, since f() is a friend function of class Y, we cannot invoke it using objects of class Y!!
	return 0;
}
