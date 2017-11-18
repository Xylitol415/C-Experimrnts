#include<iostream>
#include<cmath>
using namespace std;
const double PI=3.14;
//Բ�ࣺ
class Circle{
public:
	Circle(int a, int b, int c);
	void init();
	double GetArea(int c);
	double GetPerimeter(int c);
	void show();
	void set(int a, int b, int c);
private:
	int x, y, r;
};
//	double area, perimeter;

//�����ࣺ
class Rectangle{
public:
//	Rectangle();
	Rectangle(int a, int b);
	double GetArea(int a, int b);
	double GetPerimeter(int a, int b);
	void show();
	void set(int a, int b);
private:
	int x, y;
//	double area, perimeter;

};

//�������ࣺ
class Triangle{
public:
	Triangle();
	Triangle(int a1, int b1, int a2, int b2, int a3, int b3);
	double GetArea(int a1, int b1, int a2, int b2, int a3, int b3);
	double GetPerimeter(int a1, int b1, int a2, int b2, int a3, int b3);
	void show();
	void set(int a1, int b1, int a2, int b2, int a3, int b3);	
private:
	int x1, y1, x2, y2, x3, y3;
//	double area, perimeter;
};

//Բ�����еĳ�Ա������
Circle :: Circle(int a, int b, int c)
{ 
//	cout<<"Constructing..."<<endl;
	x = a; y = b; r = c ; 
}
void Circle :: init()
{
	int a, b,  c;
	cout<<"������Բ������Ͱ뾶:";
	cin>>a>>b>>c;
	if(c<=0)
	{
		cout<<"�������!\n";
		return;
	}
	x = a; y = b; r = c ; 
}
double Circle :: GetArea(int c)
{ return PI*r*r; }
double Circle :: GetPerimeter(int c)
{ return 2*PI*r; }
void Circle :: show()
{ 
	cout<<"Բ��Բ������Ϊ:("<<x<<","<<y<<")"
    <<", ֱ��Ϊ:"<<2*r<<", �ܳ�Ϊ:"<<GetPerimeter(r)
	<<" ,���Ϊ:"<<GetArea(r)<<endl;
}
void Circle :: set(int a, int b, int c)
{ x=a; y=b; r=c; }

//�������г�Ա������
/*Rectangle :: Rectangle()
{ x=3; y=5; }*/
Rectangle :: Rectangle(int a=3, int b=4)
{ x=a; y=b; }
double Rectangle :: GetArea(int a, int b)
{ return a*b; }
double Rectangle :: GetPerimeter(int a, int b)
{ return 2*(a+b); }
void Rectangle :: show()
{ 
	cout<<"���εĳ�Ϊ:"<<x<<",��Ϊ:"<<y;
	cout<<", �ܳ�Ϊ:"<<GetPerimeter(x, y);
	cout<<", ���Ϊ:"<<GetArea(x, y)<<endl;
}
void Rectangle :: set(int a, int b)
{ x=a; y=b; } 

//���������еĳ�Ա������
Triangle :: Triangle()
{ x1=0; y1=0; x2=3; y2=0; x3=0; y3=4; }
Triangle :: Triangle(int a1, int b1, int a2, int b2, int a3, int b3)
{ x1=a1; y1=b1; x2=a2; y2=b2; x3=a3; y3=b3; }
double Triangle :: GetArea(int a1, int b1, int a2, int b2, int a3, int b3)
{
	double a, b, c, s;
	a=sqrt((a1-a2)*(a1-a2)+(b1-b2)*(b1-b2));
	b=sqrt((a2-a3)*(a2-a3)+(b2-b3)*(b2-b3));
	c=sqrt((a1-a3)*(a1-a3)+(b1-b3)*(b1-b3));
	s=(a+b+c)/2;
	return sqrt(s*(s-a)*(s-b)*(s-c));
}
double Triangle :: GetPerimeter(int a1, int b1, int a2, int b2, int a3, int b3)
{
	double a, b, c;
	a=sqrt((a1-a2)*(a1-a2)+(b1-b2)*(b1-b2));
	b=sqrt((a2-a3)*(a2-a3)+(b2-b3)*(b2-b3));
	c=sqrt((a1-a3)*(a1-a3)+(b1-b3)*(b1-b3));
	return a+b+c;
}
void Triangle :: show()
{
	cout<<"�����ε�������������Ϊ:("<<x1<<","<<y1<<"),("<<x2<<","<<y2<<"),("<<x3<<","<<y3<<")";
	cout<<", ���Ϊ:"<<GetArea(x1, y1, x2, y2, x3, y3);
	cout<<", �ܳ�Ϊ:"<<GetPerimeter(x1, y1, x2, y2, x3, y3)<<endl;
}
void Triangle :: set(int a1, int b1, int a2, int b2, int a3, int b3)
{
	x1=a1; y1=b1; x2=a2; y2=b2; x3=a3; y3=b3; 
}

int main()
{
	int Ca,Cb,Cr,Ra,Rb,Ta1,Tb1,Ta2,Tb2,Ta3,Tb3,flag;
	double Ta,Tb,Tc;
	cout<<"Բ��(ȱʡ�Ĺ��캯��):\n";
	Circle cir1(0, 0, 0);
	cir1.init();
	cir1.show();
	cout<<"������Ҫ�޸ĵ�ֵ:";
	cin>>Ca>>Cb>>Cr;
	if(Cr<=0)
	{	
		cout<<"�������!\n";
		return 0;
	}
	cir1.set(Ca,Cb,Cr);				//2, 3, 4
	cout<<"�޸ĺ�,";
	cir1.show();
	cout<<"\n������(�������ȱʡ�Ĺ��캯��):\n";
	Rectangle rec1(5, 6);
	cout<<"��������ʵ��ʱ:";
	rec1.show();
	cout<<"����һ��ʵ��ʱ:";
	Rectangle rec2(5);
	rec2.show();
	Rectangle rec3(3, 4);
	cout<<"������ʵ�ζ�����Ĭ��ֵʱ:";
	rec3.show();
	cout<<"������Ҫ�޸ĵ�ֵ:";
	cin>>Ra>>Rb;					//5,6
	if(Ra==0||Rb==0)
	{	
		cout<<"�������!\n";
		return 0;
	}
	rec3.set(Ra, Rb);
	cout<<"�޸ĺ�,";
	rec3.show();			
	cout<<"\n��������(�����޲κʹ��εĹ��캯��):\n";
	Triangle tri1;
	cout<<"�޲�ʱ:";
	tri1.show();
	Triangle tri2(-1, 2, 2, 2, -1, 6);
	cout<<"����ʱ:";
	tri2.show();
	//cout<<"������Ҫ�޸ĵ�ֵ:";
	//cin>>Ta1>>Tb1>>Ta2>>Tb2>>Ta3>>Tb3;
	
	while(flag)
	{
		cout<<"������Ҫ�޸ĵ�ֵ:";
		cin>>Ta1>>Tb1>>Ta2>>Tb2>>Ta3>>Tb3;
		Ta=sqrt((Ta1-Ta2)*(Ta1-Ta2)+(Tb1-Tb2)*(Tb1-Tb2));
		Tb=sqrt((Ta2-Ta3)*(Ta2-Ta3)+(Tb2-Tb3)*(Tb2-Tb3));
		Tc=sqrt((Ta1-Ta3)*(Ta1-Ta3)+(Tb1-Tb3)*(Tb1-Tb3));
		if(Ta+Tb<=Tc||Tc+Tb<=Ta||Ta+Tc<=Tb)
		{	
			cout<<"�������!\n";
			flag=1;
		}
		else
			flag=0;	
	}
	tri2.set(Ta1,Tb1,Ta2,Tb2,Ta3,Tb3);						//1, 3, 2, 4, 5, 6
	cout<<"�޸ĺ�,";
	tri2.show();
	return 0;
}