#include<iostream>
using namespace std;
template <typename AT>
AT sum(AT *array, int size=0)
{
	AT total = 0;
	for(int i=0; i<size; i++)	
	{if(array[i] >= 'a' && array[i] <= 'z')
			total =1;
	else
     total += array[i];
	}   
	return total;
}

void main()
{
	int i, n;
	int int_array[100];
	float float_array[100];
	double double_array[100];
	char char_array[100];
	cout<<"���������������Ԫ�ظ�����";
	cin>>n;
	cout<<"���������������"<<n<<"��Ԫ�أ�"<<endl;
	for(i=0; i<n; i++)
		cin>>int_array[i];
	cout<<"��������Ԫ��֮�ͣ�"<<sum(int_array, n)<<endl<<endl;
	
	cout<<"�����뵥�����������Ԫ�ظ�����";
	cin>>n;
	cout<<"�����뵥���������"<<n<<"��Ԫ�أ�"<<endl;
	for(i=0; i<n; i++)
		cin>>float_array[i];
	cout<<"������������Ԫ��֮�ͣ�"<<sum(float_array, n)<<endl<<endl;

	cout<<"������˫�����������Ԫ�ظ�����";
	cin>>n;
	cout<<"������˫���������"<<n<<"��Ԫ�أ�"<<endl;
	for(i=0; i<n; i++)
		cin>>double_array[i];
	cout<<"˫����������Ԫ��֮�ͣ�"<<sum(double_array, n)<<endl<<endl;
	
	cout<<"�������ַ��������Ԫ�ظ�����";
	cin>>n;
	cout<<"�������ַ��������"<<n<<"��Ԫ�أ�"<<endl;
	for(i=0; i<n; i++)
		cin>>char_array[i];
	cout<<"�ַ�������Ԫ��֮�ͣ�";
	for(i=0; i<n; i++)
		cout<<char_array[i];
	cout<<endl;

}
