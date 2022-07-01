#include<iostream>

using namespace std;


class A
{
	public:

		void display();
		virtual void show();
};

class B:public A
{
	public:

		void display();
		void show();
};


void A::display()
{
	cout<<"\ndisplay() of class A\n\n";
}

void A::show()
{
	cout<<"\nshow() of class A\n\n";
}

void B::display()
{
	cout<<"\ndisplay() of class B\n\n";
}

void B::show()
{
	cout<<"\nshow() of class B\n\n";
}


int main(void)
{
	A*aptr; // pointer to class A
	B b;
	A a;
	aptr=&a;

	aptr->display(); // calls display() of class A
	aptr->show(); // calls show() of class A

	aptr=&b;
	/* since aptr is of type A, so it will by default call display() of class A, even though it stores
	   the address of a derived class(say B in this case), but aptr->show() will call the show() of 
	   class B because show() of class A is virtual meaning that now C++ knows which function to call
	   when we write aptr->show()[after assigning the address of the required class Type(A or B)
	*/
	aptr->display(); // calls display() of class A
	aptr->show(); // calls show() of class B

	return 0;
}
