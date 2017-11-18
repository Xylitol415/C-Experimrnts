#include<iostream>
#include<string>
using namespace std;
class Date{
public:
	Date()
	{
		int y, m, d;
		cout<<"请输入职工的出生日期：";
		cin>>y>>m>>d;
		year = y;
		month = m;
		day = d;
	}
	void show()
	{ 
		cout<<"出生日期: "<<year<<"年"<<month<<"月"<<day<<"日"<<endl;
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
		cout<<"请输入职工的姓名和性别：";
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
		cout<<"姓名: "<<name<<endl;
		cout<<"性别: "<<sex<<endl;
		date1.show();
	}

class Employee : public Person{
public:
	Employee()
	  {
		 
		  string num1, pos1;
		  cout<<"请输入职工的编号和职务：";
		  cin>>num1>>pos1;
		  num = num1;
		  pos = pos1;
	  }
	  void show()
	  {
		  Person :: show();
		  cout<<"编号: "<<num<<endl;
		  cout<<"职位: "<<pos<<endl;
		  cout<<"薪水: "<<sal<<endl;
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
			cout<<"请输入职工的工作时间：";
			cin>>time1;
			time = time1;
	     	setSalary(25*time);
		}
		void show()
		{
			Employee :: show();
			cout<<"工作时间: "<<time<<endl;
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
		cout<<"请输入职工的部门和销售额：";
		cin>>par1>>sales1;
		sales = sales1;
		par = par1;
		setSalary(sales*0.04);
	}
	void show()
	{
		Employee :: show();
		cout<<"部门: "<<par<<endl;
		cout<<"销售额: "<<sales<<endl;
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
	cout<<"技术人员：\n";
	Technician t1;
	cout<<"销售员：\n";
	Saleman s1;
	cout<<"销售经理：\n";
    Salesmanager s2;
	cout<<"经理：\n";
	Manager m1;
	t1.show();
	s1.show();
	s2.show();
	m1.show();
}

	