// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
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
		cout<<"姓名\t"<<"学号\t"<<"成绩\t"<<endl;
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
		  cout<<"系统存储量已满"<<endl;
		  return ;
	   }
	    cout<<"姓名："<<endl;
		cin>>s[studentCount].name;
		cout<<"学号："<<endl;
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
			  cout<<"没有这个学生"<<endl;
		 }else{
			 s[pos].grade=-1;
			 studentCount--;
			 cout<<"删除成功"<<endl;
		 }
}
void enterGrade(Student s[])
{         
	      int num,grade;
          cout<<"请输入学生的学号"<<endl;
		  cin>>num;
		  int pos=0;
		  while(s[pos].number!=num&&pos<100)
		  {
			  pos++;
	      }
		  if(pos==studentCount)
		  {
			  cout<<"输入错误"<<endl;
		  }else{
			   cout<<"请输入该学生的成绩"<<endl;
			   cin>>grade;
			   s[pos].grade=grade;
			   cout<<"输入成功"<<endl;
		  }
}

int main()
{
	while(1)
	{
		char choose;
		cout<<"1)查看学生名单"<<endl;
	    cout<<"2)增加学生"<<endl;
	    cout<<"3)退选"<<endl;
	    cout<<"4)录入成绩"<<endl;
	    cout<<"5)退出程序"<<endl;
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
		default:cout<<"输入非法"<<endl;
			break;
		}
	}
	return 0;
	
}

