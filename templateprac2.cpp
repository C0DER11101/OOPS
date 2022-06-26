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

	void show();
};

// member function templates
template<class T> // this is required when the member functions are defined outside the class definition, not needed otherwise(i.e if defined inside class)
void sample<T>::show()
{
	cout<<"\nThe value is: "<<a<<endl;

}



int main(void)
{
	sample<float>s1(56.9);

	cout<<"\n\nshowing float values...\n\n";

	s1.show();

	sample<int>s2(400);

	cout<<"\n\nshowing int values...\n\n";

	s2.show();

	sample<char>s3('a');

	cout<<"\n\nshowing character values...\n\n";

	s3.show();


	return 0;
}
