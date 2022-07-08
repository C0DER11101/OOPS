#include<iostream>

using namespace std;

class A
{
	public:
		int m;
		void show();
};

class B:public A
{
	public:
		int m;
		void show();
};

void A::show()
{
	cout<<"\nshow() of class A:\n";
	cout<<"Value of datamember m of class A is: "<<m<<endl;
}

void B::show()
{
	cout<<"\nshow() of class B:\n";
	cout<<"Value of datamember m of class B is: "<<m<<endl;
}


int main(void)
{
	B*bptr; // pointer of derived class type!!

	B b;
	A a;

	bptr=&b; 

	bptr->m=10;
	bptr->show();

	bptr=&a;// error:   cannot convert a pointer to derived class to a pointer to a base class!!
	/* the rest of the below code wll not work; there's an error up here ^ */
	bptr->m=20;
	bptr->show();
	return 0;
}
