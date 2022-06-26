#include<iostream>

using namespace std;

template<class T>
class sample
{
	T a;

	public:

	sample(T x)
	{
		a=x;
	}

	void show()
	{
		cout<<"the value of a is: "<<a<<endl;
	}
};

int main(void)
{
	sample<float>S(34.5);

	cout<<"\n\nDisplaying float value.\n\n";
	S.show();

	sample<int>S2(12);

	cout<<"\n\nDisplaying an integer value:\n\n";

	S2.show();

	sample<char>S3('a');

	cout<<"\n\nDisplaying a character:\n\n";
	S3.show();
	return 0;
}
