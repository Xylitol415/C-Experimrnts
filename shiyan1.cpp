/*   //sum.cpp
#include<iostream>
using namespace std;
int add(int a, int b);
int main()
{
	int x,y,sum;
	cout<<"please input two numbers:"<<endl;
	cin>>x;
	cin>>y;
	sum=add(x,y);
	cout<<"The sum is "<<sum<<endl;
	return 0;
}

int add(int a, int b)
{
	int c;
	c=a+b;
	return c;
}										*/


								//求a*x^2+b*x+c=0在复数域内的解
/*#include <iostream>
#include <cmath>
using namespace std;
void main()
{
	float a,b,c,disc,x1,x2,realpart,imagpart;
	cout<<"请输入a, b,c:";
	cin>>a>>b>>c;
	cout<<"此方程";
	if(fabs(a)<1e-6)
		cout<<"不是一元二次方程!"<<endl;
	else
	{
		disc=b*b-4*a*c;
		if(fabs(disc)<1e-6)
			cout<<"有两个相同的实根:x1=x2="<<-b/(2*a)<<endl;
		else
			if(disc>1e-6)
			{
				x1=(-b+sqrt(disc))/(2*a);
				x2=(-b-sqrt(disc))/(2*a);
				cout<<"有两个不同的实根:x1="<<x1<<",x2="<<x2<<endl;
			}
			else
			{
				realpart=-b/(2*a);
				imagpart=sqrt(-disc)/(2*a);
				cout<<"有两个复数根:"<<endl;
				cout<<"x1="<<realpart<<"+"<<imagpart<<"i,";
				cout<<"x2="<<realpart<<"-"<<imagpart<<"i"<<endl;
			}
	}
}
*/


/*#include<iostream>				//使用内联函数完成乘2功能
using namespace std;
inline int doub(int x);
int main()
{
	for(int i=1; i<=3; i++)
		cout<<i<<" doubled is " <<doub(i)<<endl;
		cout<<"1+2 doubled is "<<doub(1+2)<<endl;
		return 0;
}

inline int doub(int x)
{
	return x*2;
}*/

/*#include<iostream>					//求最大公约数和最小公倍数
using namespace std;
void main()
{
	int gcd(int a, int b);
	int lcm(int a, int b);
	int m, n;
	cout<<"请输入m和n的值:"<<endl;
	cin>>m>>n;
	cout<<m<<"和"<<n<<"的最大公约数是"<<gcd(m, n)<<",最小公倍数是"<<lcm(m, n)<<".\n";
}

int gcd(int a, int b)
{
	int r,t;
	if(a < b)
	{
		t = a;
		a = b;
		b = t;
	}

	while(b != 0)
	{
		r = a % b;
		a = b;
		b = r;
	}
	return(a);
}
int lcm(int a, int b)
{
	return (a*b)/gcd(a,b);
}*/

/*#include<iostream>					//求e的值
using namespace std;
void main()
{
	int a, i, j;
	float e=0;
	for(i=1; i<=100; i++)
	{
		a=1;
		for(j=2; j<=i; j++)
			a*=j;
		e+=1.0/a;
		if(1.0/a < 1e-6)
			break;
	}
	cout<<"e="<<e+1<<endl;
}*/

/*#include<iostream>				//求e的值，递归
using namespace std; 
int fact(int n); 
void main() 
{  
	int i=1;  
	double sum=1,a;  
	do  { 
		a=1.0/fact(i); 
		sum+=a; 
		i++; 
	}while(a>1e-6); 
	cout<<"e="<<sum<<endl; 
}  

int fact(int n) 
{ 
if(n==1) 
return 1;
else 
return fact(n-1)*n; 
}*/


/*#include<iostream>					//求若干个数中的最大、次大、最小和次小数
using namespace std;
void input(int a[], int n)
{
	int i;
	cout<<"请输入"<<n<<"个整数:";
	for(i=0; i<n; i++)
		cin>>a[i];
}

void sort(int a[], int n)
{
	int i, j, k, t;
	for(i=0; i<n-1; i++)
	{
		k=i;
		for(j=i+1; j<n; j++)
			if(a[k]>a[j])
				k=j;
			if(k != i)
			{
				t=a[i];
				a[i]=a[k];
				a[k]=t;
			}
	}
}

void main()
{
	int a[100], n;
	cout<<"请输入n的值:";
	cin>>n;
	input(a, n);
	sort(a, n);
	cout<<"这些数中最大数和次大数为"<<a[n-1]<<"和"<<a[n-2]<<endl;
	cout<<"这些数中最小数和次小数为"<<a[0]<<"和"<<a[1]<<endl;
}*/