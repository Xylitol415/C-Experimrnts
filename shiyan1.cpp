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


								//��a*x^2+b*x+c=0�ڸ������ڵĽ�
/*#include <iostream>
#include <cmath>
using namespace std;
void main()
{
	float a,b,c,disc,x1,x2,realpart,imagpart;
	cout<<"������a, b,c:";
	cin>>a>>b>>c;
	cout<<"�˷���";
	if(fabs(a)<1e-6)
		cout<<"����һԪ���η���!"<<endl;
	else
	{
		disc=b*b-4*a*c;
		if(fabs(disc)<1e-6)
			cout<<"��������ͬ��ʵ��:x1=x2="<<-b/(2*a)<<endl;
		else
			if(disc>1e-6)
			{
				x1=(-b+sqrt(disc))/(2*a);
				x2=(-b-sqrt(disc))/(2*a);
				cout<<"��������ͬ��ʵ��:x1="<<x1<<",x2="<<x2<<endl;
			}
			else
			{
				realpart=-b/(2*a);
				imagpart=sqrt(-disc)/(2*a);
				cout<<"������������:"<<endl;
				cout<<"x1="<<realpart<<"+"<<imagpart<<"i,";
				cout<<"x2="<<realpart<<"-"<<imagpart<<"i"<<endl;
			}
	}
}
*/


/*#include<iostream>				//ʹ������������ɳ�2����
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

/*#include<iostream>					//�����Լ������С������
using namespace std;
void main()
{
	int gcd(int a, int b);
	int lcm(int a, int b);
	int m, n;
	cout<<"������m��n��ֵ:"<<endl;
	cin>>m>>n;
	cout<<m<<"��"<<n<<"�����Լ����"<<gcd(m, n)<<",��С��������"<<lcm(m, n)<<".\n";
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

/*#include<iostream>					//��e��ֵ
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

/*#include<iostream>				//��e��ֵ���ݹ�
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


/*#include<iostream>					//�����ɸ����е���󡢴δ���С�ʹ�С��
using namespace std;
void input(int a[], int n)
{
	int i;
	cout<<"������"<<n<<"������:";
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
	cout<<"������n��ֵ:";
	cin>>n;
	input(a, n);
	sort(a, n);
	cout<<"��Щ����������ʹδ���Ϊ"<<a[n-1]<<"��"<<a[n-2]<<endl;
	cout<<"��Щ������С���ʹ�С��Ϊ"<<a[0]<<"��"<<a[1]<<endl;
}*/