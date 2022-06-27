#include<iostream>

using namespace std;

// NON-TYPE TEMPLATE ARGUMENTS

template<class T, int size>
class array
{
	T*a;

	public:

	array()
	{
		a=new T[size];
	}
	
	~array()
	{
		cout<<"\n\nSee you again!!!\n\n";
		delete[] a;
	}

	void init();
	void show();
};

template<class T, int size>
void array<T, size>::init()
{
	cout<<"enter elements:\n\n";

	for(int i=0; i<size; i++)
	{
		cout<<"Element "<<i+1<<"\n";
		cin>>a[i];
	}
}

template<class T, int size>
void array<T, size>::show()
{
	cout<<"\n\nelements of the array:\n\n";

	for(int i=0; i<size; i++)
		cout<<a[i]<<" ";
}

int main(void)
{
	array<int, 10>a; // int for type T and 10 for size
	a.init();
	a.show();
	return 0;
}
