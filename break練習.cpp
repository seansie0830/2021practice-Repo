#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
	int password,count;
	for(count=1;count<=3;count++)
	{
		cout<<"第"<<count<<"次輸入密碼";
		cin>>password;
		if(password==123)
		{
			break;
		}
		else
		{
			if(count!=3)
			{
				cout<<"密碼錯誤，請重新輸入\n";
				
			}
		}
	}
	if(count<=3)
	{
		cout<<"歡迎進入本系統\n";
	}
	else
	{
		cout<<"您已連續三次輸入錯誤密碼，無法登入"	;
	}
 } 
