#include<iostream>

using namespace std;



template<class T, int size>
class Vector
{
	T*v;
	public:

	Vector()
	{
		v=new T[size];

	}

	~Vector()
	{
		cout<<"\n\nProgram terminated!!\n\n";
		delete[] v;

	}

	void initVector(); // initialize the vector
	void modifyVector(T); // modify vector
	void multiplyScalar(T); // multiply scalar with a vector!!
	void showVector();  // display the vector

};

template<class T, int size>
void Vector<T, size>::initVector()
{
	for(int i=0; i<size; i++)
	{
		cout<<"vector element "<<i+1<<": ";
		cin>>v[i];
	}
}

template<class T, int size>
void Vector<T, size>::multiplyScalar(T scalar)
{
	for(int i=0; i<size; i++)
	{
		v[i]*=scalar;
	}
}

template<class T, int size>
void Vector<T, size>::modifyVector(T value)
{
	int avail=0;
	for(int i=0; i<size; i++)
	{
		if(v[i]==value)
		{
			avail=1;
			cout<<"enter new value: ";
			cin>>v[i];
			break;
		}
	}


	if(avail==0)
	{
		cout<<"\n"<<value<<" is not in the vector.....\n\n";
		cout<<"\nFAILED TO MODIFY VECTOR!!\n\n";
	}
}


template<class T, int size>
void Vector<T, size>::showVector()
{
	cout<<"(";
	for(int i=0; i<size; i++)
	{
		cout<<v[i];
		
		if(i!=size-1)
			cout<<", ";
	}

	cout<<")\n";
}


int main(void)
{
	// VECTORS WITH DIFFERENT SIZES!!
	Vector<float, 5>v1;
	Vector<int, 3>v2;

	int opt, signal=0, value;

	while(1)
	{
		cout<<"\n\n---menu---\n\n";
		cout<<"[1] Create vector.\n";
		cout<<"[2] Modify the value of an element.\n";
		cout<<"[3] Multiply a scalar value.\n";
		cout<<"[4] Display vector.\n";
		cout<<"|5| !Exit!.\n";

		cout<<"[ option ] ";
		cin>>opt;

		switch(opt)
		{
			case 1:
				if(signal==0)
				{
					cout<<"\n\nVector-1:\n\n";
					v1.initVector();
					cout<<"\n\nVector-2:\n\n";
					v2.initVector();
					signal++;
				}

				else
				{
					cout<<"\n\nVECTORS HAVE ALREADY BEEN CREATED!!!\n\n";
				}

				break;

			case 2:
				cout<<"\n\nSelect vector to be modified: ";
				cout<<"\nVector-1.\n";
				cout<<"Vector-2.\n";
				cout<<": ";
				cin>>opt;

				switch(opt)
				{
					case 1:
						cout<<"enter value that needs to be modified: ";
						cin>>value;
						v1.modifyVector(value);
						break;

					case 2:
						cout<<"enter value that needs to be modified: ";
						cin>>value;
						v2.modifyVector(value);
						break;

					default:
						cout<<"\ninvalid option!!\n";
				}

				break;

			case 3:
				cout<<"\n\nSelect vector to be multiplied with scalar: ";
				cout<<"\nVector-1.\n";
				cout<<"Vector-2.\n";
				cout<<": ";
				cin>>opt;

				switch(opt)
				{
					case 1:
						cout<<"enter scalar to be multiplied: ";
						cin>>value;
						v1.multiplyScalar(value);
						break;

					case 2:
						cout<<"enter scalar to be multiplied: ";
						cin>>value;
						v2.multiplyScalar(value);
						break;

					default:
						cout<<"\ninvalid option!!\n";
				}

				break;

			case 4:
				cout<<"\n\nDisplaying vectors.......\n\n";

				v1.showVector();
				v2.showVector();
				break;

			case 5:
				cout<<"\n\nStopping program!!!\n\n";

				return 0;

			default:
				cout<<"\n\nINVALID OPTION!!!\n\n";
		}
	}

	return 0;
}
