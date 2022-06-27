#include<iostream>
#include<ctype.h>

using namespace std;
/*
   isalpha(ch) returns non-zero value if ch is a character
   and 0 if ch is not a character
*/

template<class T1, class T2>
void add(T1, T2);

int main(void)
{
	int a, b;
	cout<<"enter two integers: ";
	cin>>a>>b;
	add(a, b);

	float c, d;

	cout<<"enter two floats: ";
	cin>>c>>d;
	add(c, d);

	char e, f;
	
	cout<<"enter two characters: ";
	cin>>e>>f;
	add(e, f);
	return 0;
}


template<class T1, class T2>
void add(T1 a, T2 b)
{
	try
	{
		if(isalpha(a)!=0)
			throw a;
		else if(isalpha(b)!=0)
			throw b;
		else
			cout<<"\n\nThe sum is: "<<a+b<<endl;
	}

	catch(char var)
	{
		cout<<"\n\nCANNOT ADD CHARACTERS!!\n\n";
	}
}
