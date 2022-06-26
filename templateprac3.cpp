#include<iostream>

using namespace std;

int main(void)
{
	int a, b;
	char c, d;
	float e, f;

	cout<<"enter two characters: ";
	cin>>c>>d;

	cout<<"c= "<<c<<"; d= "<<d<<"\n";
	cout<<"Swapping two characters: "<<"\n";
	swap(c, d);
	cout<<"c= "<<c<<"; d= "<<d<<"\n";

	cout<<"enter two integers: ";
	cin>>a>>b;

	cout<<"a= "<<a<<"; b= "<<b<<"\n";
	cout<<"\nSwapping two integers: "<<"\n";
	swap(a, b);
	cout<<"a= "<<a<<"; b= "<<b<<"\n";

	cout<<"enter two floats: ";
	cin>>e>>f;

	cout<<"e= "<<e<<"; f= "<<f<<"\n";
	cout<<"\nSwapping two floats: "<<"\n";
	swap(e, f);
	cout<<"e= "<<e<<"; f= "<<f<<"\n";


	return 0;
}

template<class T>
void swap(T&a, T&b)
{
	T temp;

	temp=a;
	a=b;
	b=a;
}
