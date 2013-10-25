// pailie.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}
#include<iostream>
using namespace std;
int main()
{
	int m,n,i,A=1,B=1,C=1,ans;
	cout<<"请输入两个整数:"<<endl;
	cin>>m;
	cin>>n;
	for(i=1;i<=m;i++)
		A*=i;
	for(i=1;i<=n;i++)
		B*=i;
	for(i=1;i<=(m-n);i++)
		C*=i;
	ans=A/B/C;
	cout<<"C(m,n)="<<ans;
	return 0;
}