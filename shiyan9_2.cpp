/*#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
ostream &based(ostream &out)
{
	out.setf(ios::left);
	out<<setw(10)<<dec<<setfill('&');
	out<<setw(10)<<oct<<setfill('&');
	out<<setw(10)<<hex<<setfill('&');
	return out;
}

void main()
{
	int n;
	cin>>n;
	cout<<based<<n<<endl;
}*/

#include<iostream.h>
#include<string>
#include<iomanip.h>
ostream& based(ostream& stream)
{	
	stream.setf(ios::left);
	stream<<" ʮ��������Ϊ:"<<setw(10)<<hex<<setfill('&');
	return stream;
}
int main()
{ 
	int n;
	cout<<"����������n:";
	cin>>n;
	cout<<n;
	cout<<based<<n<<endl;
	return 0;
} 
