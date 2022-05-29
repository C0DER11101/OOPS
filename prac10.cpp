#include<iostream>

using namespace std;

// SINGLE INHERITANCE 

/* AN EXAMPLE OF AMBIGUITY IN SINGLE INHERITANCE */

class A
{
	int a;
	int b;

	public:
	int c;

	void get_ab();
	void show_ab();
	void get_c();
};

class B:public A // inheriting the class A publicly!! Public members of class A become public members of class B
{
	int a;
	int b;

	public:
	int c;

	/* B's own member functions!! */
	void get_ab();
	void show_ab();
	void get_c();
};

void A::get_ab()
{
	cout<<"\n\nClass A:\n\n";
	cout<<"enter value of a: ";
	cin>>a;
	cout<<"enter value of b: ";
	cin>>b;
}

void A::show_ab()
{
	cout<<"\n\nClass A:\n\n";
	cout<<"The value of a is: "<<a<<endl;
	cout<<"The value of b is: "<<b<<endl;
}

void A::get_c()
{
	cout<<"\n\nClass A:\n\n";

	cout<<"enter value of c: ";
	cin>>c;
}

void B::get_ab()
{
	cout<<"\n\nClass B:\n\n";
	cout<<"enter value of a: ";
	cin>>a;
	cout<<"enter value of b: ";
	cin>>b;
}

void B::show_ab()
{
	cout<<"\n\nClass B:\n\n";
	cout<<"The value of a is: "<<a<<endl;
	cout<<"The value of b is: "<<b<<endl;
}

void B::get_c()
{
	cout<<"\n\nClass B:\n\n";
	cout<<"enter value of c: ";
	cin>>c;
}

int main(void)
{
	B b;
	b.get_ab(); // calls the get_ab() function in class B
	b.show_ab(); // calls the show_ab() function in clas B
	b.A::get_ab(); // calls the get_ab() function of class A; this avoids ambiguity
	b.A::show_ab(); // calls the show_ab() function of class A; this avoids ambiguity
	b.get_c(); // calls get_c() of class B
	b.A::get_c(); // calls get_c() of class A

	cout<<"\n\nClass B's public variable c: "<<b.c<<endl;

	cout<<"\n\nClass A's public variable c: "<<b.A::c<<endl; // accessing the public variable of class A
	return 0;
}
