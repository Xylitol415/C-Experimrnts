#include<iostream>
#include<cmath>
using namespace std;
const double PI=3.14;
//圆类：
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

//矩形类：
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

//三角形类：
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

//圆中类中的成员函数：
Circle :: Circle(int a, int b, int c)
{ 
//	cout<<"Constructing..."<<endl;
	x = a; y = b; r = c ; 
}
void Circle :: init()
{
	int a, b,  c;
	cout<<"请输入圆心坐标和半径:";
	cin>>a>>b>>c;
	if(c<=0)
	{
		cout<<"输入错误!\n";
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
	cout<<"圆的圆心坐标为:("<<x<<","<<y<<")"
    <<", 直径为:"<<2*r<<", 周长为:"<<GetPerimeter(r)
	<<" ,面积为:"<<GetArea(r)<<endl;
}
void Circle :: set(int a, int b, int c)
{ x=a; y=b; r=c; }

//矩形类中成员函数：
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
	cout<<"矩形的长为:"<<x<<",宽为:"<<y;
	cout<<", 周长为:"<<GetPerimeter(x, y);
	cout<<", 面积为:"<<GetArea(x, y)<<endl;
}
void Rectangle :: set(int a, int b)
{ x=a; y=b; } 

//三角形类中的成员函数：
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
	cout<<"三角形的三个顶点坐标为:("<<x1<<","<<y1<<"),("<<x2<<","<<y2<<"),("<<x3<<","<<y3<<")";
	cout<<", 面积为:"<<GetArea(x1, y1, x2, y2, x3, y3);
	cout<<", 周长为:"<<GetPerimeter(x1, y1, x2, y2, x3, y3)<<endl;
}
void Triangle :: set(int a1, int b1, int a2, int b2, int a3, int b3)
{
	x1=a1; y1=b1; x2=a2; y2=b2; x3=a3; y3=b3; 
}

int main()
{
	int Ca,Cb,Cr,Ra,Rb,Ta1,Tb1,Ta2,Tb2,Ta3,Tb3,flag;
	double Ta,Tb,Tc;
	cout<<"圆类(缺省的构造函数):\n";
	Circle cir1(0, 0, 0);
	cir1.init();
	cir1.show();
	cout<<"请输入要修改的值:";
	cin>>Ca>>Cb>>Cr;
	if(Cr<=0)
	{	
		cout<<"输入错误!\n";
		return 0;
	}
	cir1.set(Ca,Cb,Cr);				//2, 3, 4
	cout<<"修改后,";
	cir1.show();
	cout<<"\n矩形类(定义参数缺省的构造函数):\n";
	Rectangle rec1(5, 6);
	cout<<"传递两个实参时:";
	rec1.show();
	cout<<"传递一个实参时:";
	Rectangle rec2(5);
	rec2.show();
	Rectangle rec3(3, 4);
	cout<<"不传递实参而采用默认值时:";
	rec3.show();
	cout<<"请输入要修改的值:";
	cin>>Ra>>Rb;					//5,6
	if(Ra==0||Rb==0)
	{	
		cout<<"输入错误!\n";
		return 0;
	}
	rec3.set(Ra, Rb);
	cout<<"修改后,";
	rec3.show();			
	cout<<"\n三角形类(定义无参和带参的构造函数):\n";
	Triangle tri1;
	cout<<"无参时:";
	tri1.show();
	Triangle tri2(-1, 2, 2, 2, -1, 6);
	cout<<"带参时:";
	tri2.show();
	//cout<<"请输入要修改的值:";
	//cin>>Ta1>>Tb1>>Ta2>>Tb2>>Ta3>>Tb3;
	
	while(flag)
	{
		cout<<"请输入要修改的值:";
		cin>>Ta1>>Tb1>>Ta2>>Tb2>>Ta3>>Tb3;
		Ta=sqrt((Ta1-Ta2)*(Ta1-Ta2)+(Tb1-Tb2)*(Tb1-Tb2));
		Tb=sqrt((Ta2-Ta3)*(Ta2-Ta3)+(Tb2-Tb3)*(Tb2-Tb3));
		Tc=sqrt((Ta1-Ta3)*(Ta1-Ta3)+(Tb1-Tb3)*(Tb1-Tb3));
		if(Ta+Tb<=Tc||Tc+Tb<=Ta||Ta+Tc<=Tb)
		{	
			cout<<"输入错误!\n";
			flag=1;
		}
		else
			flag=0;	
	}
	tri2.set(Ta1,Tb1,Ta2,Tb2,Ta3,Tb3);						//1, 3, 2, 4, 5, 6
	cout<<"修改后,";
	tri2.show();
	return 0;
}