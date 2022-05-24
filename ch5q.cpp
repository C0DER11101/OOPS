#include<iostream>

using namespace std;

class matrix
{
	int m[3][3];

	public:
	void read();
	void display();
	void trans(); // to find  transpose of a matrix!!
	friend matrix mult(matrix, matrix); // to multiply two matrices!!!
};

void matrix::read()
{
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
			cin>>m[i][j];
	}
}

void matrix::display()
{
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
			cout<<m[i][j]<<" ";
		cout<<"\n";
	}
}

void matrix::trans()
{
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
			cout<<m[j][i]<<" ";
		cout<<"\n";
	}
}

matrix mult(matrix m1, matrix m2)
{
	matrix m3;

	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			m3.m[i][j]=0;

			for(int k=0; k<3; k++)
			{
				m3.m[i][j]+=m1.m[i][k]*m2.m[k][j];
			}
		}
	}

	return m3;
}

int main(void)
{
	matrix m1, m2;

	cout<<"enter values into matrix 1:\n\n";

	m1.read();

	cout<<"enter values into matrix 1:\n\n";

	m2.read();

	cout<<"MATRIX-1:\n\n";

	m1.display();

	cout<<"MATRIX-2:\n\n";

	m2.display();

	cout<<"\n\nMATRIX-1:\n\n";
	cout<<"Transpose:\n\n";

	m1.trans();

	cout<<"\n\nMATRIX-1:\n\n";
	cout<<"Transpose:\n\n";
	m2.trans();

	cout<<"Multiplying matrix-1 with matrix-2:\n\n";
	matrix m3;
	m3=mult(m1, m2);

	cout<<"\n\nRESULTANT MATRIX:\n\n\n";
	m3.display();

	return 0;
}
