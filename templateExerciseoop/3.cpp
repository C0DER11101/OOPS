#include<iostream>

using namespace std;

template<class T1>
void Lsearch(T1*, int);

int main(void)
{
	int size, opt;
	
	int*a=NULL;
	float*b=NULL;
	char*c=NULL;

	cout<<"enter size of the array: ";
	cin>>size;

prompt:
	cout<<"\n\nSelect anyone from the following......\n\n";
	cout<<"[1] Create an integer array.\n";
	cout<<"[2] Create a floating point array.\n";
	cout<<"[3] Create a character array.\n";
	cout<<"[4] <Exit>.\n";
	cout<<"option> ";
	cin>>opt;


	switch(opt)
	{
		case 1:
			a=new int[size];
			cout<<"enter elements into the array:\n\n";

			for(int i=0; i<size; i++)
			{
				cout<<"["<<i<<"] ";
				cin>>a[i];
			}

			Lsearch(a, size);

			break;

		case 2:
			b=new float[size];
			cout<<"enter elements into the array:\n\n";

			for(int i=0; i<size; i++)
			{
				cout<<"["<<i<<"] ";
				cin>>b[i];
			}

			Lsearch(b, size);

			break;

		case 3:
			c=new char[size];
			cout<<"enter elements into the array:\n\n";

			for(int i=0; i<size; i++)
			{
				cout<<"["<<i<<"] ";
				cin>>c[i];
			}

			Lsearch(c, size);

			break;

		case 4:
			cout<<"\n\nBYE!!\n\n";
			if(a!=NULL)
			{
				cout<<"\nGoodbye!!\n\n";
				delete[] a;
			}

			if(b!=NULL)
			{
				cout<<"\nGoodbye!!\n\n";
				delete[] b;
			}

			if(c!=NULL)
			{
				cout<<"\nGoodbye!!\n\n";
				delete[] c;
			}

			return 0;

		default:
			cout<<"\n\nINVALID OPTION!!\n\n";
			goto prompt;
	}

	if(a!=NULL)
	{
		cout<<"\nGoodbye!!\n\n";
		delete[] a;
	}

	if(b!=NULL)
	{
		cout<<"\nGoodbye!!\n\n";
		delete[] b;
	}

	if(c!=NULL)
	{
		cout<<"\nGoodbye!!\n\n";
		delete[] c;
	}

	return 0;
}


template<class T1>
void Lsearch(T1*array, int size)
{
	T1 element;
	int avail=0;
	cout<<"enter element to be searched!!";

	cin>>element;


	for(int i=0; i<size; i++)
	{
		if(array[i]==element)
		{
			avail=1;
			cout<<element<<" is at index "<<i<<"\n";
			break;
		}
	}

	if(avail==0)
	{
		cout<<element<<" is not in the array.....\n\n";
	}
}
