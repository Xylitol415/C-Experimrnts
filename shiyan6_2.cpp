/*
#include<iostream> 
#include<string> 
using namespace std; 
class employee{ 
public:   
virtual void pay()=0;  
virtual void display()=0;  
void employee1()  
{   
cout<<"输入姓名:";
cin>>name;   
cout<<"输入性别:";
cin>>sex;    
cout<<"输入出生日期：";   
cin>>year>>month>>day;   
cout<<"输入编号:";
cin>>id;
salary=0;  
}  
void display()  
{   
cout<<"姓名："<<name<<endl;   
cout<<"性别："<<sex<<endl;   
cout<<"出生日期："<<year<<"年"<<month<<"月"<<day<<"日"<<endl;   
cout<<"编号："<<id<<endl;  
} 
protected:  
string id,name,sex; 
int year,month,day;  
float salary; 
}; 

 
class manager:public employee{ 
public:  
void pay()  
{   employee1();  }  
void display()  
{   display();   
cout<<"职位：总经理"<<endl;   
cout<<"固定月薪：8000元"<<endl; 
 } 
};

 
class technician:public employee{ 
public:  void pay()  
{ employee1();   
cout<<"输入工作时间:";
cin>>worktime;   
salary=25*worktime;  
}  
void display()  
{   display();   
cout<<"职位：技术人员"<<endl;  
cout<<"工作时间："<<worktime<<"h"<<endl;   
cout<<"月薪："<<salary<<"元"<<endl;  
} 
protected:  
double worktime; 
}; 
 
class saleman:public employee{ 
public:  void pay()  
{   
employee1();  
cout<<"输入销售额:";
cin>>sale;   
cout<<"输入所属部门:";
cin>>department;   
salary=sale*0.04;  
}  
void display()  
{   
display();   
cout<<"职位：推销员"<<endl;   
cout<<"销售额："<<sale<<endl;   
cout<<"所属部门："<<department<<endl;   
cout<<"月薪:"<<salary<<"元"<<endl;  
} 
protected:  
int sale;  
string department;
}; 

class salesmanager:public employee{ 
public:  void pay()  
{   
employee1(); 
cout<<"输入销售额:";cin>>sale;   
salary=(5000+sale*0.005);  
} 
void display()  
{   
display();   
cout<<"职位：销售经理"<<endl;  
cout<<"月薪："<<salary<<"元"<<endl;  
} 
protected: 
int sale; 
}; 

int main()
{  
int i;  
cout<<"        小型公司人员管理系统        "<<endl;  
cout<<"    1.总经理  "<<endl;  
cout<<"    2.技术人员  "<<endl;  
cout<<"    3.推销员  "<<endl;  
cout<<"    4.销售经理  "<<endl;  
while(1)  
{   
cin>>i;   
switch(i)   
{
   case 1:{   	 
		manager s1;    
	     	cout<<"请输入一个经理的信息:"<<endl;    
		s1.pay();    cout<<endl;    
		cout<<"一个经理manager的信息:"<<endl;    
		s1.display();    
		cout<<endl<<endl;    
	 	break;       
	   }   
case 2:{    
		technician s2;    
		cout<<"请输入一个技术人员的信息:"<<endl;    
		s2.pay();    
		cout<<endl;    
		cout<<"一个技术人员technician的信息:"<<endl;    
		s2.display();
		cout<<endl<<endl;    
		break;       
	}   
case 3:{ 
   	saleman s3;    
		cout<<"请输入一个推销员的信息:"<<endl;    
		s3.pay();    
		cout<<endl;   
		cout<<"一个推销员saleman的信息:"<<endl;    
		s3.display();
		cout<<endl<<endl;    
		break;       
	}   
case 4:{   
		salesmanager s4;    
		cout<<"请输入一个销售经理的信息:"<<endl;    
		s4.pay();    
		cout<<endl;    
		cout<<"一个销售经理salesmanager的信息:"<<endl;    
		s4.display();
		cout<<endl<<endl;    	
		break;      
 	}   
}  
}   
return 0; 

} 
*/



	
#include<iostream>
#include<string>
using namespace std;
class Date{
public:
	Date()
	{
		int y, m, d;
		cout<<"请输入员工的出生日期：";
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
		cout<<"请输入员工的姓名和性别：";
    	cin>>name1>>sex1;
		name = name1;
		sex = sex1;
	}
	void show()
	{
		cout<<"---------------------------------------------\n";
		cout<<"姓名: "<<name<<endl;
		cout<<"性别: "<<sex<<endl;
		date1.show();
	}

protected:
	string name;
	char sex;
	Date date1;
};

	
class Employee : public Person{
public:
	Employee()
	  {
		  string num1, pos1;
		  cout<<"请输入员工的编号和职务：";
		  cin>>num1>>pos1;
		  num = num1;
		  pos = pos1;
	  }
	  virtual float pay() = 0;
	  virtual void display() = 0;
	  virtual void promote()
	  {
		  cout<<"There is no complete kind of employee.\n";
		  /*int i;
		  string new_pos1;
	      cout<<"员工是否被升职(1、是，0、否):";
		  cin>>i;
		  if(i == 1)
		  {
		        cout<<"请输入员工的新职务: ";
				cin>>new_pos1;
				new_pos = new_pos1;
		  }*/
	  }
	  void show()
	  {
		  Person :: show();
		  cout<<"编号: "<<num<<endl;
		  cout<<"职位: "<<pos<<endl;
	  }
protected:
	string num;
	string pos;
	string new_pos;
	float sal;
};



class Technician : public Employee{
public:
	Technician()
		{
			float time1;
			cout<<"请输入员工的工作时间：";
			cin>>time1;
			time = time1;
			promote();
		}
	    float pay()
		{
			return 25*time;
		}
		void promote()
		{
			int i;
		    string new_pos1 = pos;
			cout<<"员工是否被升职(1、是，0、否):";
			cin>>i;
			if(i == 1)
			{
				cout<<"请输入员工的新职务: ";
				cin>>new_pos1;
				new_pos = new_pos1;
			}
			else
			cout<<"员工未升职.\n";
		}
		void display()
		{
			Employee :: show();
			cout<<"工作时间: "<<time<<endl;
			cout<<"工资: "<<pay()<<endl;
			cout<<"员工升职为: "<<new_pos<<endl;
		}
protected:
	float time;
};

class Manager : virtual public Employee{
public:
	Manager(){ promote(); }
	float pay()
	{
		return 8000;
	}
	void promote()
	{
		int i;
		string new_pos1 = pos;
	    cout<<"员工是否被升职(1、是，0、否):";
		cin>>i;
		if(i == 1)
		{
			cout<<"请输入员工的新职务: ";
			cin>>new_pos1;
			new_pos = new_pos1;
		}
		else
			cout<<"员工未升职.\n";
	}
	void display()
	{
		Employee :: show();
		cout<<"工资: "<<pay()<<endl;
		cout<<"员工升职为: "<<new_pos<<endl;
	}
};

class Saleman : virtual public Employee{
public:
	Saleman()
	{
		float sales1;
		string par1;
		cout<<"请输入员工的部门和销售额：";
		cin>>par1>>sales1;
		sales = sales1;
		par = par1;
		promote();
	}
	float pay()
	{ return sales*0.04; }
	void promote()
	{
		int i;
		string new_pos1 = pos;
	    cout<<"员工是否被升职(1、是，0、否):";
		cin>>i;
		if(i == 1)
		{
			cout<<"请输入员工的新职务: ";
			cin>>new_pos1;
		    new_pos = new_pos1;
		}
		else
			cout<<"员工未升职.\n";
	}
	void display()
	{
		Employee :: show();
		cout<<"部门: "<<par<<endl;
		cout<<"销售额: "<<sales<<endl;
		cout<<"工资: "<<pay()<<endl;
		cout<<"员工升职为: "<<new_pos<<endl;
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
	Salesmanager(){ promote(); }//pay(5000 + getSales()*0.005); }
	float pay()
	{ return(5000 + getSales()*0.005); }
	void promote()
	{
		int i;
		string new_pos1 = pos;
	    cout<<"员工是否被升职(1、是，0、否):";
		cin>>i;
		if(i == 1)
		{
			cout<<"请输入员工的新职务: ";
			cin>>new_pos1;
			new_pos = new_pos1;
		}
		else
			cout<<"员工未升职.\n";
	}
	  void display()
	  {
		  Saleman :: display();
		 // cout<<"员工升职为: "<<pos<<endl;
	//	  cout<<"工资: "<<pay()<<endl;
	  }
};


void main()
{
	Employee *p;
	cout<<"技术人员：\n";
	Technician t1;	
//	cout<<"销售员：\n";
//	Saleman s1;
	cout<<"销售经理：\n";
    Salesmanager s2;
//	cout<<"经理：\n";
//	Manager m1;
	p = &t1;
	p->display();
//	p = &s1;
//	p->display();
	p = &s2;
	p->display();
//	p = &m1;
//	p->display();
}

