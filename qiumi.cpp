// qiumi.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}
#include<iostream>
using namespace std;
double mi(double a,int b)
{
	double t;
	if(b==0)
		t=1;
	else
		t=mi(a,b-1)*a;
	return(t);
}
int main()
{
	double x;
	int y;
	double ans;
	cout<<"���Ⱥ�����������x,y:";
	cin>>x;
	cin>>y;
	ans=mi(x,y);
	cout<<x<<"^"<<y<<"="<<ans;
	return 0;
}
