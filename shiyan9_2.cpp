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
	stream<<" 十六进制数为:"<<setw(10)<<hex<<setfill('&');
	return stream;
}
int main()
{ 
	int n;
	cout<<"请输入整数n:";
	cin>>n;
	cout<<n;
	cout<<based<<n<<endl;
	return 0;
} 
