// helloworld.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    for(int i=0;i<9;i++)
	{
		 for(int j=0;j<i;j++)
		 {
			 int k=j*i;
			 cout<<k;
		 }
		 cout<<endl;
	}
	system("pause");
	return 0;
}
