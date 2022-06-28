#include<iostream>
#include<ctype.h>

using namespace std;

template<class T>
void maxM(T*, int);

int main(void)
{
	int opt, size, *a;
	float *b;
	char*c;
	while(1)
	{
		cout<<"\n\nSelect type:\n\n";
		cout<<"[1] Int.\n";
		cout<<"[2] Float.\n";
		cout<<"[3] Char.\n";
		cout<<"[4] Exit.\n";
		cout<<":";
		cin>>opt;


		try
		{
			if(isalpha(opt)!=0)
			{
				throw opt;
			}

			else
			{
				switch(opt)
				{
					case 1:
						cout<<"enter size of the array: ";
						cin>>size;
						maxM(a, size);
						break;

					case 2:
						cout<<"enter size of the array: ";
						cin>>size;
						maxM(b, size);
						break;

					case 3:
						cout<<"enter size of the array: ";
						cin>>size;
						maxM(c, size);
						break;

					case 4:
						cout<<"\n\nBYE!!\n\n";
						return 0;

					default:
						cout<<"\n\nINVALID OPTION!!\n\n";
				}
			}
		}

		catch(int opt)
		{
			cout<<"\n\ninvalid option!!!\n\n";
			cout<<"\n\nBUFFER ERROR!!\n\n";
			return 0;
		}

	}


	return 0;
}


template<class T>
void maxM(T*a, int size)
{
	T mx, mn;
	a=new T[size];

	cout<<"\n\nenter elements into the array:\n\n";

	for(int i=0; i<size; i++)
	{
		cout<<"element "<<i+1<<":";
		cin>>a[i];
	}

	mx=a[0];
	mn=a[size-1];

	for(int i=0; i<size; i++)
	{
		if(a[i]>mx)
			mx=a[i];
	}

	for(int i=0; i<size; i++)
	{
		if(a[i]<mn)
			mn=a[i];
	}

	cout<<"\nMax = "<<mx<<"\nMin = "<<mn<<"\n";

	delete[] a;
}
