/*
#include<iostream.h>
class fraction{
public:
	fraction(int fz=1, int fm=2);
	friend fraction operator+(fraction &f1,fraction &f2);
	friend fraction operator-(fraction &f1,fraction &f2);
	friend fraction operator*(fraction &f1,fraction &f2);
	friend fraction operator/(fraction &f1,fraction &f2);
	friend int operator>(fraction &f1,fraction &f2);
	friend int operator<(fraction &f1,fraction &f2);
	friend int operator>=(fraction &f1,fraction &f2);
	friend int operator<=(fraction &f1,fraction &f2);
	friend int operator==(fraction &f1,fraction &f2);
	friend int operator!=(fraction &f1,fraction &f2);
    friend ostream& operator <<(ostream&, fraction&);
	friend istream& operator >>(istream&, fraction&);
private:
	int fz;
	int fm;
};
fraction::fraction(int n, int m)
{
	int r,n1=n,m1=m;
	do
	{
        r=n1%m1;
	    n1=m1;
	    m1=r;
    }while(r); 
    fz=n/n1; 
    fm=m/n1; 
    if ( fm<0 ){ fz*=-1; fm*=-1; }

}
fraction operator+(fraction &f1,fraction &f2)
{return fraction (f1.fz*f2.fm+f2.fz*f1.fm,f1.fm*f2.fm);}

fraction operator-(fraction &f1,fraction &f2)
{return fraction(f1.fz*f2.fm-f2.fz*f1.fm,f1.fm*f2.fm);}

fraction operator*(fraction &f1,fraction &f2)
{return fraction (f1.fz*f2.fz, f1.fm*f2.fm);}

fraction operator/(fraction &f1,fraction &f2)
{
	return fraction (f1.fz*f2.fm, f1.fm*f2.fz);
}

int operator>(fraction &f1, fraction &f2)
{return (((f1.fz*f2.fm-f1.fm*f2.fz)*f1.fm*f2.fm)>0);}

int operator<(fraction &f1, fraction &f2)
{return (((f1.fz*f2.fm-f1.fm*f2.fz)*f1.fm*f2.fm)<0);}

int operator>=(fraction &f1, fraction &f2)
{return (((f1.fz*f2.fm-f1.fm*f2.fz)*f1.fm*f2.fm)>=0);}

int operator<=(fraction &f1, fraction &f2)
{return (((f1.fz*f2.fm-f1.fm*f2.fz)*f1.fm*f2.fm)<=0);}

int operator==(fraction &f1, fraction &f2)
{return (((f1.fz*f2.fm-f1.fm*f2.fz)*f1.fm*f2.fm)==0);}

int operator!=(fraction &f1, fraction &f2)
{return (((f1.fz*f2.fm-f1.fm*f2.fz)*f1.fm*f2.fm)!=0);}

ostream& operator <<(ostream& output, fraction& f)
{
	if (f.fz==0)
		output<<"0\n";
	else if (f.fm==1)
		output<<f.fz<<endl;
	else output<<f.fz<<"/"<<f.fm<<endl;
	return output;

}
istream& operator >>(istream& input, fraction& f)
{
	char ch;
	input>>f.fz;
	input>>ch;
	if (ch=='/')
		input>>f.fm;
	else
		cerr<<"Illegal input format!";
    if (f.fm<0) { f.fz*=-1;  f.fm*=-1; }
	return input;
}

int main()
{
	fraction f1,f2,f3,f4,f5,f6;
	cout<<"请分别输入分数f1、f2的分子和分母的值："<<endl;
	cin>>f1>>f2;
	cout<<"分数f1为："<<f1;
	cout<<"分数f2为："<<f2;
	f3=f1+f2;
	cout<<"f1+f2="<<f3;
	f4=f1-f2;
	cout<<"f1-f2="<<f4;
	f5=f1*f2;
	cout<<"f1*f2="<<f5;
	f6=f1/f2;
	cout<<"f1/f2="<<f6;
	cout<<"(f1>f2)="<<(f1>f2)<<endl;
	cout<<"(f1<f2)="<<(f1<f2)<<endl;
	cout<<"(f1>=f2)="<<(f1>=f2)<<endl;
	cout<<"(f1<=f2)="<<(f1<=f2)<<endl;
	cout<<"(f1==f2)="<<(f1==f2)<<endl;
	cout<<"(f1!=f2)="<<(f1!=f2)<<endl;
	return 0;
}
*/

#include<iostream.h>
//using namespace std;
class fraction{
public:
	fraction(int fz = 1, int fm = 2);
	friend fraction operator +(fraction& f1, fraction& f2);
	friend fraction operator -(fraction& f1, fraction& f2);
	friend fraction operator *(fraction& f1, fraction& f2);
	friend fraction operator /(fraction& f1, fraction& f2);
	friend int operator >(fraction& f1, fraction& f2);
	friend int operator >=(fraction& f1, fraction& f2);
	friend int operator <(fraction& f1, fraction& f2);
	friend int operator <=(fraction& f1, fraction& f2);
	friend int operator ==(fraction& f1, fraction& f2);
	friend int operator !=(fraction& f1, fraction& f2);
	friend ostream& operator <<(ostream& , fraction& );
	friend istream& operator >>(istream& , fraction& );
private:
	int fz;
	int fm;
};

fraction :: fraction(int m, int n)
{
	int r,n1 = n, m1 = m;
	do
	{
		r = n1 % m1;
		n1 = m1;
		m1 = r;
	}while(r);
	fz=n/n1; 
    fm=m/n1; 
    if ( fm<0 ){ fz*=-1; fm*=-1; }
}
fraction operator +(fraction& f1, fraction& f2)
{
	return fraction(f1.fz*f2.fm+f1.fm*f2.fz, f1.fm*f2.fm);
}
fraction operator -(fraction& f1, fraction& f2)
{
	return fraction(f1.fz*f2.fm-f1.fm*f2.fz, f1.fm*f2.fm);
}
fraction operator *(fraction& f1, fraction& f2)
{
	return fraction(f1.fz*f2.fz, f1.fm*f2.fm);
}
fraction operator /(fraction& f1, fraction& f2)
{
	return fraction(f1.fz*f2.fm, f1.fm*f2.fz);
}
int operator >(fraction& f1, fraction& f2)
{
	return (((f1.fz*f2.fm - f2.fz*f1.fm)*f1.fm*f2.fm) > 0);
}
int operator >=(fraction& f1, fraction& f2)
{
	return (((f1.fz*f2.fm - f2.fz*f1.fm)*f1.fm*f2.fm) >= 0);
}
ostream& operator <<(ostream& out, fraction& f)
{
	if(f.fz == 0)
		out<<"0\n";
	if(f.fm == 1)
		out<<f.fz<<endl;
	else out<<f.fz<<"/"<<f.fm<<endl;
	return out;
}
istream& operator >>(istream& in, fraction& f)
{
	char ch;
	in>>f.fz;
	in>>ch;
	if(ch== '/')
		in>>f.fm;
	else 
		cerr<<"Illegal input format! ";
	if (f.fm<0) { f.fz*=-1;  f.fm*=-1; }
	return in;
}
int main()
{
	fraction f1,f2,f3,f4,f5,f6,f7;
	cout<<"请输入分数:";
	cin>>f1>>f2;
	cout<<"分数分f1="<<f1;
	cout<<"分数分f2="<<f2;
	f3 = f1 + f2;
	cout<<"f1 + f2 ="<<f3;
	f4 = f1 / f2;
	cout<<"f1 / f2 ="<<f4;
}