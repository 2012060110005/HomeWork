// ConsoleApplication1.cpp : �������̨Ӧ�ó������ڵ㡣
//
#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
int studentCount=0;
struct Student{
		char name[20];
		long number;
		double grade;
};
Student stu[100];
void list(Student s[])
{
		cout<<"����\t"<<"ѧ��\t"<<"�ɼ�\t"<<endl;
		for(int i=0;i<studentCount;i++)
		{    
			if(s[i].grade==-1)
			{  continue;}
			cout<<s[i].name<<"\t"<<s[i].number<<"\t"<<s[i].grade<<endl;
		}
}
void addStudent(Student s[])
{
       if(studentCount==100)
	   {
		  cout<<"ϵͳ�洢������"<<endl;
		  return ;
	   }
	    cout<<"������"<<endl;
		cin>>s[studentCount].name;
		cout<<"ѧ�ţ�"<<endl;
		cin>>s[studentCount].number;
		studentCount++;
	   
}
void deleteStudent(Student s[])
{
	     char  stuname[20];
		 cin>>stuname;
         int pos=0;
		 while(strcmp(s[pos].name,stuname)!=0)
		 {
			  pos++;
		 }
		 if(pos==studentCount)
		 {
			  cout<<"û�����ѧ��"<<endl;
		 }else{
			 s[pos].grade=-1;
			 studentCount--;
			 cout<<"ɾ���ɹ�"<<endl;
		 }
}
void enterGrade(Student s[])
{         
	      int num,grade;
          cout<<"������ѧ����ѧ��"<<endl;
		  cin>>num;
		  int pos=0;
		  while(s[pos].number!=num&&pos<100)
		  {
			  pos++;
	      }
		  if(pos==studentCount)
		  {
			  cout<<"�������"<<endl;
		  }else{
			   cout<<"�������ѧ���ĳɼ�"<<endl;
			   cin>>grade;
			   s[pos].grade=grade;
			   cout<<"����ɹ�"<<endl;
		  }
}

int main()
{
	while(1)
	{
		char choose;
		cout<<"1)�鿴ѧ������"<<endl;
	    cout<<"2)����ѧ��"<<endl;
	    cout<<"3)��ѡ"<<endl;
	    cout<<"4)¼��ɼ�"<<endl;
	    cout<<"5)�˳�����"<<endl;
		cin>>choose;
		switch (choose)
		{
		case '1':
			list(stu);
			break;
		case '2':
			addStudent(stu);
			break;
		case '3':
			deleteStudent(stu);
			break;
		case '4':
			enterGrade(stu);
			break;
		case '5':
			 return 0;
		default:cout<<"����Ƿ�"<<endl;
			break;
		}
	}
	return 0;
	
}

