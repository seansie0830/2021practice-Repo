#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
	int password,count;
	for(count=1;count<=3;count++)
	{
		cout<<"��"<<count<<"����J�K�X";
		cin>>password;
		if(password==123)
		{
			break;
		}
		else
		{
			if(count!=3)
			{
				cout<<"�K�X���~�A�Э��s��J\n";
				
			}
		}
	}
	if(count<=3)
	{
		cout<<"�w��i�J���t��\n";
	}
	else
	{
		cout<<"�z�w�s��T����J���~�K�X�A�L�k�n�J"	;
	}
 } 
