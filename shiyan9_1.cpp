
#include<iostream>
using namespace std;
void main()
{
	int i,j;	
	for(i=1; i<=9; i++)
	{	for(j=1; j<=i; j++)
		{
			cout.fill('|');
			cout.width(3);
			cout<<i<<"*"<<j<<"="<<i*j;
		}
		cout<<endl;
	}
		
}

 /*
#include<iostream>
#include<iomanip>
using namespace std;
ostream &output1 (ostream &stream)
{
	stream<<setw(3)<<setfill('|');
	return stream;
}
void main()
{
	int i,j;
	for(i=1; i<=9; i++)
	{	for(j=1; j<=i; j++)
			cout<<output1<<i<<"*"<<j<<"="<<i*j;
		cout<<endl;
	}
		
}*/