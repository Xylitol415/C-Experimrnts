#include<iostream.h>
class complex{
public:
	complex(double r=0.0,double i=0.0);
	friend complex operator+(complex &a,complex &b);
	friend complex operator-(complex &a,complex &b);
	friend complex operator*(complex &a,complex &b);
	friend complex operator/(complex &a,complex &b);
	friend complex operator!(complex &a);
    friend ostream& operator <<(ostream&, complex&);
	friend istream& operator >>(istream&, complex&);
private:
	double real;
	double imag;
};
complex::complex(double r,double i)
{real=r;imag=i;}
complex operator+(complex &a,complex &b)
{return complex (a.real+b.real,a.imag+b.imag);}

complex operator-(complex &a,complex &b)
{return complex(a.real-b.real,a.imag-b.imag);}

complex operator*(complex &a,complex &b)
{return complex (a.real*b.real-a.imag*b.imag,a.real*b.imag+a.imag*b.real);}

complex operator/(complex &a,complex &b)
{
	double t;
	t=1/(b.real*b.real+b.imag*b.imag);
	return complex((a.real*b.real+a.imag*b.imag)*t, (b.real*a.imag-a.real*b.imag)*t);
}
complex operator!(complex &a)
{return complex(a.real , -a.imag);}
ostream& operator <<(ostream& output, complex& com)
{
	output<<com.real;
	if(com.imag>0) 
		output<<"+";
	if(com.imag!=0) 
		output<<com.imag<<"i\n";
	return output;
}
istream& operator >>(istream& input, complex& com)
{
	input>>com.real;
	input>>com.imag;
	return input;
}

int main()
{
	complex A1,A2,A3,A4,A5,A6,A7;
	cout<<"请分别输入复数A1、A2的实部和虚部的值："<<endl;
	cin>>A1>>A2;
	cout<<"复数A1为："<<A1;
	cout<<"复数A2为："<<A2;
	A3=A1+A2;
	cout<<"A1+A2="<<A3;
	A4=A1-A2;
	cout<<"A1-A2="<<A4;
	A5=A1*A2;
	cout<<"A1*A2="<<A5;
	A6=A1/A2;
	cout<<"A1/A2="<<A6;
	A7=!A1;
	cout<<"A1的共轭复数为："<<A7;
	return 0;
}
