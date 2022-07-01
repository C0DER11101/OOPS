#include<iostream>

using namespace std;

class A
{
    public:
        int m;
        void show();
};

class B:public A // inherited from class A (in public visibility mode)
{
    public:
        int m;
        void show();
};


void A::show()
{
	cout<<"\nshow() member function of class A\n"; 
	cout<<"value of A's datamember m is: "<<m<<endl;
}

void B::show()
{
	cout<<"\nshow() member function of class B\n"; 
	cout<<"value of B's datamember m is: "<<m<<endl;
}

int main(void)
{
    A*a; // pointer to class A
    
    A a2; // object of class A
    
    B b;
    
    a=&a2;
    a->m=10; // accessing m of class A
    a=&b; // a stores address of B's object

    // a->m=20; // accessing m of class A
    ((B*)a)->m=20; // typecasting pointer to class A to pointer to class B(now it's accessing m of class B)
    
    a=&a2;
    a->show();  // calls show() of class A
    a=&b; // a stores the address of object of class B
    //a->show(); // calls show() of class A
    ((B*)a)->show(); // typecasting pointer to class A to pointer to class B(now it calls show() of class B)
    
}
