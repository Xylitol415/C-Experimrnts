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
cout<<"��������:";
cin>>name;   
cout<<"�����Ա�:";
cin>>sex;    
cout<<"����������ڣ�";   
cin>>year>>month>>day;   
cout<<"������:";
cin>>id;
salary=0;  
}  
void display()  
{   
cout<<"������"<<name<<endl;   
cout<<"�Ա�"<<sex<<endl;   
cout<<"�������ڣ�"<<year<<"��"<<month<<"��"<<day<<"��"<<endl;   
cout<<"��ţ�"<<id<<endl;  
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
cout<<"ְλ���ܾ���"<<endl;   
cout<<"�̶���н��8000Ԫ"<<endl; 
 } 
};

 
class technician:public employee{ 
public:  void pay()  
{ employee1();   
cout<<"���빤��ʱ��:";
cin>>worktime;   
salary=25*worktime;  
}  
void display()  
{   display();   
cout<<"ְλ��������Ա"<<endl;  
cout<<"����ʱ�䣺"<<worktime<<"h"<<endl;   
cout<<"��н��"<<salary<<"Ԫ"<<endl;  
} 
protected:  
double worktime; 
}; 
 
class saleman:public employee{ 
public:  void pay()  
{   
employee1();  
cout<<"�������۶�:";
cin>>sale;   
cout<<"������������:";
cin>>department;   
salary=sale*0.04;  
}  
void display()  
{   
display();   
cout<<"ְλ������Ա"<<endl;   
cout<<"���۶"<<sale<<endl;   
cout<<"�������ţ�"<<department<<endl;   
cout<<"��н:"<<salary<<"Ԫ"<<endl;  
} 
protected:  
int sale;  
string department;
}; 

class salesmanager:public employee{ 
public:  void pay()  
{   
employee1(); 
cout<<"�������۶�:";cin>>sale;   
salary=(5000+sale*0.005);  
} 
void display()  
{   
display();   
cout<<"ְλ�����۾���"<<endl;  
cout<<"��н��"<<salary<<"Ԫ"<<endl;  
} 
protected: 
int sale; 
}; 

int main()
{  
int i;  
cout<<"        С�͹�˾��Ա����ϵͳ        "<<endl;  
cout<<"    1.�ܾ���  "<<endl;  
cout<<"    2.������Ա  "<<endl;  
cout<<"    3.����Ա  "<<endl;  
cout<<"    4.���۾���  "<<endl;  
while(1)  
{   
cin>>i;   
switch(i)   
{
   case 1:{   	 
		manager s1;    
	     	cout<<"������һ���������Ϣ:"<<endl;    
		s1.pay();    cout<<endl;    
		cout<<"һ������manager����Ϣ:"<<endl;    
		s1.display();    
		cout<<endl<<endl;    
	 	break;       
	   }   
case 2:{    
		technician s2;    
		cout<<"������һ��������Ա����Ϣ:"<<endl;    
		s2.pay();    
		cout<<endl;    
		cout<<"һ��������Աtechnician����Ϣ:"<<endl;    
		s2.display();
		cout<<endl<<endl;    
		break;       
	}   
case 3:{ 
   	saleman s3;    
		cout<<"������һ������Ա����Ϣ:"<<endl;    
		s3.pay();    
		cout<<endl;   
		cout<<"һ������Աsaleman����Ϣ:"<<endl;    
		s3.display();
		cout<<endl<<endl;    
		break;       
	}   
case 4:{   
		salesmanager s4;    
		cout<<"������һ�����۾������Ϣ:"<<endl;    
		s4.pay();    
		cout<<endl;    
		cout<<"һ�����۾���salesmanager����Ϣ:"<<endl;    
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
		cout<<"������Ա���ĳ������ڣ�";
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
		cout<<"������Ա�����������Ա�";
    	cin>>name1>>sex1;
		name = name1;
		sex = sex1;
	}
	void show()
	{
		cout<<"---------------------------------------------\n";
		cout<<"����: "<<name<<endl;
		cout<<"�Ա�: "<<sex<<endl;
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
		  cout<<"������Ա���ı�ź�ְ��";
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
	      cout<<"Ա���Ƿ���ְ(1���ǣ�0����):";
		  cin>>i;
		  if(i == 1)
		  {
		        cout<<"������Ա������ְ��: ";
				cin>>new_pos1;
				new_pos = new_pos1;
		  }*/
	  }
	  void show()
	  {
		  Person :: show();
		  cout<<"���: "<<num<<endl;
		  cout<<"ְλ: "<<pos<<endl;
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
			cout<<"������Ա���Ĺ���ʱ�䣺";
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
			cout<<"Ա���Ƿ���ְ(1���ǣ�0����):";
			cin>>i;
			if(i == 1)
			{
				cout<<"������Ա������ְ��: ";
				cin>>new_pos1;
				new_pos = new_pos1;
			}
			else
			cout<<"Ա��δ��ְ.\n";
		}
		void display()
		{
			Employee :: show();
			cout<<"����ʱ��: "<<time<<endl;
			cout<<"����: "<<pay()<<endl;
			cout<<"Ա����ְΪ: "<<new_pos<<endl;
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
	    cout<<"Ա���Ƿ���ְ(1���ǣ�0����):";
		cin>>i;
		if(i == 1)
		{
			cout<<"������Ա������ְ��: ";
			cin>>new_pos1;
			new_pos = new_pos1;
		}
		else
			cout<<"Ա��δ��ְ.\n";
	}
	void display()
	{
		Employee :: show();
		cout<<"����: "<<pay()<<endl;
		cout<<"Ա����ְΪ: "<<new_pos<<endl;
	}
};

class Saleman : virtual public Employee{
public:
	Saleman()
	{
		float sales1;
		string par1;
		cout<<"������Ա���Ĳ��ź����۶";
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
	    cout<<"Ա���Ƿ���ְ(1���ǣ�0����):";
		cin>>i;
		if(i == 1)
		{
			cout<<"������Ա������ְ��: ";
			cin>>new_pos1;
		    new_pos = new_pos1;
		}
		else
			cout<<"Ա��δ��ְ.\n";
	}
	void display()
	{
		Employee :: show();
		cout<<"����: "<<par<<endl;
		cout<<"���۶�: "<<sales<<endl;
		cout<<"����: "<<pay()<<endl;
		cout<<"Ա����ְΪ: "<<new_pos<<endl;
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
	    cout<<"Ա���Ƿ���ְ(1���ǣ�0����):";
		cin>>i;
		if(i == 1)
		{
			cout<<"������Ա������ְ��: ";
			cin>>new_pos1;
			new_pos = new_pos1;
		}
		else
			cout<<"Ա��δ��ְ.\n";
	}
	  void display()
	  {
		  Saleman :: display();
		 // cout<<"Ա����ְΪ: "<<pos<<endl;
	//	  cout<<"����: "<<pay()<<endl;
	  }
};


void main()
{
	Employee *p;
	cout<<"������Ա��\n";
	Technician t1;	
//	cout<<"����Ա��\n";
//	Saleman s1;
	cout<<"���۾���\n";
    Salesmanager s2;
//	cout<<"����\n";
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

