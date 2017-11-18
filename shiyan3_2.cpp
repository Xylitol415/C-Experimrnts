#include<iostream>
using namespace std;
class intArray{
public:
	intArray(int *p1, int n1);
	intArray(const intArray &arr);
	~intArray();
	int GetSize(int *p1, int n1);
	int GetAt(int nIndex);
	void SetAt(int nIndex, int newElement);
	void sort(int *p1, int n1);
	void show();
private:
	int *p;
	int n;
};

intArray::intArray(int *p1, int n1)
{
	cout<<"constructing..."<<endl;
	p=&p1[0];
	n=n1;
}
intArray::intArray(const intArray &arr)
{
	p=arr.p;
	n=arr.n+1;
}
intArray::~intArray()
{
	cout<<"destructing..."<<endl;
}
int intArray:: GetSize(int *p1, int n1)
{
	return n1;
}
int intArray::GetAt(int nIndex)
{
	return p[nIndex];
}
void intArray::SetAt(int nIndex, int newElement)
{
	p[nIndex]=newElement;
}
void intArray::sort(int *p1, int n1)
{
	int i, j, t;
    for(i=1;i<=n-1;i++)
       for(j=0;j<=n-i-1;j++)
          if(p[j]>p[j+1])
         {t=p[j]; p[j]=p[j+1]; p[j+1]=t;}
}

void intArray::show()
{
	int i;
	for(i=0; i<n; i++)
		cout<<p[i]<<" ";
	cout<<endl;
}

void main()
{ 
	int i,n;
	cout<<"Please input the length of the array1:";
	cin>>n;
	int *a1 = new int[n]; //{12, 21, 4, -35, 67, 18, -7, 33};
	int *a2 = new int [n+1]; //{12, 21, 4, -35, 67, 18, -7, 33,-3, 41, 23, 55, 69, 125, -78, 0};
	cout<<"Please input "<<n<<" numbers to the array1:";
	for(i=0; i<n; i++)
	{
		cin>>a1[i];
	}
	intArray arr1(&a1[0], n);
	intArray arr2(&a2[0], n+1);
	//intArray arr2(arr1);
	cout<<"The original array is:";
	arr1.show();
	cout<<"The size of the array is:"<<arr1.GetSize(&a1[0], n)<<endl;
	arr1.SetAt(3, 11);
	cout<<"After set a new element, the array is:";
	arr1.show();
	arr1.sort(&a1[0], n);
	cout<<"After sortted, the new array is:";
	arr1.show();
    cout<<"Please input "<<n+1<<" numbers to the array2:";
	for(i=0; i<n+1; i++)
	{
		cin>>a2[i];
	}
	cout<<"The original array is:";
	arr2.show();
	cout<<"The size of the array is:"<<arr2.GetSize(&a2[0],n+1)<<endl;
	arr2.SetAt(3, 11);
	cout<<"After set a new element, the array is:";
	arr2.show();
	arr2.sort(&a2[0], n+1);
	cout<<"After sortted, the new array is:";
	arr2.show();
}


