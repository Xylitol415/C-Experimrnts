#include<iostream>
#include<cmath>
using namespace std;
const float PI = 3.14;
class Point{
public:
	Point()
	{
    	int a, b;
		cout<<"�����������꣺";
		cin>>x>>y;
		x = a;
		y = b;
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
	Line()
	{ 
		Point Pa1, Pb1;
		Pa = Pa1; 
		Pb = Pb1;
	}
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
	if(Pa.getX() == Pb.getY())
		cout<<"��ֱ��б�ʲ����ڣ�"<<endl;
	else return (float)((Pb.getY()-Pa.getY())/(Pb.getX()-Pa.getX()));
}

class Circle : public Point{
public:
	Circle()
	{ 
		float r1;
		cout<<"������Բ�İ뾶��";
		cin>>r;
		r = r1; 
	}
	float getArea()
	{ return PI*r; }
	float getR()
	{ return r; }
private:
	float r;
};

class Cylinder : public Circle{
public:
	Cylinder()
	{
		Circle c1;
		float h1;
		cout<<"������Բ���ĸߣ�";
		cin>>h;
		c = c1;
		h = h1;
	}
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
	Spheroid()
	{ 
		float R1;
		cout<<"��������İ뾶��";
		cin>>R;
		R = R1; 
	}
	float getSpheroidS()
	{ return 4*PI*R*R; }
	float getSpheroidV()
	{ return (float)(4*PI*R*R/3);}
private:
	float R;
};

void main()
{
/*	int x1, y1, x2, y2, r1, r2, r3;
	cout<<"����������������꣺";
	cin>>x1>>y1>>x2>>y2;
	cout<<"������Բ�İ뾶��";
	cin>>r1;
	cout<<"������Բ���ĵ���뾶��";
	cin>>r2;
	cout<<"��������İ뾶��";
	cin>>r3;*/
//	Point Pa;//(x1, y1);
//	Point Pb;//(x2, y2);
	Line AB;//(Pa, Pb);
	cout<<"ֱ�߳���Ϊ��"<<AB.lineLength()<<"\tֱ�ߵ�б��Ϊ��"<<AB.lineSlope()<<endl;
	Circle cir;//(r1);
	cout<<"Բ�İ뾶Ϊ��"<<cir.getR()<<"\tԲ�����Ϊ��"<<cir.getArea()<<endl;
	Cylinder cyl;//(cir, r2);
	cout<<"Բ���ı����Ϊ��"<<cyl.getCylinderS()<<"\tԲ�������Ϊ��"<<cyl.getCylinderV()<<endl;
	Spheroid sph;//(r3);
	cout<<"��ı����Ϊ��"<<sph.getSpheroidS()<<"\t������Ϊ��"<<sph.getSpheroidV()<<endl;
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
	float GetLineLengh();//��ȡֱ�߳���
	float GetLineAscent();//��ȡֱ��б��
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
	cout<<"б�ʲ�����"<<endl;
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
	cout<<"ֱ�߳���Ϊ��"<<ab.GetLineLengh()<<"\tб��Ϊ��"<<ab.GetLineAscent()<<endl;
	Circle cir(2);
	cout<<"Բ�뾶Ϊ"<<cir.GetRadius()<<"\tԲ���Ϊ��"<<cir.GetCircleS()<<endl;
	Cylinder cyl(cir,6);
	cout<<"Բ���ı����Ϊ��"<<cyl.GetCylinderS()<<"\tԲ�������Ϊ: "<<cyl.GetCylinderV()<<endl;
	Spheroid sph(2);
cout<<"��ı����Ϊ��"<<sph.GetSpheroidS()<<"\t������Ϊ: "<<sph.GetSpheroidV()<<endl;
	system("pause");
    
} 
*/
	


