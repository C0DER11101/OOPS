#include<iostream>

using namespace std;

enum shape{square, cube, circle, rectangle};
enum{off, on}; // anonymous enums

int main(void)
{
	int a=cube;
	cube=(shape)100; // enums are constants, cannot be modified!!!
	cout<<a<<endl;
	shape newshape=circle; // OK
	cout<<newshape<<" "<<circle<<endl;
	newshape=(shape)90; // typecasting integer value to enumtype shape!!
	cout<<newshape<<endl;
	cout<<"OFF -> "<<off<<" ON -> "<<on<<endl;
	return 0;
}
