#include<iostream>
#include<cmath>
using namespace std;
const float PI = 3.14;
class Point{
public:
	Point(){}
	Point(int a, int b)
	{	x = a;
		y = a;
	}
	int getX()
	{ return x; }
	int getY()
	{ return y; }
private:
	int x;
	int y;
};

class Line : public Point{
public:
	Line(){}
	Line(Point Pa1, Point Pb1)
	{ Pa = Pa1; Pb = Pb1; }
	~Line(){}
	float lineLength();
	float lineSlope();
private:
	Point Pa;
	Point Pb;
};

float Line :: lineLength()
{
	int xx = (abs(Pb.getX()-Pa.getX()))*(abs(Pb.getX()-Pa.getX()));
	int yy = (abs(Pb.getY()-Pa.getY()))*(abs(Pb.getY()-Pa.getY()));
	return sqrt((float)(xx+yy));
}

float Line :: lineSlope()
{
	if(Pa.getX() == Pb.getX())
		cout<<"该直线斜率不存在！"<<endl;
	else return (float)((Pb.getY()-Pa.getY())/(Pb.getX()-Pa.getX()));
}

class Circle : public Point{
public:
	Circle(){}
	Circle(float r1)
	{ r = r1; }
	~Circle(){}
	float getArea()
	{ return PI*r; }
	float getR()
	{ return r; }
private:
	float r;
};

class Cylinder : public Circle{
public:
	Cylinder(){}
	Cylinder(Circle& c1, float h1)
	{
		c = c1;
		h = h1;
	}
	~Cylinder(){}
	float getCylinderS()
	{ return 2*PI*c.getR()*h+2*PI*c.getR()*c.getR(); }
	float getCylinderV()
	{ return (float)PI*c.getR()*c.getR()*h; }
private:
	Circle c;
	float h;
};

class Spheroid : public Circle{
public:
	Spheroid(){}
	Spheroid(float R1)
	{ R = R1; }
	~Spheroid(){}
	float getSpheroidS()
	{ return 4*PI*R*R; }
	float getSpheroidV()
	{ return (float)(4*PI*R*R/3);}
private:
	float R;
};

void main()
{
	int x1, y1, x2, y2, r1, r2, r3;
	cout<<"请输入两个点的坐标：";
	cin>>x1>>y1>>x2>>y2;
	cout<<"请输入圆的半径：";
	cin>>r1;
	cout<<"请输入圆柱的底面半径：";
	cin>>r2;
	cout<<"请输入球的半径：";
	cin>>r3;
	Point Pa(x1, y1);
	Point Pb(x2, y2);
	Line AB(Pa, Pb);
	cout<<"直线长度为："<<AB.lineLength()<<"\t直线的斜率为："<<AB.lineSlope()<<endl;
	Circle cir(r1);
	cout<<"圆的半径为："<<cir.getR()<<"\t圆的面积为："<<cir.getArea()<<endl;
	Cylinder cyl(cir, r2);
	cout<<"圆柱的表面积为："<<cyl.getCylinderS()<<"\t圆柱的体积为："<<cyl.getCylinderV()<<endl;
	Spheroid sph(r3);
	cout<<"球的表面积为："<<sph.getSpheroidS()<<"\t球的体积为："<<sph.getSpheroidV()<<endl;
}

 
/*
#include <iostream>
using namespace std;
#include <cmath>
class Point 
{
	int x;
	int y;

public:
	Point(){}
	Point(int xx,int yy){x = xx;y = yy;}
	~Point(){}
	int X(){return x;}
	int Y(){return y;}

};
class Line :public Point
{
	Point Pa;
	Point Pb;

public:
	Line(){}
	Line(Point pa,Point pb){Pa = pa;Pb = pb;};
	float GetLineLengh();//获取直线长度
	float GetLineAscent();//获取直线斜率
};

float Line::GetLineLengh()
{
	int Lx = (abs(Pb.X()-Pa.X()))*(abs(Pb.X()-Pa.X()));
	int Ly = (abs(Pb.Y()-Pa.Y()))*(abs(Pb.Y()-Pa.Y()));
	return sqrt((float)(Lx+Ly));
}
float Line::GetLineAscent()
{
	if(Pa.X() == Pb.X())
	{
	cout<<"斜率不存在"<<endl;
	}
	else return (float) (Pb.Y()-Pa.Y())/(Pb.X()-Pa.X());
}

class Circle : public Point
{
	float Radius;
public:
	Circle(){}
	Circle(float Rr){Radius = Rr;}
	~Circle(){}
	float GetCircleS(){return (float)3.14*Radius;}
	float GetRadius(){return (float)Radius;}
};
class Cylinder :public Circle
{
	float High;
	Circle Cir;
public:
	Cylinder(){}
	Cylinder(Circle& cir,float high){Cir = cir;High = high;}
	~Cylinder(){}
	float GetCylinderS(){return (float)2*3.14*Cir.GetRadius()*High+2*3.14*Cir.GetRadius();}
	float GetCylinderV(){return (float)3.14*Cir.GetRadius()*Cir.GetRadius()*High;}
};
class Spheroid : public Circle
{
	float RR;
public:
	Spheroid(){}
	Spheroid(float rr){RR = rr;}
	~Spheroid(){}
	float GetSpheroidS(){return (float)4*3.14*RR*RR; }
	float GetSpheroidV(){return (float)4*3.14*RR*RR*RR/3; }

};
int main()
{ 
	Point Pa(1,2);
	Point Pb(1,5);
	Line ab(Pa,Pb);
	cout<<"直线长度为："<<ab.GetLineLengh()<<"\t斜率为："<<ab.GetLineAscent()<<endl;
	Circle cir(2);
	cout<<"圆半径为"<<cir.GetRadius()<<"\t圆面积为："<<cir.GetCircleS()<<endl;
	Cylinder cyl(cir,6);
	cout<<"圆柱的表面积为："<<cyl.GetCylinderS()<<"\t圆柱的体积为: "<<cyl.GetCylinderV()<<endl;
	Spheroid sph(2);
cout<<"球的表面积为："<<sph.GetSpheroidS()<<"\t球的体积为: "<<sph.GetSpheroidV()<<endl;
	system("pause");
    
} 
*/
	


