#include<iostream>
#include<string>
using namespace std;
const int stu_num = 4;									//ѧ����
const int cou_num = 4;									//�γ���
class Student{
public:
	Student(string name1, string stu_no1, float score1[cou_num]);
	float student_avescore();
	void course_avescore();
	void show_failed_num();
	void show();
private:
	string name;										//����
	string stu_no;										//ѧ��
	float score[cou_num];
	static int failed_num[stu_num];
	static float sum[stu_num];
	static float stu_sco_ave;							//ÿ��ѧ��ƽ���ɼ�
	static float cou_sco_ave[cou_num];							//ÿ�ſγ�ƽ���ɼ�
};

Student :: Student(string name1, string stu_no1, float score1[cou_num])
{
	int i;
	name = name1;
	stu_no = stu_no1;
	for(i=0; i<cou_num; i++)
	{
		score[i] = score1[i];
		sum[i]+=score[i];
		if(score[i]<60)
			failed_num[i]++;
	}
}

float Student :: student_avescore()
{
	int i;
	float sum =0 ;
	for(i = 0; i < cou_num; i++)
		sum += score[i];
	stu_sco_ave = sum / stu_num;
    return stu_sco_ave;
}

void Student :: course_avescore()
{
	int i;
	for(i = 0; i < cou_num; i++)
	{	cou_sco_ave[i] = sum[i] / cou_num;
        cout<<cou_sco_ave[i]<<"\t  ";
	}
	cout<<endl;
}

void Student :: show_failed_num()
{
	int i;
	cout<<"������ѧ������\t\t   ";
	for(i=0; i<stu_num; i++)
		cout<<failed_num[i]<<"\t\t";
	cout<<endl;
}

void Student :: show()
{
	int i;
	cout<<name<<"\t   "<<stu_no<<"\t   ";
	for(i = 0; i < cou_num; i++)
		cout<<score[i]<<"\t\t";
	cout<<student_avescore()<<endl;
}

int Student :: failed_num[cou_num] = {0 };
float Student :: stu_sco_ave = 0.0;			 				
float Student :: cou_sco_ave[cou_num] ={ 0.0 };
float Student :: sum[cou_num] = {0.0};			 				

void main()
{ 
	int i, j, k; 
	float score[stu_num][cou_num];
	string name[stu_num],stu_no[stu_num];
	cout<<"������"<<stu_num<<"��ѧ��������ѧ�ź�"<<cou_num<<"�ſγ̳ɼ�:\n";
	for(i = 0; i < stu_num; i++)
	{
		cin>>name[i]>>stu_no[i];
		for(j = 0; j < cou_num; j++)	
			cin>>score[i][j];		
	}
	Student stu[stu_num]={Student(name[0], stu_no[0], score[0]),
	Student(name[1], stu_no[1], score[1]),
	Student(name[2], stu_no[2], score[2]),
	Student(name[2], stu_no[2], score[3])};	
	cout<<"\n\t\t\t\tѧ�����Ƴɼ�\n";
	cout<<"����\t   ѧ��\t\t�������\t�źŴ���\t���ݽṹ\tƽ���ɼ�\n";
	for(k=0; k<stu_num; k++)
		stu[k].show();
	cout<<"ÿ�ſγ�ƽ���ɼ�\t   ";
	stu[stu_num].course_avescore();
	stu[stu_num].show_failed_num();
}




