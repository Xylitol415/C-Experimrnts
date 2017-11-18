#include<iostream>
#include<string>
using namespace std;
class Date{
public:
	Date()
	{
		int y, m, d;
		cout<<"������ְ���ĳ������ڣ�";
		cin>>y>>m>>d;
		year = y;
		month = m;
		day = d;
	}
	void show()
	{ 
		cout<<"��������: "<<year<<"��"<<month<<"��"<<day<<"��"<<endl;
	}
protected:
	int year;
	int month;
	int day;
};

class Person{
public:
	Person()
	{
		string name1;
		char sex1;
		cout<<"������ְ�����������Ա�";
    	cin>>name1>>sex1;
		name = name1;
		sex = sex1;
	}
	void show();
protected:
	string name;
	char sex;
	Date date1;
};


void Person :: show()
	{
		cout<<"---------------------------------------------\n";
		cout<<"����: "<<name<<endl;
		cout<<"�Ա�: "<<sex<<endl;
		date1.show();
	}

class Employee : public Person{
public:
	Employee()
	  {
		 
		  string num1, pos1;
		  cout<<"������ְ���ı�ź�ְ��";
		  cin>>num1>>pos1;
		  num = num1;
		  pos = pos1;
	  }
	  void show()
	  {
		  Person :: show();
		  cout<<"���: "<<num<<endl;
		  cout<<"ְλ: "<<pos<<endl;
		  cout<<"нˮ: "<<sal<<endl;
	  }
	  void setSalary(float sal1)
	  {
		sal = sal1;
	  }
protected:
	string num;
	string pos;
	float sal;
};



class Technician : public Employee{
public:
	Technician()
		{
			float time1;
			cout<<"������ְ���Ĺ���ʱ�䣺";
			cin>>time1;
			time = time1;
	     	setSalary(25*time);
		}
		void show()
		{
			Employee :: show();
			cout<<"����ʱ��: "<<time<<endl;
		}
protected:
	float time;
};

class Manager : virtual public Employee{
public:
	Manager()
	  { setSalary(8000); } 
	  void show()
	  {
		  Employee :: show();
	  }
};

class Saleman : virtual public Employee{
public:
	Saleman()
	{
		float sales1;
		string par1;
		cout<<"������ְ���Ĳ��ź����۶";
		cin>>par1>>sales1;
		sales = sales1;
		par = par1;
		setSalary(sales*0.04);
	}
	void show()
	{
		Employee :: show();
		cout<<"����: "<<par<<endl;
		cout<<"���۶�: "<<sales<<endl;
	}
	float getSales()
	{
		return sales;
	}
protected:
	float sales;
	string par;
};

class Salesmanager : public Manager, public Saleman{
public:
	Salesmanager()
	  { setSalary(5000 + getSales()*0.005); }
	  void show()
	  {
		  Saleman :: show();
	  }
};


void main()
{
	cout<<"������Ա��\n";
	Technician t1;
	cout<<"����Ա��\n";
	Saleman s1;
	cout<<"���۾���\n";
    Salesmanager s2;
	cout<<"����\n";
	Manager m1;
	t1.show();
	s1.show();
	s2.show();
	m1.show();
}

	