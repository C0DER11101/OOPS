#include<iostream>

using namespace std;

class A
{
	int a;

	public:

	void setval(int);
	void forfptr(int);
	friend void showval(A);
};

void A::setval(int val)
{
	a=val;
	cout<<"Value of a displayed from setval(): "<<a<<endl;
}

void showval(A o)
{
	int A::*pm=&A::a;
	cout<<"Value of a displayed from friend function showval() using pointer to member: "<<o.*pm<<endl;
}
void A::forfptr(int val)
{
	cout<<"Value="<<val<<endl;
}


int main(void)
{
	A obj;
	A *po=&obj; // pointer to class object
	/* can be done in this way as well:
	   A *po;
	   po=&obj;
	 */

	// pointer to member function

	void (A::*pf)(int)=&A::forfptr;

	cout<<"Calling forfptr(){using pointer to member function} through class object.....\n\n\n";
	(obj.*pf)(100); // calling forfptr() through class object
	cout<<"Calling forfpt(){using pointer to member function}through pointer to class object......\n\n\n";
	(po->*pf)(100); // calling forfptr() through pointer to class object

	cout<<"\n\ncalling setval() through pointer to class object....\n\n\n";
	po->setval(200);
	showval(obj);
	return 0;
}
