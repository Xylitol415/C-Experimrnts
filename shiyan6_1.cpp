#include<iostream>
#include<cmath>
const double pi=3.14;
using namespace std;
class Figure{
public:
	virtual void perimeter()=0;
	virtual void area()=0;
	virtual void volume()=0;
};
class Point:public Figure{
public:
	Point(double a,double b)
	{
		x=a;
		y=b;
	}
	void perimeter(){}
	void area(){}
	void volume(){}
protected:
	double x,y;
};
class Line:public Point{
public:
	Line(double a,double b,double c,double d):Point(0,0)
	{
		x1=a;
		y1=b;
		x2=c;
		y2=d;
	}
	void linelength()
	{
		double l,s;
		s=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
		l=sqrt(s);
		cout<<"ֱ�ߵĳ���Ϊ:"<<l<<"\t";
	}
	void lineslope()
	{
		double k;
		k=(y1-y2)/(x1-x2);
		cout<<"ֱ�ߵ�б��Ϊ:"<<k<<endl;
	}
protected:
	double x1,x2,y1,y2;
};
class Circle:public Point{
public:
	Circle(double a):Point(0,0)
	{
		r=a;
	}
	void area()
	 {
		 double S;
		 S=pi*r*r;
		 cout<<"Բ�����Ϊ��"<<S<<endl;
	 }
protected:
	double r;
};
class Cylinder:public Circle{
public:
	Cylinder(double a,double b):Circle(1)
	{
		r=a;
		h=b;
	}
	void area()
	{
		cout<<"Բ����ĵı����Ϊ��"<<2*pi*r*r+2*pi*r*h<<"\t";
	}
	void volume()
	{
		cout<<"���Ϊ��"<<pi*r*r*h<<endl;
	}
protected:
	double r,h;
};
class Spheroid:public Circle{
public:
	Spheroid(double a):Circle(1)
	{
		r=a;
	}
	void area()
	{
		cout<<"����ĵı����Ϊ��"<<4*pi*r*r<<"\t";
	}
	void volume()
	{
		cout<<"���Ϊ��"<<pi*r*r*r*4/3<<endl;
	}
protected:
	double r;
};
class Rectangle:public Line{
public:
	Rectangle(double a,double b):Line(0,0,0,0)
	{
		x=a;
		y=b;
	}
	void perimeter()
	{
		cout<<"�����ε��ܳ�Ϊ:"<<2*(x+y)<<"\t";
	}
	void area()
	{
		cout<<"���Ϊ:"<<x*y<<endl;
	}
};
class Squre:public Line{
public:
	Squre(double a):Line(0,0,0,0)
	{
		x=a;
	}
	void perimeter()
	{
		cout<<"�����ε��ܳ�Ϊ:"<<4*x<<"\t";
	}
	void area()
	{
		cout<<"���Ϊ:"<<x*x<<endl;
	}
};
class Cuboid:public Rectangle{
public:
	Cuboid(double a,double b,double c):Rectangle(1,1)
	{
		x=a;
		y=b;
		z=c;
	}
	void area()
	{
		cout<<"������ı����Ϊ:"<<2*(x*y+x*z+y*z)<<"\t";
	}
	void volume()
	{
		cout<<"���Ϊ��"<<x*y*z<<endl;
	}
protected:
	double x,y,z;
};
class SquareBody:public Squre{
public:
	SquareBody(double a):Squre(1)
	{
		x=a;
	}
	void area()
	{
		cout<<"������ı����Ϊ:"<<6*x*x<<"\t";
	}
	void volume()
	{
		cout<<"���Ϊ��"<<x*x*x<<endl;
	}
protected:
	double x;
};
int main()
{
	Figure *p;
	Point Po(0.0,0.0);
	Line Li(1.0,3.0,2.0,5.0);
	Li.linelength();
	Li.lineslope();
	Circle Ci(2.0);
	Cylinder Cy(2.0,3.0);
	Spheroid Sp(2.0);
	Rectangle Re(1.0,2.0);
	Squre Sq(2.0);
	Cuboid Cu(2.0,3.0,4.0);
	SquareBody SqB(5.0);
	p=&Ci;
	p->area();
	p=&Cy;
	p->area();
	p->volume();
	p=&Sp;
	p->area();
	p->volume();
	p=&Re;
	p->perimeter();
	p->area();
	p=&Sq;
	p->perimeter();
	p->area();
	p=&Cu;
	p->area();
	p->volume();
	p=&SqB;
	p->area();
	p->volume();
	return 0;
}

