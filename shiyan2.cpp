/*#include<iostream>			//函数重载求最大数
using namespace std;
int max(int a, int b)
{
	int c;
	c=a>b?a:b;
	return c;
}
float max(float a, float b)
{
	float c;
	c=a>b?a:b;
	return c;
}
double max(double a, double b)
{
	double c;
	c=a>b?a:b;
	return c;
}
int max(int a, int b, int c)
{
	int d,e;
	d=a>b?a:b;
	e=d>c?d:c;
	return e;
}
float max(float a, float b, float c)
{
	float d,e;
	d=a>b?a:b;
	e=d>c?d:c;
	return e;
}
double max(double a, double b, double c)
{
	double d,e;
	d=a>b?a:b;
	e=d>c?d:c;
	return e;
}

void main()
{
	int ia,ib,ic;
	float fa,fb,fc;
	double da,db,dc;
	cout<<"请输入两个整数:";
	cin>>ia>>ib;
	cout<<"最大数为:"<<max(ia,ib)<<endl;
	cout<<"请输入两个单精度数:";
	cin>>fa>>fb;
	cout<<"最大数为:"<<max(fa,fb)<<endl;
	cout<<"请输入两个双精度数:";
	cin>>da>>db;
	cout<<"最大数为:"<<max(da,db)<<endl;
	cout<<"请输入三个整数:";
	cin>>ia>>ib>>ic;
	cout<<"最大数为:"<<max(ia,ib,ic)<<endl;
	cout<<"请输入三个单精度数:";
	cin>>fa>>fb>>fc;
	cout<<"最大数为:"<<max(fa,fb,fc)<<endl;
	cout<<"请输入三个双精度数:";
	cin>>da>>db>>dc;
	cout<<"最大数为:"<<max(da,db,dc)<<endl;
}
*/

#include<iostream>
using namespace std;
void S_shape(int N, int s[])
{
	int i,j,k=1;
	for(i=0; i<N; i++)
	{
		if(i%2==0)
			for(j=N*i; j<(i+1)*N; j++)
				s[j]=k++;
		else
			for(j=(i+1)*N-1; j>i*N-1; j--)
				s[j]=k++;
	}
	cout<<"N="<<N<<"时的S形矩阵:"<<endl;
	for(i=1; i<=N*N; i++)
	{
		cout<<s[i-1]<<"  ";
		if(i%N==0)
			cout<<endl;	
	}

}

void O_shape(int N, int o[100][100])
{
	int i,j,k,l=1;
	for(k=0;k<(N+1)/2;k++)
	{
		 for(i=k;i<N-k;i++)
			o[k][i]=l++;
		 for(i=k+1;i<N-k;i++)
			o[i][N-k-1]=l++;
		 for(i=N-k-2;i>=k;i--)
			o[N-k-1][i]=l++;
		 for(i=N-k-2;i>k;i--)
			o[i][k]=l++;
	}
	cout<<"N="<<N<<"时的回转矩阵:"<<endl;
	for(i=1; i<=N; i++)
	{
		for(j=1; j<=N; j++)
	    cout<<o[i-1][j-1]<<"  ";
	    if(j/N==1)
		cout<<endl;	
	}
}

void main()
{
	int N,*s,(*o)[100];
	cout<<"请输入N的值:";
	cin>>N;
	s=new int [N*N];
	o=new int [100][100];
	if(!s||!o)
		cout<<"申请失败!";
	S_shape(N, s);
	O_shape(N, o);
	delete []s;
	delete []o;
}

/*#include<stdio.h>
void main()
{
	int a[10][10]={0},i,j,k,n,value=1;
	printf("please input n:");
	scanf("%d",&n);
	for(k=0;k<(n+1)/2;k++)
	{
		 for(i=k;i<n-k;i++)
			a[k][i]=value++;
		 for(i=k+1;i<n-k;i++)
			a[i][n-k-1]=value++;
		 for(i=n-k-2;i>=k;i--)
			a[n-k-1][i]=value++;
		 for(i=n-k-2;i>k;i--)
			a[i][k]=value++;
	}
	printf("the array:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%4d",a[i][j]);
		 printf("\n");
	}
}*/



/*#include<iostream>
using namespace std;
void S_shape(int N, int s[])
{
	int i,k,l=1;
	for(k=0; k<(N+1)/2; k++)
	{
		for(i=k; i<N-k; i++)
			s[i]=l++;
		for(i=(k+2)*N-1; i<(N-k)*N-1; i+=N)
			s[i]=l++;
		for(i=(N-k)*N-1; i>(N-k-1)*N-k+1; i--)
			s[i]=l++;
		for(i=(N-k-2)*N; i>(N-k-N/2); i-=5)
			s[i]=l++;
	}
	cout<<"N="<<N<<"时的S形矩阵:"<<endl;
	for(i=1; i<=N*N; i++)
	{
	cout<<s[i-1]<<"  ";
	if(i%N==0)
		cout<<endl;	
	}

}
void main()
{
	int N,*s;
	cout<<"请输入N的值:";
	cin>>N;
	s=new int [N*N];
	if(!s)
		cout<<"申请失败!";
	S_shape(N, s);
	delete []s;

}

/*#include<iostream>
using namespace std;
void O_shape(int N, int o[100][100])
{
	int i,j,k,l=1;
	for(k=0;k<(N+1)/2;k++)
	{
		 for(i=k;i<N-k;i++)
			o[k][i]=l++;
		 for(i=k+1;i<N-k;i++)
			o[i][N-k-1]=l++;
		 for(i=N-k-2;i>=k;i--)
			o[N-k-1][i]=l++;
		 for(i=N-k-2;i>k;i--)
			o[i][k]=l++;
	}
	cout<<"N="<<N<<"时的回转矩阵:"<<endl;
	for(i=1; i<=N; i++)
	{
		for(j=1; j<=N; j++)
	    cout<<o[i-1][j-1]<<"  ";
	    if(j/N==1)
		cout<<endl;	
	}

}
void main()
{
	int N,(*o)[100];
	cout<<"请输入N的值:";
	cin>>N;	
	o=new int[100][100];
	if(!o)
		cout<<"申请失败!";
	O_shape(N, o);
	delete []o;

}*/