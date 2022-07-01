#include<iostream>

using namespace std;

class A // abstract class
{
	public:

		void display();
		virtual void show()=0; // pure virtual function!!!
};

class B:public A
{
	public:

		void display();
		void show();
};


void A::display()
{
	cout<<"\n\ndisplay() of class A\n\n";
}


void B::display()
{
	cout<<"\n\ndisplay() of class B\n\n";
}

void B::show()
{
	cout<<"\n\nshow() of class B\n\n";
}


int main(void)
{
	A*aptr; // no objects of class A created, but pointer to class A can be created!!!
	/* 
	   since A is an abstract class, so no objects of type A cannot be created;
	   but aptr is a pointer to class A and not an object of class A so
	   no error arises in the program!!!
	*/
	B b;

	aptr=&b;

	aptr->display(); // class A can call its functions also, it just cannot create its own objects; that's why it is called an abstract class
	/* 
	   an abstract class cannot create its own objects, but it can create pointers
	   and can also access its member functions
	*/

	aptr->show();
	return 0;
}
