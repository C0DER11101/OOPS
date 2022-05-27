#include<iostream>
#include<iomanip>

using namespace std;

class FLOAT
{
	float m;

	public:

	FLOAT()
	{
		m=0.0;
	}

	FLOAT(float val)
	{
		m=val;
	}

	/*
	   overloading all four operators:
	   +, -, *, /
	*/

	FLOAT operator+(FLOAT); // +
	FLOAT operator-(FLOAT); // -
	FLOAT operator*(FLOAT); // *
	FLOAT operator/(FLOAT); // /
	friend void display(FLOAT);
};

FLOAT FLOAT::operator+(FLOAT f2)
{
	return FLOAT(m+f2.m); // creates a temporary object and initializes its contents by calling the constructor FLOAT(float)
	/* then returns that temporary object which is destroyed as soon its contents are assigned to another object(in this case
	   f3 in the main function is assigned with the contents of this temporary object!!))
	*/
}

FLOAT FLOAT::operator-(FLOAT f2)
{
	return FLOAT(m-f2.m);
}

FLOAT FLOAT::operator*(FLOAT f2)
{
	return FLOAT(m*f2.m);
}

FLOAT FLOAT::operator/(FLOAT f2)
{
	return FLOAT(m/f2.m);
}

void display(FLOAT f)
{
	cout<<fixed<<setprecision(2)<<f.m<<endl;
}

int main(void)
{
	FLOAT f1, f2;

	f1=FLOAT(4.5); // explicitly calling the constructor
	cout<<"Value of f1 = "; display(f1);
	f2=FLOAT(5.5);
	cout<<"Value of f2 = "; display(f2);
	FLOAT f3;

	f3=f1+f2; // same as calling f1.operator+(f2);
	cout<<"f1+f2 = ";
	display(f3);
	f3=f1*f2; // same as calling f1.operator*(f2);
	cout<<"f1*f2 = ";
	display(f3);
	f3=f1-f2; // same as calling f1.operator-(f2);
	cout<<"f1-f2 = ";
	display(f3);
	f3=f1/f2; // same as calling f1.operator/(f2);
	cout<<"f1/f2 = ";
	display(f3);


	return 0;

}
