#include<iostream>
#include<fstream>
#include<string>
using namespace std;
const int N=3;
const int M=5;
struct list
{
	char name[10];
	char id[10];
	float score[M+2];
};

void sort(float a[N][2], float *c, int n)
{
	float t[2];
	int i,j;
	for(i=0; i<n; i++)
		a[i][1]= i;
	for(i=0; i<n-1; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(a[i][0]<a[j][0])
			{
				t[0] = a[i][0]; a[i][0] = a[j][0]; a[j][0] = t[0];
				t[1] = a[i][1]; a[i][1] = a[j][1]; a[j][1] = t[1];
			}
			c[i] = a[i][1];
		}
		c[i] = a[i][1];
	}
}

void main()
{
	float b[N][2], a[N], c[N]={0};
	list list1[N];
	ifstream in("student1.txt", ios::in);
	if(!in)
	{
		cout<<"can not open input file.\n";
		exit(1);
	}
	for(int i=0; i<N; i++)
	{
		in>>list1[i].name;
		in>>list1[i].id;
		for(int j=0; j<M; j++)
			in>>list1[i].score[j];
		list1[i].score[M] = 0;
		for(j=0; j<M; j++)
			list1[i].score[M] += list1[i].score[j];
		list1[i].score[M+1] = list1[i].score[M]/M;
		b[i][0] = list1[i].score[M];
		a[i] = b[i][0];
	}
	in.close();
	ofstream out("student2.txt", ios::out);
	if(!out)
	{
		cout<<"can not open output file.\n";
		exit(1);
	}
	for(i=0; i<N; i++)
		b[i][1] = i;
	sort(b,c,N);
	out<<"姓名\t"<<"学号\t"<<"课程1\t"<<"课程2\t"<<"课程3\t"<<"课程4\t"<<"课程5\t"<<"总成绩\t"<<"平均成绩"<<endl;
	for(i=0; i<N; i++)
	{
		list1[i].score[M] = a[i];
		list1[i].score[M+1] = a[i]/M;
	}
	for(i=0; i<N; i++)   //
	{
		int t=c[i];
		cout<<list1[t].name<<"\t"<<list1[t].id<<"\t";
		out<<list1[t].name<<"\t"<<list1[t].id<<"\t";
		for(int j=0; j<M+2; j++)
		{
			cout<<list1[t].score[j]<<"\t";
			out<<list1[t].score[j]<<"\t";
		}
		out<<endl;
		cout<<endl;
	}
/*	for(i=0; i<N; i++)
	{
		int t=c[i];
		out<<list1[t].name<<"\t"<<list1[t].id<<"\t";
		for(int j=0; j<M+2; j++)
			out<<list1[t].score[j]<<"\t";
		out<<endl;
	}*/
	out.close();
}
