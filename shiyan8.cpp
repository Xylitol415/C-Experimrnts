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
	cout<<"请输入整型数组的元素个数：";
	cin>>n;
	cout<<"请输入整型数组的"<<n<<"个元素："<<endl;
	for(i=0; i<n; i++)
		cin>>int_array[i];
	cout<<"整型数组元素之和："<<sum(int_array, n)<<endl<<endl;
	
	cout<<"请输入单精度型数组的元素个数：";
	cin>>n;
	cout<<"请输入单精度数组的"<<n<<"个元素："<<endl;
	for(i=0; i<n; i++)
		cin>>float_array[i];
	cout<<"单精度型数组元素之和："<<sum(float_array, n)<<endl<<endl;

	cout<<"请输入双精度型数组的元素个数：";
	cin>>n;
	cout<<"请输入双精度数组的"<<n<<"个元素："<<endl;
	for(i=0; i<n; i++)
		cin>>double_array[i];
	cout<<"双精度型数组元素之和："<<sum(double_array, n)<<endl<<endl;
	
	cout<<"请输入字符型数组的元素个数：";
	cin>>n;
	cout<<"请输入字符型数组的"<<n<<"个元素："<<endl;
	for(i=0; i<n; i++)
		cin>>char_array[i];
	cout<<"字符型数组元素之和：";
	for(i=0; i<n; i++)
		cout<<char_array[i];
	cout<<endl;

}
